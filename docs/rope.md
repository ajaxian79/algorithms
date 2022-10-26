# rope

## entry 1

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 12

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 13

State compression: bitmask + integer encodes a small subset cheaply.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 20

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

Euler tour flattens a tree into an array for range-query LCA.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

StringBuilder: amortize allocation by doubling on grow.

## entry 32

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
