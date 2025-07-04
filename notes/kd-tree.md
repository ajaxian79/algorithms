# kd-tree

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 16

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 17

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Splay tree: every access splays to the root; amortized O(log n).

## entry 21

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 25

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 27

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

- Heap when you only need top-k; full sort is wasted work.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 32

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 38

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Monotonic stack pops while the new element violates the invariant.

## entry 42

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 43

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 46

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 49

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 50

- Monotonic stack pops while the new element violates the invariant.

## entry 51

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 53

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 55

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 56

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 57

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 59

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 60

- Greedy by end-time picks the most non-overlapping intervals.

## entry 61

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 62

- Greedy by end-time picks the most non-overlapping intervals.

## entry 63

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 66

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 68

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 74

- LIS via patience: each pile holds the smallest tail of length k.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- Euler tour flattens a tree into an array for range-query LCA.

## entry 79

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 80

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 82

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 83

- Monotonic stack pops while the new element violates the invariant.

## entry 84

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 87

- Greedy by end-time picks the most non-overlapping intervals.

## entry 88

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 89

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 90

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 91

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 92

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 96

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 97

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 98

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 101

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

- Walk both pointers from each end inward; advance the smaller side.

## entry 105

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 106

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
