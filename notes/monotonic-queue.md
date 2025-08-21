# monotonic-queue

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Union-Find with path compression amortizes to near-O(1) per op.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Walk both pointers from each end inward; advance the smaller side.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Greedy by end-time picks the most non-overlapping intervals.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic stack pops while the new element violates the invariant.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Euler tour flattens a tree into an array for range-query LCA.

## entry 20

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 23

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 24

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- LIS via patience: each pile holds the smallest tail of length k.

## entry 31

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 34

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- Monotonic stack pops while the new element violates the invariant.

## entry 37

- StringBuilder: amortize allocation by doubling on grow.

## entry 38

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 44

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 54

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 56

- StringBuilder: amortize allocation by doubling on grow.

## entry 57

- Euler tour flattens a tree into an array for range-query LCA.

## entry 58

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 60

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 61

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 64

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 65

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 66

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 67

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 69

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 71

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 72

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 76

- Monotonic stack pops while the new element violates the invariant.

## entry 77

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 78

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 80

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 81

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 84

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 85

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 88

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 89

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

- Splay tree: every access splays to the root; amortized O(log n).

## entry 91

- Splay tree: every access splays to the root; amortized O(log n).

## entry 92

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 93

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 94

- Heap when you only need top-k; full sort is wasted work.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 98

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 102

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 103

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 106

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 108

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 109

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 110

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 111

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 112

- Heap when you only need top-k; full sort is wasted work.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 115

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 117

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 118

- Stable sort matters when a secondary key was set in a prior pass.

## entry 119

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 120

- Monotonic stack pops while the new element violates the invariant.

## entry 121

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 124

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
