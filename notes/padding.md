# padding

## entry 1

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 12

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 13

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 16

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 18

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 23

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 24

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 30

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 35

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 36

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 38

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 39

- Monotonic stack pops while the new element violates the invariant.

## entry 40

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 41

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 42

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 43

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 44

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 45

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 46

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 50

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 51

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 52

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 54

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

- Walk both pointers from each end inward; advance the smaller side.

## entry 56

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 57

- Walk both pointers from each end inward; advance the smaller side.

## entry 58

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

- LIS via patience: each pile holds the smallest tail of length k.

## entry 60

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 61

- Heap when you only need top-k; full sort is wasted work.

## entry 62

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 63

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 65

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 66

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 68

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 72

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Splay tree: every access splays to the root; amortized O(log n).

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 78

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 82

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 84

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 89

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 90

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 91

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 92

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 94

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

- StringBuilder: amortize allocation by doubling on grow.

## entry 97

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 98

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 101

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 102

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Heap when you only need top-k; full sort is wasted work.

## entry 106

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 107

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- Walk both pointers from each end inward; advance the smaller side.

## entry 111

- Graph DP on DAGs: topological order makes the dependency direction explicit.
