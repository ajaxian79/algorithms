# boyer-moore

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
