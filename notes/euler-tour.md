# euler-tour

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 8

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 12

- Walk both pointers from each end inward; advance the smaller side.

## entry 13

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 16

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 17

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 19

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 20

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 21

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Stable sort matters when a secondary key was set in a prior pass.

## entry 24

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 25

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

- StringBuilder: amortize allocation by doubling on grow.

## entry 30

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

- Euler tour flattens a tree into an array for range-query LCA.

## entry 32

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 34

- Walk both pointers from each end inward; advance the smaller side.

## entry 35

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 39

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 42

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 43

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 44

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 48

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 49

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- ASCII rules are a strict subset of UTF-8; no special handling needed.
