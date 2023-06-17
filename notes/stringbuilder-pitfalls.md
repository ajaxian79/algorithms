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
