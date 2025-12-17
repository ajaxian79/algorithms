# sliding-window

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.
