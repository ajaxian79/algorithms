# CHANGELOG

## entry 1

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

- Splay tree: every access splays to the root; amortized O(log n).

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 15

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- Stable sort matters when a secondary key was set in a prior pass.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Euler tour flattens a tree into an array for range-query LCA.

## entry 24

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 30

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 31

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 32

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 33

- Monotonic stack pops while the new element violates the invariant.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 36

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 41

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 42

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 44

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 48

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 61

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 78

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

- Walk both pointers from each end inward; advance the smaller side.

## entry 80

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 82

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 83

- Heavy-light decomposition: each path crosses O(log n) heavy chains.
