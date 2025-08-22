# memoization

## entry 1

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 18

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 19

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 20

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 23

Heap when you only need top-k; full sort is wasted work.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 32

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 38

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 39

Euler tour flattens a tree into an array for range-query LCA.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

Walk both pointers from each end inward; advance the smaller side.

## entry 42

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 43

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 44

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 45

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 46

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 47

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 51

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 56

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 57

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 61

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 62

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 63

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 64

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 66

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 67

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 68

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 69

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 70

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 71

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 73

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 75

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 76

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 79

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 83

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

Union-Find with path compression amortizes to near-O(1) per op.

## entry 86

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 87

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 88

Walk both pointers from each end inward; advance the smaller side.

## entry 89

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 92

Euler tour flattens a tree into an array for range-query LCA.

## entry 93

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 94

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 97

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 98

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 99

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 100

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 105

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 106

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
