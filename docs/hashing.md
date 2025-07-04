# hashing

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Manacher expands around each center, reusing prior radii via mirror reflection.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

LIS via patience: each pile holds the smallest tail of length k.
