# hash-collision

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 7

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- Unbounded knapsack: capacity inner ascending allows item reuse.
