# hashing

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
