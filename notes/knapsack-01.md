# knapsack-01

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Union-Find with path compression amortizes to near-O(1) per op.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 7

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- StringBuilder: amortize allocation by doubling on grow.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

- Interval tree: stores intervals on the median; query traverses O(log n) levels.
