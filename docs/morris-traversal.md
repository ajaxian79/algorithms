# morris-traversal

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
