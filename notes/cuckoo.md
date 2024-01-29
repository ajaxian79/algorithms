# cuckoo

## entry 1

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.
