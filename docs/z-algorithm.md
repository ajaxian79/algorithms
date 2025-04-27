# z-algorithm

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Merge intervals: sort by start; extend the running interval while overlapping.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

In-place compaction uses two pointers: read advances always, write only on keep.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 35

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 36

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 38

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 39

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 43

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 50

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

Euler tour flattens a tree into an array for range-query LCA.

## entry 52

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 53

Monotonic stack pops while the new element violates the invariant.

## entry 54

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 55

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 56

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 57

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 58

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 59

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 61

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 62

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 69

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 72

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 74

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 75

Union-Find with path compression amortizes to near-O(1) per op.

## entry 76

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 77

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 78

LIS via patience: each pile holds the smallest tail of length k.

## entry 79

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 80

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 81

Articulation points: same DFS as bridges, with a slightly different test.

## entry 82

Walk both pointers from each end inward; advance the smaller side.

## entry 83

Greedy by end-time picks the most non-overlapping intervals.

## entry 84

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 88

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 90

LIS via patience: each pile holds the smallest tail of length k.

## entry 91

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

LIS via patience: each pile holds the smallest tail of length k.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Walk both pointers from each end inward; advance the smaller side.

## entry 95

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 96

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 100

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
