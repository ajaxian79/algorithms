# graph-dp

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 16

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 17

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 22

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 25

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 31

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

- Splay tree: every access splays to the root; amortized O(log n).

## entry 34

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 35

- Monotonic stack pops while the new element violates the invariant.

## entry 36

- Heavy-light decomposition: each path crosses O(log n) heavy chains.
