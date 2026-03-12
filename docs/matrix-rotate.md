# matrix-rotate

In-place compaction uses two pointers: read advances always, write only on keep.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
