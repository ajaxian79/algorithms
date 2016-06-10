# endianness

## entry 1

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 6

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 16

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Greedy by end-time picks the most non-overlapping intervals.

## entry 22

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

- Stable sort matters when a secondary key was set in a prior pass.

## entry 29

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 30

- Euler tour flattens a tree into an array for range-query LCA.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 34

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 35

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 38

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 39

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 43

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 44

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

- LIS via patience: each pile holds the smallest tail of length k.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 48

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

- Splay tree: every access splays to the root; amortized O(log n).

## entry 51

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 52

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

- Monotonic stack pops while the new element violates the invariant.

## entry 57

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 61

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 62

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 66

- LIS via patience: each pile holds the smallest tail of length k.

## entry 67

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 68

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- LIS via patience: each pile holds the smallest tail of length k.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- Walk both pointers from each end inward; advance the smaller side.

## entry 74

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
