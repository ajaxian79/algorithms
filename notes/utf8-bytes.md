# utf8-bytes

## entry 1

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 11

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

- LIS via patience: each pile holds the smallest tail of length k.

## entry 32

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 36

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 39

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 45

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 46

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 47

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 51

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 52

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 53

- Euler tour flattens a tree into an array for range-query LCA.

## entry 54

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 57

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 59

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 60

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 61

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 62

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 63

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 64

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 65

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 66

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 69

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 70

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 71

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 74

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 75

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 77

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 78

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 79

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 82

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 86

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 87

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 88

- StringBuilder: amortize allocation by doubling on grow.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 91

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 92

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 93

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 94

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

- Splay tree: every access splays to the root; amortized O(log n).

## entry 97

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 99

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 100

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 102

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 103

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 104

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 106

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 107

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 108

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 110

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 113

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 115

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 116

- Euler tour flattens a tree into an array for range-query LCA.

## entry 117

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 118

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 121

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 122

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 123

- Heap when you only need top-k; full sort is wasted work.

## entry 124

- State compression: bitmask + integer encodes a small subset cheaply.
