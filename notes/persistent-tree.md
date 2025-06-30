# persistent-tree

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

- Stable sort matters when a secondary key was set in a prior pass.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 14

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 15

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 16

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 17

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 18

- Monotonic stack pops while the new element violates the invariant.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 23

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 28

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Greedy by end-time picks the most non-overlapping intervals.

## entry 32

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 33

- Euler tour flattens a tree into an array for range-query LCA.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 36

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 41

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 42

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 43

- Monotonic stack pops while the new element violates the invariant.

## entry 44

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 45

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 46

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 47

- Heap when you only need top-k; full sort is wasted work.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 52

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 53

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 54

- Heap when you only need top-k; full sort is wasted work.

## entry 55

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 59

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 66

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 67

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 69

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 71

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 72

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 73

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 74

- Euler tour flattens a tree into an array for range-query LCA.

## entry 75

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 81

- Greedy by end-time picks the most non-overlapping intervals.

## entry 82

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 83

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 89

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 90

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 93

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 94

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 95

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

- Heap when you only need top-k; full sort is wasted work.

## entry 97

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 99

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 100

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 101

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 102

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 103

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 104

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
