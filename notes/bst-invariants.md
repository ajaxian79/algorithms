# bst-invariants

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- In-place compaction uses two pointers: read advances always, write only on keep.
