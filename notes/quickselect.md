# quickselect

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Euler tour flattens a tree into an array for range-query LCA.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 27

- Splay tree: every access splays to the root; amortized O(log n).

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 34

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 40

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 41

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 42

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
