# edit-distance

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Heap when you only need top-k; full sort is wasted work.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BFS layers carry implicit shortest-path distance in unweighted graphs.
