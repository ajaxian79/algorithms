# union-find

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
