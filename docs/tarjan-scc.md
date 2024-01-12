# tarjan-scc

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.
