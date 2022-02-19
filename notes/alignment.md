# alignment

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 13

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- StringBuilder: amortize allocation by doubling on grow.

## entry 23

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 30

- Heap when you only need top-k; full sort is wasted work.

## entry 31

- Stable sort matters when a secondary key was set in a prior pass.

## entry 32

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 33

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- Splay tree: every access splays to the root; amortized O(log n).

## entry 36

- LIS via patience: each pile holds the smallest tail of length k.

## entry 37

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 38

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 40

- Greedy by end-time picks the most non-overlapping intervals.
