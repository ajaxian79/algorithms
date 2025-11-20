# bitmask

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Stable sort matters when a secondary key was set in a prior pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Heap when you only need top-k; full sort is wasted work.
