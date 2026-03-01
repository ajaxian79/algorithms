# quickselect

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Monotonic stack pops while the new element violates the invariant.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
