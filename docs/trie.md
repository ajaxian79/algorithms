# trie

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.
