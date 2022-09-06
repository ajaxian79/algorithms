# stringbuilder-pitfalls

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 14

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
