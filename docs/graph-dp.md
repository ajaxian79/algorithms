# graph-dp

## entry 1

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

Heap when you only need top-k; full sort is wasted work.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

StringBuilder: amortize allocation by doubling on grow.

## entry 7

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 10

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 14

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Walk both pointers from each end inward; advance the smaller side.

## entry 19

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

Articulation points: same DFS as bridges, with a slightly different test.

## entry 24

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

Euler tour flattens a tree into an array for range-query LCA.

## entry 26

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

Wavelet tree: range k-th element in O(log Σ) time.

## entry 28

StringBuilder: amortize allocation by doubling on grow.

## entry 29

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
