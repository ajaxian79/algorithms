# hash-collision

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 7

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 11

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 20

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.

## entry 26

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Greedy by end-time picks the most non-overlapping intervals.

## entry 29

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 32

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 33

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 36

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 37

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 40

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 42

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 44

- Splay tree: every access splays to the root; amortized O(log n).

## entry 45

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- StringBuilder: amortize allocation by doubling on grow.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 52

- Greedy by end-time picks the most non-overlapping intervals.

## entry 53

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 54

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 62

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 63

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 64

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 65

- Walk both pointers from each end inward; advance the smaller side.

## entry 66

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 70

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 72

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 73

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 74

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 75

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- Splay tree: every access splays to the root; amortized O(log n).

## entry 78

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 79

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 81

- LIS via patience: each pile holds the smallest tail of length k.

## entry 82

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 83

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 84

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 91

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 92

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 94

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 95

- StringBuilder: amortize allocation by doubling on grow.

## entry 96

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 100

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 102

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 103

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 104

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 106

- Stable sort matters when a secondary key was set in a prior pass.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- Heap when you only need top-k; full sort is wasted work.

## entry 109

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 110

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

- Heap when you only need top-k; full sort is wasted work.

## entry 113

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 114

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 116

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 117

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 119

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

- Pick a pivot, partition, recurse on the side that contains the kth slot.
