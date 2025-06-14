# heap-vs-sort

Manacher expands around each center, reusing prior radii via mirror reflection.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Heap when you only need top-k; full sort is wasted work.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Monotonic stack pops while the new element violates the invariant.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

LIS via patience: each pile holds the smallest tail of length k.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Edit distance is LCS with a twist: substitution is a third option at each cell.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Stable sort matters when a secondary key was set in a prior pass.

Merge intervals: sort by start; extend the running interval while overlapping.

In-place compaction uses two pointers: read advances always, write only on keep.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Union-Find with path compression amortizes to near-O(1) per op.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Morris traversal threads predecessors back to current node — O(1) extra space.

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Heap when you only need top-k; full sort is wasted work.

## entry 12

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 13

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 14

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 15

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 16

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

Walk both pointers from each end inward; advance the smaller side.

## entry 18

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

Heap when you only need top-k; full sort is wasted work.

## entry 22

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 27

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 30

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 31

LIS via patience: each pile holds the smallest tail of length k.

## entry 32

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 33

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 34

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 35

LIS via patience: each pile holds the smallest tail of length k.

## entry 36

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

State compression: bitmask + integer encodes a small subset cheaply.

## entry 39

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 40

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 42

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 43

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 46

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

LIS via patience: each pile holds the smallest tail of length k.

## entry 49

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 50

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 51

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 54

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 56

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 58

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 59

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 61

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 62

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 63

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 64

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 65

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 66

Stable sort matters when a secondary key was set in a prior pass.

## entry 67

Splay tree: every access splays to the root; amortized O(log n).

## entry 68

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 69

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 70

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 71

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 72

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 73

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 74

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

StringBuilder: amortize allocation by doubling on grow.

## entry 76

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 77

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 78

Heap when you only need top-k; full sort is wasted work.

## entry 79

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 80

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 81

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 82

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 83

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

Union-Find with path compression amortizes to near-O(1) per op.

## entry 89

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 90

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 91

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 92

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 95

Stable sort matters when a secondary key was set in a prior pass.

## entry 96

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 97

Splay tree: every access splays to the root; amortized O(log n).

## entry 98

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 99

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 100

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 101

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 102

Monotonic stack pops while the new element violates the invariant.

## entry 103

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 108

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 109

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 110

Greedy by end-time picks the most non-overlapping intervals.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
