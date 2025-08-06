# topological-sort

- Walk both pointers from each end inward; advance the smaller side.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Greedy by end-time picks the most non-overlapping intervals.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- LIS via patience: each pile holds the smallest tail of length k.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Heap when you only need top-k; full sort is wasted work.

- Union-Find with path compression amortizes to near-O(1) per op.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 6

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

- Heap when you only need top-k; full sort is wasted work.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

- Splay tree: every access splays to the root; amortized O(log n).

## entry 31

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 35

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 37

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 38

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 39

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 40

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 41

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 42

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 43

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 44

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 47

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

- Greedy by end-time picks the most non-overlapping intervals.

## entry 52

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 53

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 54

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 57

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 58

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- LIS via patience: each pile holds the smallest tail of length k.

## entry 62

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 63

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 65

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 66

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 70

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 72

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 75

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 76

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 77

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 78

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 79

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 80

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

- Walk both pointers from each end inward; advance the smaller side.

## entry 82

- Splay tree: every access splays to the root; amortized O(log n).

## entry 83

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 86

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 87

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 88

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 89

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 90

- StringBuilder: amortize allocation by doubling on grow.

## entry 91

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 92

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 95

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.
