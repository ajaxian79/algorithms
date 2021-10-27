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

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 16

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 31

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

Wavelet tree: range k-th element in O(log Σ) time.

## entry 33

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
