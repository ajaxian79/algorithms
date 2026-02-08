# matrix-rotate

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Walk both pointers from each end inward; advance the smaller side.
