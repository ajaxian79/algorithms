# kmp

LIS via patience: each pile holds the smallest tail of length k.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Edit distance is LCS with a twist: substitution is a third option at each cell.

In-place compaction uses two pointers: read advances always, write only on keep.

Union-Find with path compression amortizes to near-O(1) per op.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Morris traversal threads predecessors back to current node — O(1) extra space.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Walk both pointers from each end inward; advance the smaller side.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Greedy by end-time picks the most non-overlapping intervals.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Heap when you only need top-k; full sort is wasted work.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3

Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Euler tour flattens a tree into an array for range-query LCA.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Walk both pointers from each end inward; advance the smaller side.

## entry 25

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 28

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Walk both pointers from each end inward; advance the smaller side.

## entry 32

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

Stable sort matters when a secondary key was set in a prior pass.

## entry 35

Wavelet tree: range k-th element in O(log Σ) time.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

Splay tree: every access splays to the root; amortized O(log n).

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 44

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 45

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 48

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 49

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 50

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 51

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 56

Monotonic stack pops while the new element violates the invariant.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 59

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 62

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 63

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 64

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 65

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 66

Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 68

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 71

Union-Find with path compression amortizes to near-O(1) per op.

## entry 72

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 73

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 74

State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

Splay tree: every access splays to the root; amortized O(log n).

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 80

Stable sort matters when a secondary key was set in a prior pass.

## entry 81

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 82

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 83

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

State compression: bitmask + integer encodes a small subset cheaply.

## entry 86

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 88

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 90

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 91

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 100

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 102

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 106

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
