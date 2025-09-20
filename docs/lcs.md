# lcs

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

In-place compaction uses two pointers: read advances always, write only on keep.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Greedy by end-time picks the most non-overlapping intervals.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

LIS via patience: each pile holds the smallest tail of length k.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.
