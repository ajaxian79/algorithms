# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.
