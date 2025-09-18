# lis

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Heap when you only need top-k; full sort is wasted work.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.
