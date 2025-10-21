# in-place-rules

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Heap when you only need top-k; full sort is wasted work.
