# bst-invariants

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic stack pops while the new element violates the invariant.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Unbounded knapsack: capacity inner ascending allows item reuse.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Pick a pivot, partition, recurse on the side that contains the kth slot.

In-place compaction uses two pointers: read advances always, write only on keep.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Heap when you only need top-k; full sort is wasted work.

## entry 9

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

LIS via patience: each pile holds the smallest tail of length k.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 16

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 18

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 25

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 28

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 29

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 32

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 33

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 35

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 36

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 40

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 41

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 45

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 47

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 50

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 52

Monotonic stack pops while the new element violates the invariant.

## entry 53

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 54

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

Splay tree: every access splays to the root; amortized O(log n).

## entry 56

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 57

Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

Walk both pointers from each end inward; advance the smaller side.

## entry 59

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 60

State compression: bitmask + integer encodes a small subset cheaply.

## entry 61

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 62

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 63

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Articulation points: same DFS as bridges, with a slightly different test.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Monotonic stack pops while the new element violates the invariant.

## entry 72

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 73

Splay tree: every access splays to the root; amortized O(log n).

## entry 74

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 75

Heap when you only need top-k; full sort is wasted work.

## entry 76

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 78

Splay tree: every access splays to the root; amortized O(log n).

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 81

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 82

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Heap when you only need top-k; full sort is wasted work.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 92

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 98

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 100

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 101

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 102

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 103

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 105

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 106

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 108

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 109

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 110

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 111

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 112

Heap when you only need top-k; full sort is wasted work.

## entry 113

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 114

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 115

Euler tour flattens a tree into an array for range-query LCA.

## entry 116

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 117

Euler tour flattens a tree into an array for range-query LCA.

## entry 118

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 119

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 120

Greedy by end-time picks the most non-overlapping intervals.

## entry 121

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 123

LIS via patience: each pile holds the smallest tail of length k.

## entry 124

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 125

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 126

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 127

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 130

Heap when you only need top-k; full sort is wasted work.

## entry 131

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 132

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 133

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 134

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 136

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 137

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 138

Monotonic stack pops while the new element violates the invariant.

## entry 139

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 140

Heap when you only need top-k; full sort is wasted work.

## entry 141

Articulation points: same DFS as bridges, with a slightly different test.

## entry 142

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 143

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 144

Monotonic stack pops while the new element violates the invariant.

## entry 145

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 146

Stable sort matters when a secondary key was set in a prior pass.

## entry 147

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 148

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 149

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 150

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 151

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 152

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 153

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 154

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 155

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 156

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 157

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 158

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 161

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 162

Articulation points: same DFS as bridges, with a slightly different test.

## entry 163

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 164

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 165

Splay tree: every access splays to the root; amortized O(log n).

## entry 166

StringBuilder: amortize allocation by doubling on grow.

## entry 167

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 168

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 169

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 170

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 173

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 175

StringBuilder: amortize allocation by doubling on grow.

## entry 176

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 177

Monotonic stack pops while the new element violates the invariant.

## entry 178

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 179

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

LIS via patience: each pile holds the smallest tail of length k.

## entry 181

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 182

LIS via patience: each pile holds the smallest tail of length k.

## entry 183

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 184

Splay tree: every access splays to the root; amortized O(log n).

## entry 185

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 186

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 187

StringBuilder: amortize allocation by doubling on grow.

## entry 188

Greedy by end-time picks the most non-overlapping intervals.

## entry 189

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 190

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 191

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 192

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 193

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 194

Union-Find with path compression amortizes to near-O(1) per op.

## entry 195

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 196

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 197

Union-Find with path compression amortizes to near-O(1) per op.

## entry 198

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 199

StringBuilder: amortize allocation by doubling on grow.

## entry 200

Heap when you only need top-k; full sort is wasted work.

## entry 201

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 202

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 203

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 204

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 205

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 206

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 207

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 208

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 209

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 210

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 211

Euler tour flattens a tree into an array for range-query LCA.

## entry 212

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 213

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 214

LIS via patience: each pile holds the smallest tail of length k.

## entry 215

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 216

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 217

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 218

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 219

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

Wavelet tree: range k-th element in O(log Σ) time.

## entry 221

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 222

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 223

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 224

Walk both pointers from each end inward; advance the smaller side.

## entry 225

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 226

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 227

Monotonic stack pops while the new element violates the invariant.

## entry 228

Splay tree: every access splays to the root; amortized O(log n).

## entry 229

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 230

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 233

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 234

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 235

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 236

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 237

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 238

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 239

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 241

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 242

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 243

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 244

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 245

Walk both pointers from each end inward; advance the smaller side.

## entry 246

StringBuilder: amortize allocation by doubling on grow.

## entry 247

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 248

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 249

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 250

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 251

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 252

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 253

Heap when you only need top-k; full sort is wasted work.

## entry 254

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 255

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 256

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 257

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 258

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 259

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 260

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 261

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 262

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 263

StringBuilder: amortize allocation by doubling on grow.

## entry 264

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 265

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 266

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 267

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 268

Stable sort matters when a secondary key was set in a prior pass.

## entry 269

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 270

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 271

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 272

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 273

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 274

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 275

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 276

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 277

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 278

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 279

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 280

Greedy by end-time picks the most non-overlapping intervals.

## entry 281

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 282

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 283

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 284

Monotonic stack pops while the new element violates the invariant.

## entry 285

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 286

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 287

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 288

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 289

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 290

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 291

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 292

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 293

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 294

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 295

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 296

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 297

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 298

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 299

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 300

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 301

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 302

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 303

Union-Find with path compression amortizes to near-O(1) per op.

## entry 304

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 305

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 306

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 307

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 308

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 309

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 310

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 311

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 312

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 313

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 314

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 315

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 316

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 317

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 318

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 319

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 320

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 321

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 322

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 323

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 324

Wavelet tree: range k-th element in O(log Σ) time.

## entry 325

Euler tour flattens a tree into an array for range-query LCA.

## entry 326

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 327

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 328

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 330

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 331

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 332

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 333

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 334

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 336

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 337

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 338

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 339

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 340

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 341

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 342

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 343

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 344

Heap when you only need top-k; full sort is wasted work.

## entry 345

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 346

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 347

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 348

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 349

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 350

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 351

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 352

Greedy by end-time picks the most non-overlapping intervals.

## entry 353

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 354

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 355

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 356

Greedy by end-time picks the most non-overlapping intervals.

## entry 357

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 358

Euler tour flattens a tree into an array for range-query LCA.

## entry 359

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 360

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 361

Walk both pointers from each end inward; advance the smaller side.

## entry 362

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 363

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 364

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 365

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 366

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 367

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 368

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 369

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 370

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 371

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 372

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 373

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 374

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 375

State compression: bitmask + integer encodes a small subset cheaply.

## entry 376

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 377

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 378

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 379

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 380

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 381

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 382

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 383

LIS via patience: each pile holds the smallest tail of length k.

## entry 384

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 385

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 386

StringBuilder: amortize allocation by doubling on grow.

## entry 387

Greedy by end-time picks the most non-overlapping intervals.

## entry 388

Heap when you only need top-k; full sort is wasted work.

## entry 389

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 390

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 391

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 392

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 393

StringBuilder: amortize allocation by doubling on grow.

## entry 394

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 395

Wavelet tree: range k-th element in O(log Σ) time.

## entry 396

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 397

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 398

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 399

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 401

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 402

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 403

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 404

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 405

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 406

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
