# binary-search

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.
