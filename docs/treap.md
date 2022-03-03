# treap

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

Heap when you only need top-k; full sort is wasted work.

## entry 7

Euler tour flattens a tree into an array for range-query LCA.

## entry 8

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 15

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 22

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
