# state-compression

## entry 1

Greedy by end-time picks the most non-overlapping intervals.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 16

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 31

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

Wavelet tree: range k-th element in O(log Σ) time.

## entry 33

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 34

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 35

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 40

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 44

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 45

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 51

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 52

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 57

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 61

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 62

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 67

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 69

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 74

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

Union-Find with path compression amortizes to near-O(1) per op.

## entry 76

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 77

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 78

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 86

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Euler tour flattens a tree into an array for range-query LCA.

## entry 91

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 92

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 93

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 95

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
