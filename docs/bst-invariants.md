# bst-invariants

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic stack pops while the new element violates the invariant.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
