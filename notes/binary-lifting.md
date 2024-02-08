# binary-lifting

## entry 1

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.
