# bfs

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
