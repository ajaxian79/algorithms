# trie

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Greedy by end-time picks the most non-overlapping intervals.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Greedy by end-time picks the most non-overlapping intervals.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 16

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Stable sort matters when a secondary key was set in a prior pass.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 23

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 27

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Monotonic stack pops while the new element violates the invariant.

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

StringBuilder: amortize allocation by doubling on grow.

## entry 35

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 36

State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

StringBuilder: amortize allocation by doubling on grow.

## entry 40

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 41

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 44

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

LIS via patience: each pile holds the smallest tail of length k.

## entry 47

Union-Find with path compression amortizes to near-O(1) per op.

## entry 48

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 49

Greedy by end-time picks the most non-overlapping intervals.

## entry 50

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 52

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 53

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 55

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Monotonic stack pops while the new element violates the invariant.

## entry 69

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 70

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 71

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 72

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

Heap when you only need top-k; full sort is wasted work.

## entry 76

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 79

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 80

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

StringBuilder: amortize allocation by doubling on grow.

## entry 82

Heap when you only need top-k; full sort is wasted work.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 85

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 86

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 87

Splay tree: every access splays to the root; amortized O(log n).

## entry 88

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 89

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 90

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 91

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 92

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 94

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 96

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 98

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 99

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 100

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

Wavelet tree: range k-th element in O(log Σ) time.

## entry 102

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 103

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 104

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 105

Articulation points: same DFS as bridges, with a slightly different test.

## entry 106

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.
