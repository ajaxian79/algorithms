# dp-1d

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
