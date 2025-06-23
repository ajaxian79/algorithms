# cuckoo

## entry 1

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 8

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 9

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 14

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 15

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

Greedy by end-time picks the most non-overlapping intervals.

## entry 22

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 32

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 39

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 40

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 41

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 45

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 48

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 49

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 52

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 54

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 57

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 63

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 68

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 69

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 73

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 74

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 75

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 84

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 85

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 86

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 88

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

Heap when you only need top-k; full sort is wasted work.

## entry 91

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 92

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Greedy by end-time picks the most non-overlapping intervals.

## entry 95

Walk both pointers from each end inward; advance the smaller side.

## entry 96

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 97

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 98

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 99

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 100

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
