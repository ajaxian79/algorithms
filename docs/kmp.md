# kmp

LIS via patience: each pile holds the smallest tail of length k.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Edit distance is LCS with a twist: substitution is a third option at each cell.

In-place compaction uses two pointers: read advances always, write only on keep.

Union-Find with path compression amortizes to near-O(1) per op.
