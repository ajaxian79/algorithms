# lru-cache

## entry 1

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic stack pops while the new element violates the invariant.

## entry 9

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 12

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 13

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 14

State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.
