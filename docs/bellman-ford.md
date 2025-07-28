# bellman-ford

## entry 1

Heap when you only need top-k; full sort is wasted work.

## entry 2

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 12

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 13

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 26

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 27

Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 33

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 35

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 38

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 43

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 44

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 45

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 47

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 48

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 52

State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 54

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 55

Stable sort matters when a secondary key was set in a prior pass.

## entry 56

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 62

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 63

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 67

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 68

Monotonic stack pops while the new element violates the invariant.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

State compression: bitmask + integer encodes a small subset cheaply.

## entry 72

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 76

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 81

LIS via patience: each pile holds the smallest tail of length k.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 85

Wavelet tree: range k-th element in O(log Σ) time.

## entry 86

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 87

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 89

Articulation points: same DFS as bridges, with a slightly different test.

## entry 90

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 91

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 94

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 95

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 97

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 98

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 99

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 100

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 101

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 105

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

LIS via patience: each pile holds the smallest tail of length k.

## entry 108

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 109

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 110

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 111

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 112

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 114

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 115

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 116

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
