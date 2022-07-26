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

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Greedy by end-time picks the most non-overlapping intervals.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 29

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

Splay tree: every access splays to the root; amortized O(log n).

## entry 32

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.
