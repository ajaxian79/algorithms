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
