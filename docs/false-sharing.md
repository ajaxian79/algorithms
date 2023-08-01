# false-sharing

## entry 1

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 11

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Euler tour flattens a tree into an array for range-query LCA.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.
