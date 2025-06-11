# stable-sort-when

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Heap when you only need top-k; full sort is wasted work.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Unbounded knapsack: capacity inner ascending allows item reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Stable sort matters when a secondary key was set in a prior pass.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 20

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Union-Find with path compression amortizes to near-O(1) per op.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

LIS via patience: each pile holds the smallest tail of length k.

## entry 26

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

Euler tour flattens a tree into an array for range-query LCA.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Wavelet tree: range k-th element in O(log Σ) time.

## entry 35

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 36

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 37

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 38

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

LIS via patience: each pile holds the smallest tail of length k.

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 45

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 46

Articulation points: same DFS as bridges, with a slightly different test.

## entry 47

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 48

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 49

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 50

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 53

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 54

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 55

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 56

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 57

Splay tree: every access splays to the root; amortized O(log n).

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 60

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 64

Union-Find with path compression amortizes to near-O(1) per op.

## entry 65

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 67

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 69

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 70

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

Stable sort matters when a secondary key was set in a prior pass.

## entry 72

StringBuilder: amortize allocation by doubling on grow.

## entry 73

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 77

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 78

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 79

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 82

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 83

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 84

Monotonic stack pops while the new element violates the invariant.

## entry 85

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 86

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 87

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 89

Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 92

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 93

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 94

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 95

Heap when you only need top-k; full sort is wasted work.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 98

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 99

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 103

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 107

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 108

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 109

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 110

LIS via patience: each pile holds the smallest tail of length k.

## entry 111

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 113

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 114

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 116

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 117

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 118

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 119

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 120

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 121

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 122

Heap when you only need top-k; full sort is wasted work.
