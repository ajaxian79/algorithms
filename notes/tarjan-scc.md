# tarjan-scc

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 6

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 7

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
