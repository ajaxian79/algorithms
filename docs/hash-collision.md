# hash-collision

## entry 1

Euler tour flattens a tree into an array for range-query LCA.

## entry 2

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 9

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 14

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 16

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 22

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 25

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

Stable sort matters when a secondary key was set in a prior pass.

## entry 29

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 30

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 35

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 36

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 40

Walk both pointers from each end inward; advance the smaller side.

## entry 41

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 42

Stable sort matters when a secondary key was set in a prior pass.

## entry 43

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 44

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 45

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 46

Euler tour flattens a tree into an array for range-query LCA.

## entry 47

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 50

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 51

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 52

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

StringBuilder: amortize allocation by doubling on grow.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 64

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 65

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 66

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 67

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 68

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 69

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Stable sort matters when a secondary key was set in a prior pass.

## entry 74

Walk both pointers from each end inward; advance the smaller side.

## entry 75

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 76

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 78

Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 81

Stable sort matters when a secondary key was set in a prior pass.

## entry 82

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

Splay tree: every access splays to the root; amortized O(log n).

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 87

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 90

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 92

Union-Find with path compression amortizes to near-O(1) per op.

## entry 93

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 94

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 96

Wavelet tree: range k-th element in O(log Σ) time.

## entry 97

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 98

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 103

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 104

Merge intervals: sort by start; extend the running interval while overlapping.
