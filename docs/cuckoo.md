# cuckoo

## entry 1

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 8

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 9

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
