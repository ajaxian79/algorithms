# topological-sort

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Union-Find with path compression amortizes to near-O(1) per op.

Manacher expands around each center, reusing prior radii via mirror reflection.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Morris traversal threads predecessors back to current node — O(1) extra space.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.
