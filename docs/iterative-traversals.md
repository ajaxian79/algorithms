# iterative-traversals

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 8

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

Articulation points: same DFS as bridges, with a slightly different test.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

Monotonic stack pops while the new element violates the invariant.

## entry 24

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 27

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 31

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 33

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 42

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 43

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 44

StringBuilder: amortize allocation by doubling on grow.

## entry 45

Splay tree: every access splays to the root; amortized O(log n).

## entry 46

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

Stable sort matters when a secondary key was set in a prior pass.

## entry 51

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 52

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 54

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 59

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 60

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 61

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 63

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 67

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 68

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 69

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Splay tree: every access splays to the root; amortized O(log n).

## entry 74

State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 76

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 80

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 81

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 83

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 84

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 85

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 86

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 91

State compression: bitmask + integer encodes a small subset cheaply.

## entry 92

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 96

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 100

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 101

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 102

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 103

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 104

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 105

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 106

Heap when you only need top-k; full sort is wasted work.

## entry 107

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 108

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 110

Euler tour flattens a tree into an array for range-query LCA.

## entry 111

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Heap when you only need top-k; full sort is wasted work.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 116

Heap when you only need top-k; full sort is wasted work.

## entry 117

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 118

Monotonic stack pops while the new element violates the invariant.

## entry 119

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 120

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 121

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 122

Interval tree: stores intervals on the median; query traverses O(log n) levels.
