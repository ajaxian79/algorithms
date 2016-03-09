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

## entry 21

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

- StringBuilder: amortize allocation by doubling on grow.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 28

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 38

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 41

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 50

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 51

- LIS via patience: each pile holds the smallest tail of length k.

## entry 52

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 53

- LIS via patience: each pile holds the smallest tail of length k.

## entry 54

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 55

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 56

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 58

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 59

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 60

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
