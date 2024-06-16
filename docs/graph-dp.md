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
