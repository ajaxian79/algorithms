# sparse-table

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 7

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

Splay tree: every access splays to the root; amortized O(log n).

## entry 10

Splay tree: every access splays to the root; amortized O(log n).

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 14

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 26

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

Monotonic stack pops while the new element violates the invariant.

## entry 33

Monotonic stack pops while the new element violates the invariant.

## entry 34

Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 42

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 46

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 47

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 48

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 49

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 50

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 52

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 53

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 54

Wavelet tree: range k-th element in O(log Σ) time.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

LIS via patience: each pile holds the smallest tail of length k.

## entry 60

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 65

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 66

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 71

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 72

Monotonic stack pops while the new element violates the invariant.

## entry 73

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 74

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 75

StringBuilder: amortize allocation by doubling on grow.

## entry 76

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 82

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 83

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

Euler tour flattens a tree into an array for range-query LCA.

## entry 90

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 91

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 92

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 93

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 96

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 98

Union-Find with path compression amortizes to near-O(1) per op.

## entry 99

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 100

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

Walk both pointers from each end inward; advance the smaller side.

## entry 103

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 105

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 110

Morris traversal threads predecessors back to current node — O(1) extra space.
