# string-builder

## entry 1

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

StringBuilder: amortize allocation by doubling on grow.

## entry 5

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 18

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 26

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 27

Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 29

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 38

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 41

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

Euler tour flattens a tree into an array for range-query LCA.

## entry 43

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 44

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 45

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 46

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 47

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 48

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 49

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 50

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Monotonic stack pops while the new element violates the invariant.

## entry 54

Euler tour flattens a tree into an array for range-query LCA.

## entry 55

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 56

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 57

StringBuilder: amortize allocation by doubling on grow.

## entry 58

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 60

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 61

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Greedy by end-time picks the most non-overlapping intervals.

## entry 69

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 73

State compression: bitmask + integer encodes a small subset cheaply.

## entry 74

Wavelet tree: range k-th element in O(log Σ) time.

## entry 75

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 76

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 77

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 78

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 88

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 89

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 90

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 91

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 92

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 93

Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 95

Walk both pointers from each end inward; advance the smaller side.

## entry 96

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 98

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 99

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 101

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 102

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 104

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 107

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
