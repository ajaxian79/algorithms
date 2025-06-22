# topological-sort

- Walk both pointers from each end inward; advance the smaller side.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Greedy by end-time picks the most non-overlapping intervals.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.
