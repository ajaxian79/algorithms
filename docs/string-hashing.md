# string-hashing

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

In-place compaction uses two pointers: read advances always, write only on keep.

Manacher expands around each center, reusing prior radii via mirror reflection.

Walk both pointers from each end inward; advance the smaller side.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Heap when you only need top-k; full sort is wasted work.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Stable sort matters when a secondary key was set in a prior pass.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Morris traversal threads predecessors back to current node — O(1) extra space.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Unbounded knapsack: capacity inner ascending allows item reuse.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 7

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 10

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

Stable sort matters when a secondary key was set in a prior pass.

## entry 13

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 14

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 18

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

StringBuilder: amortize allocation by doubling on grow.

## entry 24

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 27

Wavelet tree: range k-th element in O(log Σ) time.

## entry 28

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 29

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 32

State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 34

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 38

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 39

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 41

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 43

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 44

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 45

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 46

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 47

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 48

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 49

Greedy by end-time picks the most non-overlapping intervals.

## entry 50

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 52

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 54

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 56

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 57

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 60

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 61

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

Euler tour flattens a tree into an array for range-query LCA.

## entry 64

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 68

Articulation points: same DFS as bridges, with a slightly different test.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 71

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

Wavelet tree: range k-th element in O(log Σ) time.

## entry 73

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 74

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 75

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 77

Articulation points: same DFS as bridges, with a slightly different test.

## entry 78

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 79

Euler tour flattens a tree into an array for range-query LCA.

## entry 80

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 81

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 82

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 83

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 84

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 87

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 88

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 89

Greedy by end-time picks the most non-overlapping intervals.

## entry 90

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 91

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

Monotonic stack pops while the new element violates the invariant.

## entry 93

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 94

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

LIS via patience: each pile holds the smallest tail of length k.

## entry 97

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 103

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 104

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 106

LIS via patience: each pile holds the smallest tail of length k.

## entry 107

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 108

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 109

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 110

Greedy by end-time picks the most non-overlapping intervals.

## entry 111

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 112

LIS via patience: each pile holds the smallest tail of length k.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 115

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Euler tour flattens a tree into an array for range-query LCA.

## entry 118

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 119

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 122

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 125

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 126

Greedy by end-time picks the most non-overlapping intervals.

## entry 127

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 128

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 129

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 130

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 131

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 132

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 133

Heap when you only need top-k; full sort is wasted work.

## entry 134

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 135

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 136

Greedy by end-time picks the most non-overlapping intervals.

## entry 137

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 138

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 139

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 140

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 141

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 142

Walk both pointers from each end inward; advance the smaller side.

## entry 143

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 144

Euler tour flattens a tree into an array for range-query LCA.

## entry 145

Stable sort matters when a secondary key was set in a prior pass.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 148

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 149

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 150

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 151

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 152

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 153

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 154

Union-Find with path compression amortizes to near-O(1) per op.

## entry 155

LIS via patience: each pile holds the smallest tail of length k.

## entry 156

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 158

Walk both pointers from each end inward; advance the smaller side.

## entry 159

StringBuilder: amortize allocation by doubling on grow.

## entry 160

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 161

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 162

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 163

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 164

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 165

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 166

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 167

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 168

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 169

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 170

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 171

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 173

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 174

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 175

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 176

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 177

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 178

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 179

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 180

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 181

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 182

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 183

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 184

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 185

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 186

Walk both pointers from each end inward; advance the smaller side.

## entry 187

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 188

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 189

StringBuilder: amortize allocation by doubling on grow.

## entry 190

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 191

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 193

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 194

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 196

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 197

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 198

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 199

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

Heap when you only need top-k; full sort is wasted work.

## entry 201

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 202

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 203

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 204

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 205

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 206

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 207

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 208

StringBuilder: amortize allocation by doubling on grow.

## entry 209

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 210

Euler tour flattens a tree into an array for range-query LCA.

## entry 211

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 212

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 213

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 214

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 215

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 216

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 217

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 218

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 219

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 220

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 221

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 222

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 223

Monotonic stack pops while the new element violates the invariant.

## entry 224

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 225

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 226

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 227

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 228

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 229

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 230

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 231

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 232

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 233

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 234

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 235

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 236

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 237

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 238

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 239

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 240

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 241

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 242

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 243

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 244

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 245

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 246

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 247

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 248

Splay tree: every access splays to the root; amortized O(log n).

## entry 249

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 250

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 251

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 252

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 253

Wavelet tree: range k-th element in O(log Σ) time.

## entry 254

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 255

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 256

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 257

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 258

Union-Find with path compression amortizes to near-O(1) per op.

## entry 259

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 260

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 261

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 262

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 263

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 264

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 265

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 266

Articulation points: same DFS as bridges, with a slightly different test.

## entry 267

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 268

Stable sort matters when a secondary key was set in a prior pass.

## entry 269

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 270

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 271

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 272

Stable sort matters when a secondary key was set in a prior pass.

## entry 273

Monotonic stack pops while the new element violates the invariant.

## entry 274

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 275

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 276

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 277

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 278

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 279

State compression: bitmask + integer encodes a small subset cheaply.

## entry 280

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 281

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 282

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 283

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 284

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 286

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 287

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 288

Articulation points: same DFS as bridges, with a slightly different test.

## entry 289

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 290

Splay tree: every access splays to the root; amortized O(log n).

## entry 291

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 292

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 293

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 294

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 295

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 296

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 297

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 298

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 299

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 300

Wavelet tree: range k-th element in O(log Σ) time.

## entry 301

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 302

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 303

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 304

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 305

LIS via patience: each pile holds the smallest tail of length k.

## entry 306

Euler tour flattens a tree into an array for range-query LCA.

## entry 307

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 308

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 309

Heap when you only need top-k; full sort is wasted work.

## entry 310

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 311

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 312

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 313

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 314

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 315

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 316

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 317

Euler tour flattens a tree into an array for range-query LCA.

## entry 318

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 319

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 320

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 321

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 322

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 323

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 324

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 325

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 327

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 328

Greedy by end-time picks the most non-overlapping intervals.

## entry 329

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 330

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 331

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 332

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 333

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 334

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 335

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 336

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 337

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 338

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 339

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 340

State compression: bitmask + integer encodes a small subset cheaply.

## entry 341

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 342

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 343

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 344

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 345

LIS via patience: each pile holds the smallest tail of length k.

## entry 346

State compression: bitmask + integer encodes a small subset cheaply.

## entry 347

Euler tour flattens a tree into an array for range-query LCA.

## entry 348

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 349

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 350

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 351

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 352

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 353

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 354

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 355

Euler tour flattens a tree into an array for range-query LCA.

## entry 356

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 357

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 358

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 359

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 360

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 361

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 362

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
