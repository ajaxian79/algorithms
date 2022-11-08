# iterative-traversals

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 8

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

Articulation points: same DFS as bridges, with a slightly different test.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

Monotonic stack pops while the new element violates the invariant.
