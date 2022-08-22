# robin-hood

## entry 1

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 7

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 9

- Euler tour flattens a tree into an array for range-query LCA.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Monotonic stack pops while the new element violates the invariant.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 18

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 19

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 20

- Walk both pointers from each end inward; advance the smaller side.

## entry 21

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 22

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.

## entry 24

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
