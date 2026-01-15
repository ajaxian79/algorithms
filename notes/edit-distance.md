# edit-distance

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Heap when you only need top-k; full sort is wasted work.
