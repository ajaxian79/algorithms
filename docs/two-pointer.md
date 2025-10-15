# two-pointer

Monotonic stack pops while the new element violates the invariant.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
