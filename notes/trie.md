# trie

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Union-Find with path compression amortizes to near-O(1) per op.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Splay tree: every access splays to the root; amortized O(log n).

## entry 27

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 31

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 32

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 33

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 35

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

- BFS layers carry implicit shortest-path distance in unweighted graphs.
