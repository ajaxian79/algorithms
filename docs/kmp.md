# kmp

LIS via patience: each pile holds the smallest tail of length k.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Edit distance is LCS with a twist: substitution is a third option at each cell.

In-place compaction uses two pointers: read advances always, write only on keep.

Union-Find with path compression amortizes to near-O(1) per op.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Morris traversal threads predecessors back to current node — O(1) extra space.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Walk both pointers from each end inward; advance the smaller side.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Greedy by end-time picks the most non-overlapping intervals.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BFS layers carry implicit shortest-path distance in unweighted graphs.
