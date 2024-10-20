# wavelet-tree

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Walk both pointers from each end inward; advance the smaller side.
