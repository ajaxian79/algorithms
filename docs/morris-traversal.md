# morris-traversal

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.
