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

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

Heap when you only need top-k; full sort is wasted work.
