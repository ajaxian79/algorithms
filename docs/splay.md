# splay

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Stable sort matters when a secondary key was set in a prior pass.

## entry 9

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 17

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 24

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 25

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 28

Splay tree: every access splays to the root; amortized O(log n).

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 33

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 34

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 35

StringBuilder: amortize allocation by doubling on grow.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 39

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 40

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

Union-Find with path compression amortizes to near-O(1) per op.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 44

Splay tree: every access splays to the root; amortized O(log n).

## entry 45

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 46

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 48

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 49

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 51

LIS via patience: each pile holds the smallest tail of length k.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 54

State compression: bitmask + integer encodes a small subset cheaply.

## entry 55

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

State compression: bitmask + integer encodes a small subset cheaply.

## entry 62

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 63

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 67

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

Walk both pointers from each end inward; advance the smaller side.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Stable sort matters when a secondary key was set in a prior pass.

## entry 73

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 76

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 80

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 81

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 83

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

Monotonic stack pops while the new element violates the invariant.

## entry 85

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 86

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 87

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 90

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 92

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

State compression: bitmask + integer encodes a small subset cheaply.

## entry 94

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 96

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 97

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 98

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 99

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 100

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 101

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 102

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
