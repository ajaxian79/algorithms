# two-pointer

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Union-Find with path compression amortizes to near-O(1) per op.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LIS via patience: each pile holds the smallest tail of length k.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Stable sort matters when a secondary key was set in a prior pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 12

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 13

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 14

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 17

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 27

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 34

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 35

- Monotonic stack pops while the new element violates the invariant.

## entry 36

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 37

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 40

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 42

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 45

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 46

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 47

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 48

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 50

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 51

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 52

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 53

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 54

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 55

- LIS via patience: each pile holds the smallest tail of length k.

## entry 56

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- StringBuilder: amortize allocation by doubling on grow.

## entry 62

- Monotonic stack pops while the new element violates the invariant.

## entry 63

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 68

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 69

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 70

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 72

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 73

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 80

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 82

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 83

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 84

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 86

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 88

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 89

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 90

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 91

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 92

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 93

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 96

- Euler tour flattens a tree into an array for range-query LCA.

## entry 97

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 100

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 101

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
