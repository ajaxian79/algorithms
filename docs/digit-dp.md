# digit-dp

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

Hash collision: chain or open-address; chained handles arbitrary load factor.
