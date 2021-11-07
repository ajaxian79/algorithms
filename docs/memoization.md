# memoization

## entry 1

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 18

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 19

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 20

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 23

Heap when you only need top-k; full sort is wasted work.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 32

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
