# utf8-bytes

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 8

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 16

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 17

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 29

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 30

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 34

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 35

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 36

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 37

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Walk both pointers from each end inward; advance the smaller side.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 48

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 49

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 53

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 59

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 63

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 68

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 69

Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 71

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

LIS via patience: each pile holds the smallest tail of length k.

## entry 76

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 79

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 82

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

Splay tree: every access splays to the root; amortized O(log n).

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

LIS via patience: each pile holds the smallest tail of length k.

## entry 86

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 87

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 88

Union-Find with path compression amortizes to near-O(1) per op.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 91

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 92

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 93

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 94

Splay tree: every access splays to the root; amortized O(log n).

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 97

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
