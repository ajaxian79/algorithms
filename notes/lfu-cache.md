# lfu-cache

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Monotonic stack pops while the new element violates the invariant.

## entry 18

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Splay tree: every access splays to the root; amortized O(log n).

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 41

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 44

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 45

- Heap when you only need top-k; full sort is wasted work.

## entry 46

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 47

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 50

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 51

- Monotonic stack pops while the new element violates the invariant.

## entry 52

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 53

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 54

- Heap when you only need top-k; full sort is wasted work.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 58

- Monotonic stack pops while the new element violates the invariant.

## entry 59

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 66

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 69

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 70

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 71

- Walk both pointers from each end inward; advance the smaller side.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 74

- Greedy by end-time picks the most non-overlapping intervals.

## entry 75

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

- LIS via patience: each pile holds the smallest tail of length k.

## entry 77

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 78

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 84

- Greedy by end-time picks the most non-overlapping intervals.

## entry 85

- Walk both pointers from each end inward; advance the smaller side.

## entry 86

- Euler tour flattens a tree into an array for range-query LCA.

## entry 87

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

- Walk both pointers from each end inward; advance the smaller side.

## entry 89

- Walk both pointers from each end inward; advance the smaller side.

## entry 90

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 91

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 92

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 93

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 94

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 95

- Walk both pointers from each end inward; advance the smaller side.

## entry 96

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 97

- StringBuilder: amortize allocation by doubling on grow.

## entry 98

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 100

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 103

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 106

- LIS via patience: each pile holds the smallest tail of length k.

## entry 107

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 108

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 109

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 110

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 111

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 113

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 114

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 116

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 117

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- Splay tree: every access splays to the root; amortized O(log n).

## entry 120

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 121

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
