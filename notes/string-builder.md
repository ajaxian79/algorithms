# string-builder

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 7

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.
