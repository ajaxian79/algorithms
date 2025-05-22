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

## entry 41

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 42

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 43

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 44

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 46

- LIS via patience: each pile holds the smallest tail of length k.

## entry 47

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 48

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 49

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 50

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 51

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Monotonic stack pops while the new element violates the invariant.

## entry 60

- Stable sort matters when a secondary key was set in a prior pass.

## entry 61

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 68

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 69

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 73

- LIS via patience: each pile holds the smallest tail of length k.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 76

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 77

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 78

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 79

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 80

- Euler tour flattens a tree into an array for range-query LCA.

## entry 81

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 83

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Monotonic stack pops while the new element violates the invariant.

## entry 88

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 92

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 94

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 95

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 98

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

- Walk both pointers from each end inward; advance the smaller side.

## entry 101

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 104

- Splay tree: every access splays to the root; amortized O(log n).

## entry 105

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 106

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 107

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 110

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 111

- Stable sort matters when a secondary key was set in a prior pass.

## entry 112

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 113

- StringBuilder: amortize allocation by doubling on grow.

## entry 114

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 116

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 117

- LIS via patience: each pile holds the smallest tail of length k.

## entry 118

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 119

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 121

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 125

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

- Euler tour flattens a tree into an array for range-query LCA.

## entry 127

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 128

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 129

- StringBuilder: amortize allocation by doubling on grow.

## entry 130

- Heap when you only need top-k; full sort is wasted work.

## entry 131

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 132

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 133

- DFS on a grid: write a sentinel into the visited cell; restore if needed.
