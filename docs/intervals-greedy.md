# intervals-greedy

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Heap when you only need top-k; full sort is wasted work.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Walk both pointers from each end inward; advance the smaller side.

In-place compaction uses two pointers: read advances always, write only on keep.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Heap when you only need top-k; full sort is wasted work.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 20

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

Heap when you only need top-k; full sort is wasted work.

## entry 32

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 33

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

State compression: bitmask + integer encodes a small subset cheaply.

## entry 35

State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

Heap when you only need top-k; full sort is wasted work.

## entry 37

Stable sort matters when a secondary key was set in a prior pass.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

LIS via patience: each pile holds the smallest tail of length k.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 48

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 50

Greedy by end-time picks the most non-overlapping intervals.

## entry 51

Monotonic stack pops while the new element violates the invariant.

## entry 52

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 56

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 59

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 60

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 62

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 63

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 65

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 66

Articulation points: same DFS as bridges, with a slightly different test.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 69

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 72

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 73

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 75

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 76

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 77

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 78

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 81

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 82

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 85

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 86

LIS via patience: each pile holds the smallest tail of length k.

## entry 87

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 88

Articulation points: same DFS as bridges, with a slightly different test.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 91

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 92

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 93

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 94

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 97

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 99

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 101

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 102

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 103

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 104

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 105

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 106

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 107

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Union-Find with path compression amortizes to near-O(1) per op.

## entry 110

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 111

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 113

Heavy-light decomposition: each path crosses O(log n) heavy chains.
