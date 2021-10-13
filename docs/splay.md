# splay

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Stable sort matters when a secondary key was set in a prior pass.

## entry 9

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 17

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 24

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 25

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 28

Splay tree: every access splays to the root; amortized O(log n).

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.
