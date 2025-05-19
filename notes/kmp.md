# kmp

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LIS via patience: each pile holds the smallest tail of length k.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Heap when you only need top-k; full sort is wasted work.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 12

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 14

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 18

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 19

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 20

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 30

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

- Heap when you only need top-k; full sort is wasted work.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 38

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 40

- Heap when you only need top-k; full sort is wasted work.

## entry 41

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 42

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 43

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 48

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 49

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 53

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 54

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 55

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 56

- Splay tree: every access splays to the root; amortized O(log n).

## entry 57

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 58

- Stable sort matters when a secondary key was set in a prior pass.

## entry 59

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 60

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 63

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 65

- Heap when you only need top-k; full sort is wasted work.

## entry 66

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 71

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 72

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 74

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 75

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 80

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 88

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 89

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 93

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 94

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 98

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 100

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 101

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 102

- Walk both pointers from each end inward; advance the smaller side.

## entry 103

- Euler tour flattens a tree into an array for range-query LCA.

## entry 104

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 105

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 106

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 107

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 108

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 110

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 111

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 113

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 114

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 115

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 116

- Heap when you only need top-k; full sort is wasted work.

## entry 117

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 118

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 119

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 120

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 121

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 122

- Monotonic stack pops while the new element violates the invariant.

## entry 123

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 124

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 125

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 126

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 130

- Rope: tree of small string fragments; O(log n) concat and substring.
