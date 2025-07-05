# knapsack-01

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Merge intervals: sort by start; extend the running interval while overlapping.

In-place compaction uses two pointers: read advances always, write only on keep.

Greedy by end-time picks the most non-overlapping intervals.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 8

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 17

Splay tree: every access splays to the root; amortized O(log n).

## entry 18

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 25

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 26

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 27

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 36

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 41

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Union-Find with path compression amortizes to near-O(1) per op.

## entry 44

Walk both pointers from each end inward; advance the smaller side.

## entry 45

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 46

StringBuilder: amortize allocation by doubling on grow.

## entry 47

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 48

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 50

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 52

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 53

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 55

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 56

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

Monotonic stack pops while the new element violates the invariant.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 63

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 64

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 67

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 68

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 69

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 70

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 71

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 72

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 73

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 76

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 77

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 78

Monotonic stack pops while the new element violates the invariant.

## entry 79

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 80

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 81

Monotonic stack pops while the new element violates the invariant.

## entry 82

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 83

Monotonic stack pops while the new element violates the invariant.

## entry 84

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 85

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 86

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 87

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 88

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

Walk both pointers from each end inward; advance the smaller side.

## entry 90

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 94

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 95

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 96

State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 98

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 102

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 103

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

Heap when you only need top-k; full sort is wasted work.

## entry 105

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 106

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 107

Monotonic stack pops while the new element violates the invariant.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 111

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 113

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 114

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 115

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 116

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 117

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 118

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 119

Wavelet tree: range k-th element in O(log Σ) time.

## entry 120

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 121

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 122

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
