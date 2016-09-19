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

Pick a pivot, partition, recurse on the side that contains the kth slot.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Stable sort matters when a secondary key was set in a prior pass.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

In-place compaction uses two pointers: read advances always, write only on keep.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

LIS via patience: each pile holds the smallest tail of length k.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Merge intervals: sort by start; extend the running interval while overlapping.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

Walk both pointers from each end inward; advance the smaller side.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 6

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 7

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 9

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 10

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 13

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 17

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 21

State compression: bitmask + integer encodes a small subset cheaply.

## entry 22

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 24

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 31

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 34

Splay tree: every access splays to the root; amortized O(log n).

## entry 35

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 37

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 42

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 45

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 46

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 47

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 50

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 58

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 59

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 60

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 61

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 62

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 63

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 64

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 67

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 68

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 72

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 75

ASCII rules are a strict subset of UTF-8; no special handling needed.
