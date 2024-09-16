# sliding-window

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Heap when you only need top-k; full sort is wasted work.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
