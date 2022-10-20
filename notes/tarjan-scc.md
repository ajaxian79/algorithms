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

## entry 9

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 17

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 21

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Splay tree: every access splays to the root; amortized O(log n).

## entry 27

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
