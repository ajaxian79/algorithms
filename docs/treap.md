# treap

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

Heap when you only need top-k; full sort is wasted work.

## entry 7

Euler tour flattens a tree into an array for range-query LCA.

## entry 8

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 15

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 22

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 26

Heap when you only need top-k; full sort is wasted work.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 35

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 36

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 39

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 40

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 41

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 49

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 50

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 51

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Walk both pointers from each end inward; advance the smaller side.

## entry 55

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 56

Heap when you only need top-k; full sort is wasted work.

## entry 57

Walk both pointers from each end inward; advance the smaller side.

## entry 58

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

Stable sort matters when a secondary key was set in a prior pass.

## entry 66

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 67

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 69

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 70

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 74

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 75

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 76

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 79

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 80

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 81

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 82

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Stable sort matters when a secondary key was set in a prior pass.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 88

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 89

State compression: bitmask + integer encodes a small subset cheaply.

## entry 90

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 91

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 92

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 94

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 101

StringBuilder: amortize allocation by doubling on grow.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 104

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 107

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 108

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 111

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 112

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 113

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 118

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 119

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 121

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 122

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 123

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 124

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 125

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 126

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

Articulation points: same DFS as bridges, with a slightly different test.

## entry 128

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 131

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 132

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 133

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 134

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 136

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 137

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 138

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 139

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 140

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 141

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 142

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 143

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 144

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 148

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 149

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 150

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 151

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 152

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 153

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 154

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 155

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 156

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 157

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 158

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 159

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 160

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 161

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 162

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 164

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 165

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 166

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 167

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 168

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 169

Greedy by end-time picks the most non-overlapping intervals.

## entry 170

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 172

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 173

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 174

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 175

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 176

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 178

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 179

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 181

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 182

Monotonic stack pops while the new element violates the invariant.

## entry 183

Greedy by end-time picks the most non-overlapping intervals.

## entry 184

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 185

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 186

Walk both pointers from each end inward; advance the smaller side.

## entry 187

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 188

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 189

State compression: bitmask + integer encodes a small subset cheaply.

## entry 190

LIS via patience: each pile holds the smallest tail of length k.

## entry 191

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 192

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 195

Stable sort matters when a secondary key was set in a prior pass.

## entry 196

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 197

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 198

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 199

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 200

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 201

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 203

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 204

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 209

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 212

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

Articulation points: same DFS as bridges, with a slightly different test.

## entry 214

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
