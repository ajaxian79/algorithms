# open-addressing

## entry 1

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 13

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

Walk both pointers from each end inward; advance the smaller side.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 19

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

Backtracking template: choose, recurse, un-choose. Mutate then revert.
