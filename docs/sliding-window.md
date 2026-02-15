# sliding-window

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.
