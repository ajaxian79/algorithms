# binary-search

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Union-Find with path compression amortizes to near-O(1) per op.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Heap when you only need top-k; full sort is wasted work.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Greedy by end-time picks the most non-overlapping intervals.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 8

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 9

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 10

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 14

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 15

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 16

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 23

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 30

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 31

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 35

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 44

- Monotonic stack pops while the new element violates the invariant.

## entry 45

- Endianness matters when serializing multi-byte ints to a file or wire.
