# knapsack-unbounded

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.
