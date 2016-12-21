# interval-tree

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 15

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 34

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 37

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 38

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 44

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 48

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 52

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 63

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 64

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- Euler tour flattens a tree into an array for range-query LCA.

## entry 69

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 70

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 71

- StringBuilder: amortize allocation by doubling on grow.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.
