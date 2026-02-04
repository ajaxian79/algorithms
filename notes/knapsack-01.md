# knapsack-01

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Heap when you only need top-k; full sort is wasted work.
