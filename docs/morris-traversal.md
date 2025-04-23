# morris-traversal

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Stable sort matters when a secondary key was set in a prior pass.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Manacher expands around each center, reusing prior radii via mirror reflection.

Greedy by end-time picks the most non-overlapping intervals.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Morris traversal threads predecessors back to current node — O(1) extra space.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Merge intervals: sort by start; extend the running interval while overlapping.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3

StringBuilder: amortize allocation by doubling on grow.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 13

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 14

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 15

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

LIS via patience: each pile holds the smallest tail of length k.

## entry 17

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 19

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 20

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 21

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 22

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 23

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

Stable sort matters when a secondary key was set in a prior pass.

## entry 27

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 28

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 40

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 41

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 43

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 47

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 48

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 49

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 60

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 65

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 66

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Articulation points: same DFS as bridges, with a slightly different test.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 74

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 75

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 76

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 77

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 78

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 83

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 84

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 85

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 86

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 88

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 89

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 92

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 93

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 94

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 95

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 96

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 97

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 98

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 99

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 100

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 101

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 102

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 103

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 104

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 106

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 109

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 110

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 111

State compression: bitmask + integer encodes a small subset cheaply.

## entry 112

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 113

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

StringBuilder pitfall: reuse forces a deep copy on the first read.
