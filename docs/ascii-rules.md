# ascii-rules

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

StringBuilder: amortize allocation by doubling on grow.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 15

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 19

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 21

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 22

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 26

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

Graph DP on DAGs: topological order makes the dependency direction explicit.
