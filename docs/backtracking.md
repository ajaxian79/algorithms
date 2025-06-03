# backtracking

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.
