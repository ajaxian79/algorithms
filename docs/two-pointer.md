# two-pointer

Monotonic stack pops while the new element violates the invariant.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Unbounded knapsack: capacity inner ascending allows item reuse.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

In-place compaction uses two pointers: read advances always, write only on keep.

Merge intervals: sort by start; extend the running interval while overlapping.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Manacher expands around each center, reusing prior radii via mirror reflection.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1

Walk both pointers from each end inward; advance the smaller side.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 7

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 8

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 10

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 11

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

Stable sort matters when a secondary key was set in a prior pass.

## entry 14

Stable sort matters when a secondary key was set in a prior pass.

## entry 15

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 24

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Heap when you only need top-k; full sort is wasted work.

## entry 28

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 33

Euler tour flattens a tree into an array for range-query LCA.

## entry 34

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 36

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 37

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 39

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 42

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

State compression: bitmask + integer encodes a small subset cheaply.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Walk both pointers from each end inward; advance the smaller side.

## entry 51

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

Graph DP on DAGs: topological order makes the dependency direction explicit.
