# bridges

## entry 1

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 33

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Monotonic stack pops while the new element violates the invariant.

## entry 39

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 44

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

- LIS via patience: each pile holds the smallest tail of length k.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 52

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 58

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 68

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 69

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 70

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 71

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 79

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 80

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 81

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 82

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Walk both pointers from each end inward; advance the smaller side.

## entry 85

- StringBuilder: amortize allocation by doubling on grow.

## entry 86

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 88

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 94

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 95

- Walk both pointers from each end inward; advance the smaller side.

## entry 96

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 97

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 98

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 99

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
