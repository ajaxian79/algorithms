# sieve

- LIS via patience: each pile holds the smallest tail of length k.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Stable sort matters when a secondary key was set in a prior pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- Stable sort matters when a secondary key was set in a prior pass.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 10

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 14

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 15

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

- Stable sort matters when a secondary key was set in a prior pass.

## entry 21

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

- Euler tour flattens a tree into an array for range-query LCA.

## entry 23

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 32

- Greedy by end-time picks the most non-overlapping intervals.

## entry 33

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 34

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 38

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 39

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 40

- Walk both pointers from each end inward; advance the smaller side.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 47

- Stable sort matters when a secondary key was set in a prior pass.

## entry 48

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 49

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 50

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 51

- Walk both pointers from each end inward; advance the smaller side.

## entry 52

- Monotonic stack pops while the new element violates the invariant.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 57

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 60

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 61

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 64

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 65

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

- Monotonic stack pops while the new element violates the invariant.

## entry 69

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 70

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 71

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 72

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 73

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Euler tour flattens a tree into an array for range-query LCA.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 81

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 82

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 88

- Stable sort matters when a secondary key was set in a prior pass.

## entry 89

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 90

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 91

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 92

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 93

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 95

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 96

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 100

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 101

- LIS via patience: each pile holds the smallest tail of length k.

## entry 102

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 103

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 105

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- Euler tour flattens a tree into an array for range-query LCA.

## entry 109

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 112

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 113

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 114

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 116

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 117

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 119

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 122

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 125

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 126

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
