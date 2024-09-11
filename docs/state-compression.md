# state-compression

## entry 1

Greedy by end-time picks the most non-overlapping intervals.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
