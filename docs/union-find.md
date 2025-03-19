# union-find

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

Morris traversal threads predecessors back to current node — O(1) extra space.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.
