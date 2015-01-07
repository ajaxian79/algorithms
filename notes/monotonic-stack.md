# monotonic-stack

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.

- LIS via patience: each pile holds the smallest tail of length k.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Greedy by end-time picks the most non-overlapping intervals.

- Heap when you only need top-k; full sort is wasted work.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 7

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 8

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

- Heap when you only need top-k; full sort is wasted work.

## entry 10

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 11

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 14

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 17

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 18

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Greedy by end-time picks the most non-overlapping intervals.

## entry 22

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 24

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.

## entry 26

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 31

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 32

- Stable sort matters when a secondary key was set in a prior pass.

## entry 33

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 40

- Euler tour flattens a tree into an array for range-query LCA.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 45

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 47

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 48

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- Heap when you only need top-k; full sort is wasted work.

## entry 53

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 54

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 55

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 57

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 58

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 59

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

- Splay tree: every access splays to the root; amortized O(log n).

## entry 64

- Stable sort matters when a secondary key was set in a prior pass.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- LIS via patience: each pile holds the smallest tail of length k.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 70

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 71

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 72

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 73

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 75

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 76

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 78

- Stable sort matters when a secondary key was set in a prior pass.

## entry 79

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 80

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
