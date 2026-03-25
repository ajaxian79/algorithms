# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
