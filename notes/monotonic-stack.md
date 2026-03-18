# monotonic-stack

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
