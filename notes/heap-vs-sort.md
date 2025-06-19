# heap-vs-sort

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
