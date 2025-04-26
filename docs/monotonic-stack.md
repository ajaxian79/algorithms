# monotonic-stack

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Edit distance is LCS with a twist: substitution is a third option at each cell.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic stack pops while the new element violates the invariant.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 6

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 15

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 19

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

Stable sort matters when a secondary key was set in a prior pass.

## entry 29

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 33

Heap when you only need top-k; full sort is wasted work.

## entry 34

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 35

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

State compression: bitmask + integer encodes a small subset cheaply.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

Union-Find with path compression amortizes to near-O(1) per op.

## entry 44

Splay tree: every access splays to the root; amortized O(log n).

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 50

Heap when you only need top-k; full sort is wasted work.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 54

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 58

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 59

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Union-Find with path compression amortizes to near-O(1) per op.

## entry 62

Articulation points: same DFS as bridges, with a slightly different test.

## entry 63

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 64

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 68

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 69

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 74

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 75

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 76

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 77

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 81

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 83

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

Monotonic stack pops while the new element violates the invariant.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 88

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 91

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 92

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 93

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 95

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 97

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 102

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

Monotonic stack pops while the new element violates the invariant.

## entry 104

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 106

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
