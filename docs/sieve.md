# sieve

LIS via patience: each pile holds the smallest tail of length k.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Heap when you only need top-k; full sort is wasted work.

Morris traversal threads predecessors back to current node — O(1) extra space.

Stable sort matters when a secondary key was set in a prior pass.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Merge intervals: sort by start; extend the running interval while overlapping.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1

Euler tour flattens a tree into an array for range-query LCA.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

State compression: bitmask + integer encodes a small subset cheaply.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 9

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 10

LIS via patience: each pile holds the smallest tail of length k.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 13

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 19

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 20

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 22

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 24

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 27

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 32

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 33

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 34

Greedy by end-time picks the most non-overlapping intervals.

## entry 35

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 37

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 38

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 42

LIS via patience: each pile holds the smallest tail of length k.

## entry 43

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 46

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 49

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 50

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 53

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 54

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 55

Walk both pointers from each end inward; advance the smaller side.

## entry 56

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 58

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 60

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 61

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 63

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 65

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 66

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 67

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 70

Stable sort matters when a secondary key was set in a prior pass.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

Articulation points: same DFS as bridges, with a slightly different test.

## entry 75

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 76

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 77

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 83

Heap when you only need top-k; full sort is wasted work.

## entry 84

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Splay tree: every access splays to the root; amortized O(log n).

## entry 91

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 93

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 94

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 95

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 97

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 98

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 99

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 100

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 101

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 102

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 105

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

Wavelet tree: range k-th element in O(log Σ) time.

## entry 108

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

Splay tree: every access splays to the root; amortized O(log n).

## entry 110

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 111

Monotonic stack pops while the new element violates the invariant.

## entry 112

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 116

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 119

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 120

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 121

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

Monotonic stack pops while the new element violates the invariant.

## entry 124

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 125

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 126

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 127

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 128

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 129

Splay tree: every access splays to the root; amortized O(log n).

## entry 130

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 132

Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 136

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 137

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 138

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 139

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 140

Splay tree: every access splays to the root; amortized O(log n).

## entry 141

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 142

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 143

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 144

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 145

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

LIS via patience: each pile holds the smallest tail of length k.

## entry 148

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 149

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 151

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 152

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 153

Heap when you only need top-k; full sort is wasted work.

## entry 154

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 155

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 156

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 158

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 159

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 160

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 161

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 162

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 163

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 164

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 166

Monotonic stack pops while the new element violates the invariant.

## entry 167

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 168

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 169

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 170

Splay tree: every access splays to the root; amortized O(log n).

## entry 171

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 172

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 173

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 175

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 177

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 178

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 179

Articulation points: same DFS as bridges, with a slightly different test.

## entry 180

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 181

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 182

Stable sort matters when a secondary key was set in a prior pass.

## entry 183

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 184

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 185

Stable sort matters when a secondary key was set in a prior pass.

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 189

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 190

Articulation points: same DFS as bridges, with a slightly different test.

## entry 191

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 192

Walk both pointers from each end inward; advance the smaller side.

## entry 193

Walk both pointers from each end inward; advance the smaller side.

## entry 194

Monotonic stack pops while the new element violates the invariant.

## entry 195

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 196

State compression: bitmask + integer encodes a small subset cheaply.

## entry 197

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 198

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 200

Wavelet tree: range k-th element in O(log Σ) time.

## entry 201

Euler tour flattens a tree into an array for range-query LCA.

## entry 202

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 203

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 204

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 205

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 206

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 207

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 209

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 210

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 211

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 212

Walk both pointers from each end inward; advance the smaller side.

## entry 213

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

Splay tree: every access splays to the root; amortized O(log n).

## entry 215

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

Walk both pointers from each end inward; advance the smaller side.

## entry 217

StringBuilder: amortize allocation by doubling on grow.

## entry 218

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 219

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 220

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 221

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 222

Tabulation wins when iteration order is obvious and stack depth would blow up.
