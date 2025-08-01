# treap

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

Heap when you only need top-k; full sort is wasted work.

## entry 7

Euler tour flattens a tree into an array for range-query LCA.

## entry 8

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 15

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 22

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 26

Heap when you only need top-k; full sort is wasted work.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 35

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 36

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 39

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 40

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 41

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 49

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 50

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 51

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Walk both pointers from each end inward; advance the smaller side.

## entry 55

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 56

Heap when you only need top-k; full sort is wasted work.

## entry 57

Walk both pointers from each end inward; advance the smaller side.

## entry 58

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

Stable sort matters when a secondary key was set in a prior pass.

## entry 66

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 67

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 69

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 70

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 74

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 75

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 76

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 79

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 80

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 81

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 82

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Stable sort matters when a secondary key was set in a prior pass.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 88

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 89

State compression: bitmask + integer encodes a small subset cheaply.

## entry 90

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 91

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 92

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 94

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 101

StringBuilder: amortize allocation by doubling on grow.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 104

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 107

LRU cache: doubly-linked list + hash map; O(1) get/put.
