# stable-sort-when

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.
