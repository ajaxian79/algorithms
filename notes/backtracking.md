# backtracking

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Heap when you only need top-k; full sort is wasted work.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Union-Find with path compression amortizes to near-O(1) per op.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Merge intervals: sort by start; extend the running interval while overlapping.

- LIS via patience: each pile holds the smallest tail of length k.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Euler tour flattens a tree into an array for range-query LCA.

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 10

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Euler tour flattens a tree into an array for range-query LCA.

## entry 13

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 15

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

- Greedy by end-time picks the most non-overlapping intervals.

## entry 24

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 25

- StringBuilder: amortize allocation by doubling on grow.

## entry 26

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 32

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

- Greedy by end-time picks the most non-overlapping intervals.

## entry 35

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 37

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 38

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 40

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 44

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 45

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 46

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 52

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 54

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 55

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 57

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 58

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Monotonic stack pops while the new element violates the invariant.

## entry 63

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

- Stable sort matters when a secondary key was set in a prior pass.

## entry 70

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 71

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 72

- Greedy by end-time picks the most non-overlapping intervals.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Greedy by end-time picks the most non-overlapping intervals.

## entry 76

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 78

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 79

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 80

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 81

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.
