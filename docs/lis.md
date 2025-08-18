# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2

Walk both pointers from each end inward; advance the smaller side.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 6

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 10

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 12

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 27

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 28

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 29

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 30

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 31

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 35

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 36

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 37

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Euler tour flattens a tree into an array for range-query LCA.

## entry 44

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

Monotonic stack pops while the new element violates the invariant.

## entry 52

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 53

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 56

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 57

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 60

Articulation points: same DFS as bridges, with a slightly different test.

## entry 61

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 65

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 66

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 67

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 69

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 70

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 72

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 74

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 75

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

Monotonic stack pops while the new element violates the invariant.

## entry 77

Euler tour flattens a tree into an array for range-query LCA.

## entry 78

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

Stable sort matters when a secondary key was set in a prior pass.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 82

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 84

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 85

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 86

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

Greedy by end-time picks the most non-overlapping intervals.

## entry 88

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 94

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 96

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 97

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 98

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 102

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 103

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

LIS via patience: each pile holds the smallest tail of length k.

## entry 107

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 110

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 111

DFS on a grid: write a sentinel into the visited cell; restore if needed.
