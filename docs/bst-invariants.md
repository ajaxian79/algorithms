# bst-invariants

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic stack pops while the new element violates the invariant.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Unbounded knapsack: capacity inner ascending allows item reuse.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Pick a pivot, partition, recurse on the side that contains the kth slot.

In-place compaction uses two pointers: read advances always, write only on keep.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Heap when you only need top-k; full sort is wasted work.

## entry 9

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

LIS via patience: each pile holds the smallest tail of length k.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 16

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 18

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 25

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 28

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 29

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 32

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 33

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 35

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 36

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 40

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 41

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 45

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 47

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 50

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 52

Monotonic stack pops while the new element violates the invariant.

## entry 53

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 54

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

Splay tree: every access splays to the root; amortized O(log n).

## entry 56

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 57

Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

Walk both pointers from each end inward; advance the smaller side.

## entry 59

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 60

State compression: bitmask + integer encodes a small subset cheaply.

## entry 61

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 62

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 63

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Articulation points: same DFS as bridges, with a slightly different test.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Monotonic stack pops while the new element violates the invariant.

## entry 72

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 73

Splay tree: every access splays to the root; amortized O(log n).

## entry 74

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 75

Heap when you only need top-k; full sort is wasted work.

## entry 76

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 78

Splay tree: every access splays to the root; amortized O(log n).

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 81

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 82

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Heap when you only need top-k; full sort is wasted work.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 92

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 98

Z-array `z[i]` is the longest substring starting at i that matches a prefix.
