# floyd-warshall

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Heap when you only need top-k; full sort is wasted work.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
