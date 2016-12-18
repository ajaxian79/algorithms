# kosaraju

## entry 1

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 14

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

- Stable sort matters when a secondary key was set in a prior pass.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 31

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 32

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 39

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Stable sort matters when a secondary key was set in a prior pass.

## entry 43

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 49

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 50

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 55

- Euler tour flattens a tree into an array for range-query LCA.

## entry 56

- Walk both pointers from each end inward; advance the smaller side.

## entry 57

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 62

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 63

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 64

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 65

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 66

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 68

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

- Splay tree: every access splays to the root; amortized O(log n).

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Unbounded knapsack: capacity inner ascending allows item reuse.
