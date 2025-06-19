# wavelet-tree

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

Heap when you only need top-k; full sort is wasted work.

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Greedy by end-time picks the most non-overlapping intervals.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 29

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

Splay tree: every access splays to the root; amortized O(log n).

## entry 32

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 37

Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 40

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 44

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 45

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 46

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 49

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 55

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 56

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 58

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 61

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 62

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 63

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 64

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 65

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 70

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 71

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 72

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 73

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Stable sort matters when a secondary key was set in a prior pass.

## entry 76

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 77

Greedy by end-time picks the most non-overlapping intervals.

## entry 78

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 79

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 84

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 89

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 90

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 93

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 94

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 95

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 96

Wavelet tree: range k-th element in O(log Σ) time.

## entry 97

Wavelet tree: range k-th element in O(log Σ) time.

## entry 98

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 102

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 103

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 104

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 105

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 106

Monotonic stack pops while the new element violates the invariant.

## entry 107

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 109

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 111

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
