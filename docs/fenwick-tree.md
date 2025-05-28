# fenwick-tree

Merge intervals: sort by start; extend the running interval while overlapping.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Walk both pointers from each end inward; advance the smaller side.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Stable sort matters when a secondary key was set in a prior pass.

Greedy by end-time picks the most non-overlapping intervals.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Unbounded knapsack: capacity inner ascending allows item reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

LIS via patience: each pile holds the smallest tail of length k.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 26

Greedy by end-time picks the most non-overlapping intervals.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 31

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 32

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 33

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 34

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 35

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 40

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 41

State compression: bitmask + integer encodes a small subset cheaply.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Euler tour flattens a tree into an array for range-query LCA.

## entry 44

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 45

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 46

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 52

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 53

LIS via patience: each pile holds the smallest tail of length k.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Articulation points: same DFS as bridges, with a slightly different test.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 65

LIS via patience: each pile holds the smallest tail of length k.

## entry 66

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 67

Articulation points: same DFS as bridges, with a slightly different test.

## entry 68

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 69

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 71

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 72

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 76

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 77

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 81

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 85

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 86

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 87

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

Wavelet tree: range k-th element in O(log Σ) time.

## entry 95

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 96

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 98

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

Stable sort matters when a secondary key was set in a prior pass.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 105

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 108

Heap when you only need top-k; full sort is wasted work.

## entry 109

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 110

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

Edit distance is LCS with a twist: substitution is a third option at each cell.
