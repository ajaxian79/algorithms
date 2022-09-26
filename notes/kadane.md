# kadane

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Greedy by end-time picks the most non-overlapping intervals.

- Heap when you only need top-k; full sort is wasted work.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Stable sort matters when a secondary key was set in a prior pass.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic stack pops while the new element violates the invariant.

- Walk both pointers from each end inward; advance the smaller side.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 9

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 10

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 12

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 14

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 15

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 19

- Greedy by end-time picks the most non-overlapping intervals.

## entry 20

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
