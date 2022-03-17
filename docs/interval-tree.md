# interval-tree

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

Euler tour flattens a tree into an array for range-query LCA.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 26

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 31

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 40

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

Greedy by end-time picks the most non-overlapping intervals.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 48

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 49

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 50

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

Union-Find with path compression amortizes to near-O(1) per op.

## entry 53

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 59

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 60

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 61

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 62

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 63

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 64

Greedy by end-time picks the most non-overlapping intervals.

## entry 65

LIS via patience: each pile holds the smallest tail of length k.

## entry 66

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 67

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 68

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 69

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 71

Heap when you only need top-k; full sort is wasted work.

## entry 72

Union-Find with path compression amortizes to near-O(1) per op.

## entry 73

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 76

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 80

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 81

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 85

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 86

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 89

Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 92

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

Wavelet tree: range k-th element in O(log Σ) time.

## entry 94

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 95

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 97

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 98

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 101

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 102

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 103

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 105

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

Articulation points: same DFS as bridges, with a slightly different test.

## entry 107

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 108

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 111

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 112

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 113

LIS via patience: each pile holds the smallest tail of length k.

## entry 114

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

Euler tour flattens a tree into an array for range-query LCA.

## entry 116

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 117

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 118

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 119

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 120

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 121

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 122

Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

Greedy by end-time picks the most non-overlapping intervals.

## entry 125

StringBuilder: amortize allocation by doubling on grow.

## entry 126

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 127

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 130

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 131

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 132

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 133

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 134

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 135

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 136

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 137

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 139

Monotonic stack pops while the new element violates the invariant.

## entry 140

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 141

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 142

Greedy by end-time picks the most non-overlapping intervals.

## entry 143

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 144

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 145

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 146

StringBuilder: amortize allocation by doubling on grow.

## entry 147

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 148

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 150

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 151

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 152

State compression: bitmask + integer encodes a small subset cheaply.

## entry 153

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 154

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 155

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 156

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 160

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 161

State compression: bitmask + integer encodes a small subset cheaply.

## entry 162

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 163

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 164

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 165

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 167

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 168

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 169

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 170

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 171

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 172

Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 174

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 175

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 176

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 179

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 180

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

Stable sort matters when a secondary key was set in a prior pass.

## entry 182

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 183

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

Stable sort matters when a secondary key was set in a prior pass.

## entry 185

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 186

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

Splay tree: every access splays to the root; amortized O(log n).

## entry 188

Heap when you only need top-k; full sort is wasted work.

## entry 189

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 190

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 191

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 192

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 193

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 194

State compression: bitmask + integer encodes a small subset cheaply.

## entry 195

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 196

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 197

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 198

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 199

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 200

State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

Union-Find with path compression amortizes to near-O(1) per op.

## entry 203

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 208

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 209

Endianness matters when serializing multi-byte ints to a file or wire.
