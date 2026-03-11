# iterative-traversals

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
