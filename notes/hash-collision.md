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

## entry 10

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 11

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 20

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.
