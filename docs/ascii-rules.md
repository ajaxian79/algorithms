# ascii-rules

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

StringBuilder: amortize allocation by doubling on grow.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 15

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 19

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 21

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 22

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 26

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 30

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 31

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 36

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 38

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 40

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 48

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

Wavelet tree: range k-th element in O(log Σ) time.

## entry 50

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 51

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 53

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 54

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 55

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

Stable sort matters when a secondary key was set in a prior pass.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 59

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 62

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 67

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 71

Greedy by end-time picks the most non-overlapping intervals.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 74

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 75

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 79

StringBuilder: amortize allocation by doubling on grow.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 82

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 85

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 86

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 94

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

Heap when you only need top-k; full sort is wasted work.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 98

Greedy by end-time picks the most non-overlapping intervals.

## entry 99

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 100

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 101

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 102

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 103

Articulation points: same DFS as bridges, with a slightly different test.

## entry 104

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 107

Monotonic stack pops while the new element violates the invariant.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

Stable sort matters when a secondary key was set in a prior pass.

## entry 110

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 111

Splay tree: every access splays to the root; amortized O(log n).

## entry 112

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 113

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 114

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 115

Heap when you only need top-k; full sort is wasted work.

## entry 116

Articulation points: same DFS as bridges, with a slightly different test.

## entry 117

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 118

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 119

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 120

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 121

StringBuilder: amortize allocation by doubling on grow.

## entry 122

Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 124

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 125

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 126

Articulation points: same DFS as bridges, with a slightly different test.
