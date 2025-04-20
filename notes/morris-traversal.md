# morris-traversal

- Greedy by end-time picks the most non-overlapping intervals.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- In-place compaction uses two pointers: read advances always, write only on keep.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 13

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 15

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 16

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

- Walk both pointers from each end inward; advance the smaller side.

## entry 24

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 30

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 31

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 40

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 44

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 45

- Stable sort matters when a secondary key was set in a prior pass.

## entry 46

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

- LIS via patience: each pile holds the smallest tail of length k.

## entry 48

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 49

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 52

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Heap when you only need top-k; full sort is wasted work.

## entry 61

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 64

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 65

- Stable sort matters when a secondary key was set in a prior pass.

## entry 66

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 68

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 69

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 71

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 74

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

- Euler tour flattens a tree into an array for range-query LCA.

## entry 76

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 80

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 81

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 82

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 86

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Euler tour flattens a tree into an array for range-query LCA.

## entry 89

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 94

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 95

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 96

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 97

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 98

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 100

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 101

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 102

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 103

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 106

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 107

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

- Splay tree: every access splays to the root; amortized O(log n).

## entry 110

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 111

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- Monotonic stack pops while the new element violates the invariant.

## entry 114

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 115

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 116

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 117

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 118

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 119

- Stable sort matters when a secondary key was set in a prior pass.

## entry 120

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 121

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 122

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 123

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Padding inside a struct can dwarf the actual data; reorder fields by size.
