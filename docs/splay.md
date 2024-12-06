# splay

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.
