# open-addressing

## entry 1

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 13

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

Walk both pointers from each end inward; advance the smaller side.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 19

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 38

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 39

Monotonic stack pops while the new element violates the invariant.

## entry 40

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

Stable sort matters when a secondary key was set in a prior pass.

## entry 45

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 46

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 48

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 50

Euler tour flattens a tree into an array for range-query LCA.

## entry 51

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 53

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 54

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 57

Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 60

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 61

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 64

Splay tree: every access splays to the root; amortized O(log n).

## entry 65

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 66

Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 68

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 69

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 70

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

StringBuilder: amortize allocation by doubling on grow.

## entry 72

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

StringBuilder: amortize allocation by doubling on grow.

## entry 75

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 76

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 78

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 79

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 86

Greedy by end-time picks the most non-overlapping intervals.

## entry 87

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 89

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 93

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 94

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 96

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 97

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 98

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 99

State compression: bitmask + integer encodes a small subset cheaply.

## entry 100

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 101

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 102

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 103

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 104

Splay tree: every access splays to the root; amortized O(log n).

## entry 105

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 108

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 110

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 111

StringBuilder pitfall: reuse forces a deep copy on the first read.
