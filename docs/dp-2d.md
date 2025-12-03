# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Merge intervals: sort by start; extend the running interval while overlapping.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.
