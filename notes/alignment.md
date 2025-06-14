# alignment

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 13

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- StringBuilder: amortize allocation by doubling on grow.

## entry 23

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 30

- Heap when you only need top-k; full sort is wasted work.

## entry 31

- Stable sort matters when a secondary key was set in a prior pass.

## entry 32

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 33

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- Splay tree: every access splays to the root; amortized O(log n).

## entry 36

- LIS via patience: each pile holds the smallest tail of length k.

## entry 37

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 38

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 40

- Greedy by end-time picks the most non-overlapping intervals.

## entry 41

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 47

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 51

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 52

- StringBuilder: amortize allocation by doubling on grow.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- Monotonic stack pops while the new element violates the invariant.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 64

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 65

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

- Splay tree: every access splays to the root; amortized O(log n).

## entry 68

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 69

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 70

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 71

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 73

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 74

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 80

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 81

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 82

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 86

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 87

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 90

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 92

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 93

- Euler tour flattens a tree into an array for range-query LCA.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 97

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 98

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 99

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 100

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 101

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Monotonic stack pops while the new element violates the invariant.

## entry 104

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 108

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 109

- Splay tree: every access splays to the root; amortized O(log n).

## entry 110

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

- Euler tour flattens a tree into an array for range-query LCA.

## entry 112

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 113

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 115

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 116

- StringBuilder: amortize allocation by doubling on grow.
