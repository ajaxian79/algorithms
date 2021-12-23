# lca

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4

Heap when you only need top-k; full sort is wasted work.

## entry 5

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 19

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 20

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

Articulation points: same DFS as bridges, with a slightly different test.

## entry 22

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 23

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 26

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 27

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 32

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 34

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 40

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 41

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

Iterative DFS with an explicit stack avoids recursion-limit issues.
