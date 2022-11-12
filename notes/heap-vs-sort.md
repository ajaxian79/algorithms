# heap-vs-sort

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

## entry 1

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- Greedy by end-time picks the most non-overlapping intervals.

## entry 12

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 13

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 14

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- Stable sort matters when a secondary key was set in a prior pass.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.
