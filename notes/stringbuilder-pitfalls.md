# stringbuilder-pitfalls

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 14

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 39

- Stable sort matters when a secondary key was set in a prior pass.

## entry 40

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 46

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 47

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 49

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 52

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 54

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 55

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 56

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 57

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- Euler tour flattens a tree into an array for range-query LCA.

## entry 62

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 63

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 64

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 68

- Splay tree: every access splays to the root; amortized O(log n).

## entry 69

- Walk both pointers from each end inward; advance the smaller side.

## entry 70

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 74

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 75

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 78

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 79

- Greedy by end-time picks the most non-overlapping intervals.

## entry 80

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 83

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Walk both pointers from each end inward; advance the smaller side.

## entry 89

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

- StringBuilder: amortize allocation by doubling on grow.

## entry 91

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 92

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 95

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 97

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 98

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 99

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 100

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 101

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 102

- StringBuilder: amortize allocation by doubling on grow.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 107

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 115

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 118

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 125

- StringBuilder: amortize allocation by doubling on grow.

## entry 126

- Open addressing with linear probing wins until load factor exceeds 0.7.
