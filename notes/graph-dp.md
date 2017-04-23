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

## entry 37

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 38

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

- Walk both pointers from each end inward; advance the smaller side.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 51

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 53

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 54

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 55

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 56

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 59

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.
