# matrix-rotate

In-place compaction uses two pointers: read advances always, write only on keep.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
