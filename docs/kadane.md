# kadane

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Merge intervals: sort by start; extend the running interval while overlapping.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Greedy by end-time picks the most non-overlapping intervals.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Unbounded knapsack: capacity inner ascending allows item reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Morris traversal threads predecessors back to current node — O(1) extra space.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 7

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Stable sort matters when a secondary key was set in a prior pass.

## entry 14

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 28

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 31

Articulation points: same DFS as bridges, with a slightly different test.

## entry 32

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

State compression: bitmask + integer encodes a small subset cheaply.

## entry 34

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 36

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 49

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 54

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 55

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

Euler tour flattens a tree into an array for range-query LCA.

## entry 58

Splay tree: every access splays to the root; amortized O(log n).

## entry 59

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 60

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 61

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 62

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 63

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 64

State compression: bitmask + integer encodes a small subset cheaply.

## entry 65

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

LIS via patience: each pile holds the smallest tail of length k.

## entry 68

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 70

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

LIS via patience: each pile holds the smallest tail of length k.

## entry 72

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 75

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 76

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 79

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 80

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 81

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 82

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 84

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 87

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 88

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 89

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 90

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 92

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 94

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 99

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 101

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 102

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

Stable sort matters when a secondary key was set in a prior pass.

## entry 104

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 105

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

Walk both pointers from each end inward; advance the smaller side.

## entry 107

Union-Find with path compression amortizes to near-O(1) per op.

## entry 108

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 109

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 111

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 113

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 114

Walk both pointers from each end inward; advance the smaller side.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 118

Greedy by end-time picks the most non-overlapping intervals.

## entry 119

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

Union-Find with path compression amortizes to near-O(1) per op.

## entry 121

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

LIS via patience: each pile holds the smallest tail of length k.
