# intervals-merge

LIS via patience: each pile holds the smallest tail of length k.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Walk both pointers from each end inward; advance the smaller side.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Merge intervals: sort by start; extend the running interval while overlapping.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.
