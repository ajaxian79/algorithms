# interval-dp

## entry 1

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

StringBuilder: amortize allocation by doubling on grow.

## entry 20

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 21

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 24

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 25

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Heap when you only need top-k; full sort is wasted work.

## entry 28

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 29

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 31

Wavelet tree: range k-th element in O(log Σ) time.

## entry 32

Monotonic stack pops while the new element violates the invariant.

## entry 33

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 34

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 39

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 44

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 45

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 46

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

Heap when you only need top-k; full sort is wasted work.

## entry 48

Articulation points: same DFS as bridges, with a slightly different test.

## entry 49

Articulation points: same DFS as bridges, with a slightly different test.

## entry 50

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 54

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 55

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

LIS via patience: each pile holds the smallest tail of length k.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 59

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 60

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 61

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 62

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 65

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 68

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 69

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 70

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 71

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 72

Wavelet tree: range k-th element in O(log Σ) time.

## entry 73

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 74

Greedy by end-time picks the most non-overlapping intervals.

## entry 75

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 76

Greedy by end-time picks the most non-overlapping intervals.

## entry 77

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 78

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 79

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

Articulation points: same DFS as bridges, with a slightly different test.

## entry 83

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 85

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 86

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 87

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 88

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 89

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 92

State compression: bitmask + integer encodes a small subset cheaply.

## entry 93

Walk both pointers from each end inward; advance the smaller side.

## entry 94

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 95

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 99

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 106

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 109

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Stable sort matters when a secondary key was set in a prior pass.

## entry 115

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 116

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
