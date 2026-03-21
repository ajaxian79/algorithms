# topological-sort

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.
