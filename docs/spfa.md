# spfa

## entry 1

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.
