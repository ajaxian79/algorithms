# intervals-greedy

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
