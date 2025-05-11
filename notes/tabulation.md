# tabulation

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Monotonic stack pops while the new element violates the invariant.

## entry 9

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 22

- Stable sort matters when a secondary key was set in a prior pass.

## entry 23

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 24

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 31

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

- Stable sort matters when a secondary key was set in a prior pass.

## entry 35

- Greedy by end-time picks the most non-overlapping intervals.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Splay tree: every access splays to the root; amortized O(log n).

## entry 43

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 45

- Euler tour flattens a tree into an array for range-query LCA.

## entry 46

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 47

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 48

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 51

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 53

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 54

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 56

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 58

- Heap when you only need top-k; full sort is wasted work.

## entry 59

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 60

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 61

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 62

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 63

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 65

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 66

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 71

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 74

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- Stable sort matters when a secondary key was set in a prior pass.

## entry 77

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 78

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 83

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 84

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 88

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 92

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 93

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 94

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 95

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 96

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 97

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 98

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 102

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 103

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 106

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 107

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 108

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 109

- Walk both pointers from each end inward; advance the smaller side.

## entry 110

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 111

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 115

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 116

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 117

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 118

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 119

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 121

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 122

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 125

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
