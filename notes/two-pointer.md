# two-pointer

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
