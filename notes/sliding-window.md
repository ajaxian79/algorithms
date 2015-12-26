# sliding-window

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Greedy by end-time picks the most non-overlapping intervals.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Stable sort matters when a secondary key was set in a prior pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic stack pops while the new element violates the invariant.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Monotonic stack pops while the new element violates the invariant.

## entry 2

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- Stable sort matters when a secondary key was set in a prior pass.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 12

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 13

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 14

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 15

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 24

- StringBuilder: amortize allocation by doubling on grow.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 27

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 28

- Stable sort matters when a secondary key was set in a prior pass.

## entry 29

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 30

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 31

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 32

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 35

- Heap when you only need top-k; full sort is wasted work.

## entry 36

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 37

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 39

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 41

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 42

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 45

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 46

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 47

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 49

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 50

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 52

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 53

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 54

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 55

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 58

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 59

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 60

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 61

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 62

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 63

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 66

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

- Stable sort matters when a secondary key was set in a prior pass.

## entry 68

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 69

- Walk both pointers from each end inward; advance the smaller side.

## entry 70

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 72

- Euler tour flattens a tree into an array for range-query LCA.

## entry 73

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 74

- Monotonic stack pops while the new element violates the invariant.

## entry 75

- Tarjan SCC: low-link values find strongly connected components in one DFS.
