# skip-list

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

Splay tree: every access splays to the root; amortized O(log n).

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
