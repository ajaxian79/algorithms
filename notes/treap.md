# treap

## entry 1

- Walk both pointers from each end inward; advance the smaller side.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 9

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 15

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Monotonic stack pops while the new element violates the invariant.

## entry 23

- Greedy by end-time picks the most non-overlapping intervals.
