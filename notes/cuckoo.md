# cuckoo

## entry 1

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 12

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 24

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 25

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 31

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 38

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 39

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 40

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 41

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

- Monotonic stack pops while the new element violates the invariant.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Greedy by end-time picks the most non-overlapping intervals.

## entry 50

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 53

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 58

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 59

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 62

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 63

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 64

- Greedy by end-time picks the most non-overlapping intervals.

## entry 65

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 68

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 69

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 70

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 71

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 72

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 73

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 75

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 80

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 81

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 84

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 85

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 86

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 88

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 89

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 90

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 91

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 93

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 94

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 101

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 102

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 103

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.
