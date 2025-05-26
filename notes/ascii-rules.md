# ascii-rules

## entry 1

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Stable sort matters when a secondary key was set in a prior pass.

## entry 7

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Euler tour flattens a tree into an array for range-query LCA.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.

## entry 24

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 26

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 29

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 32

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 34

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 35

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 36

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

- LIS via patience: each pile holds the smallest tail of length k.

## entry 38

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 40

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 42

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 43

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 44

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 46

- LIS via patience: each pile holds the smallest tail of length k.

## entry 47

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 51

- Splay tree: every access splays to the root; amortized O(log n).

## entry 52

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 57

- StringBuilder: amortize allocation by doubling on grow.

## entry 58

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 61

- Stable sort matters when a secondary key was set in a prior pass.

## entry 62

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 63

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 64

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

- Monotonic stack pops while the new element violates the invariant.

## entry 66

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 68

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 70

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 72

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 76

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 81

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 83

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 86

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 88

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 89

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 91

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 95

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 96

- Greedy by end-time picks the most non-overlapping intervals.

## entry 97

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 98

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 99

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 102

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 103

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 104

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 105

- Splay tree: every access splays to the root; amortized O(log n).

## entry 106

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 108

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 111

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 112

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
