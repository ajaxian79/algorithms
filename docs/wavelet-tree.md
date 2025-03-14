# wavelet-tree

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
