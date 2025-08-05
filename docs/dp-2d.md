# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Merge intervals: sort by start; extend the running interval while overlapping.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Manacher expands around each center, reusing prior radii via mirror reflection.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

LIS via patience: each pile holds the smallest tail of length k.

## entry 10

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

StringBuilder: amortize allocation by doubling on grow.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 20

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 26

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 28

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

State compression: bitmask + integer encodes a small subset cheaply.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 36

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 37

Heap when you only need top-k; full sort is wasted work.

## entry 38

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

State compression: bitmask + integer encodes a small subset cheaply.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 44

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 50

StringBuilder: amortize allocation by doubling on grow.

## entry 51

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 54

Greedy by end-time picks the most non-overlapping intervals.

## entry 55

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 59

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 60

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 61

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Walk both pointers from each end inward; advance the smaller side.

## entry 66

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 69

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 70

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 71

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 72

Stable sort matters when a secondary key was set in a prior pass.

## entry 73

Greedy by end-time picks the most non-overlapping intervals.

## entry 74

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 75

Wavelet tree: range k-th element in O(log Σ) time.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 79

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 84

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 87

Union-Find with path compression amortizes to near-O(1) per op.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

Union-Find with path compression amortizes to near-O(1) per op.

## entry 90

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 93

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 95

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 98

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 99

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 101

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 103

Wavelet tree: range k-th element in O(log Σ) time.

## entry 104

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 105

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 106

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 108

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 109

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 112

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 113

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

Monotonic deque: push back, pop back to maintain order, pop front when stale.
