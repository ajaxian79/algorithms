# floyd-warshall

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

- Heap when you only need top-k; full sort is wasted work.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 6

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 13

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 14

- Heap when you only need top-k; full sort is wasted work.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 17

- Walk both pointers from each end inward; advance the smaller side.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

- Stable sort matters when a secondary key was set in a prior pass.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 33

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- StringBuilder: amortize allocation by doubling on grow.

## entry 37

- Monotonic stack pops while the new element violates the invariant.

## entry 38

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 46

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 47

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 48

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

- LIS via patience: each pile holds the smallest tail of length k.

## entry 50

- Heap when you only need top-k; full sort is wasted work.

## entry 51

- Stable sort matters when a secondary key was set in a prior pass.

## entry 52

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 53

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 54

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 57

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 58

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 59

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 60

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 64

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- Stable sort matters when a secondary key was set in a prior pass.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 73

- Greedy by end-time picks the most non-overlapping intervals.

## entry 74

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 75

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 76

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 77

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 78

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 80

- Stable sort matters when a secondary key was set in a prior pass.

## entry 81

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 82

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 83

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 85

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 86

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 88

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 92

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 93

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 94

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 95

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 96

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 98

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 99

- Stable sort matters when a secondary key was set in a prior pass.

## entry 100

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 101

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 103

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 104

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 107

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 108

- Monotonic stack pops while the new element violates the invariant.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 110

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 112

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 113

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 114

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 115

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
