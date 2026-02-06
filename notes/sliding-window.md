# sliding-window

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
