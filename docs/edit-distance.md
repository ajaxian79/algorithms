# edit-distance

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Heap when you only need top-k; full sort is wasted work.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Stable sort matters when a secondary key was set in a prior pass.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Edit distance is LCS with a twist: substitution is a third option at each cell.
