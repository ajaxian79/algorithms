# tarjan-scc

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

Splay tree: every access splays to the root; amortized O(log n).

## entry 27

Walk both pointers from each end inward; advance the smaller side.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 41

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 44

Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 46

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 47

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 49

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 50

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Articulation points: same DFS as bridges, with a slightly different test.

## entry 60

Walk both pointers from each end inward; advance the smaller side.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 64

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 65

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 70

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 71

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 74

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 75

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 76

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 79

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 80

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 81

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

StringBuilder: amortize allocation by doubling on grow.

## entry 83

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

State compression: bitmask + integer encodes a small subset cheaply.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 87

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 88

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 90

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 94

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 95

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 96

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 97

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 101

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 102

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 103

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 104

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 105

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 108

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 109

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 110

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 111

Union-Find with path compression amortizes to near-O(1) per op.

## entry 112

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 113

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 114

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 116

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 117

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 119

Wavelet tree: range k-th element in O(log Σ) time.

## entry 120

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 121

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 122

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 123

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 124

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 126

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 127

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 128

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 129

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 130

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 131

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 132

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 133

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 134

Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 136

Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 138

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 139

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 140

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 141

Stable sort matters when a secondary key was set in a prior pass.

## entry 142

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 143

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 144

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 145

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 146

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 147

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 148

Euler tour flattens a tree into an array for range-query LCA.

## entry 149

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 150

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 151

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 153

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 154

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 156

Walk both pointers from each end inward; advance the smaller side.

## entry 157

Wavelet tree: range k-th element in O(log Σ) time.

## entry 158

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 159

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 160

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 161

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 162

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 163

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 164

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 165

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 166

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 167

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 168

Stable sort matters when a secondary key was set in a prior pass.

## entry 169

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 170

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 171

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 172

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 173

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 175

Heap when you only need top-k; full sort is wasted work.

## entry 176

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 177

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 178

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

State compression: bitmask + integer encodes a small subset cheaply.

## entry 180

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 181

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 183

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 184

Wavelet tree: range k-th element in O(log Σ) time.

## entry 185

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 186

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 187

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 188

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 189

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 190

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 191

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 192

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 193

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 194

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 196

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 197

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 198

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

Splay tree: every access splays to the root; amortized O(log n).

## entry 200

Wavelet tree: range k-th element in O(log Σ) time.

## entry 201

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 203

Splay tree: every access splays to the root; amortized O(log n).

## entry 204

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 205

Splay tree: every access splays to the root; amortized O(log n).

## entry 206

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 208

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 209

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 211

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 212

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 213

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 214

Splay tree: every access splays to the root; amortized O(log n).

## entry 215

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 216

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 217

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 218

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 219

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 220

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 221

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 222

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 223

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 224

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 225

Greedy by end-time picks the most non-overlapping intervals.

## entry 226

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 227

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 228

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 229

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 230

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 231

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 232

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 233

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 234

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 235

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 236

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 237

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 238

State compression: bitmask + integer encodes a small subset cheaply.

## entry 239

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 240

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 241

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 242

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 243

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 244

Union-Find with path compression amortizes to near-O(1) per op.

## entry 245

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 246

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 247

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 248

Union-Find with path compression amortizes to near-O(1) per op.

## entry 249

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 250

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 251

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 252

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 253

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 254

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 255

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 256

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 257

Stable sort matters when a secondary key was set in a prior pass.

## entry 258

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 259

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 260

Articulation points: same DFS as bridges, with a slightly different test.

## entry 261

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 262

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 263

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 264

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 265

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 266

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 267

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 269

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 270

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 271

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 272

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 273

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 274

Walk both pointers from each end inward; advance the smaller side.

## entry 275

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 276

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 277

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 278

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 279

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 280

Monotonic stack pops while the new element violates the invariant.

## entry 281

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 282

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 283

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 284

Wavelet tree: range k-th element in O(log Σ) time.

## entry 285

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 286

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 287

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 288

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 289

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 290

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 291

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 292

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 293

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 294

Union-Find with path compression amortizes to near-O(1) per op.

## entry 295

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 296

State compression: bitmask + integer encodes a small subset cheaply.

## entry 297

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 298

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 299

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 300

Articulation points: same DFS as bridges, with a slightly different test.

## entry 301

Union-Find with path compression amortizes to near-O(1) per op.

## entry 302

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 303

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 304

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 305

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 306

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 307

Splay tree: every access splays to the root; amortized O(log n).

## entry 308

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 309

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 310

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 312

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 313

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 314

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 315

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 316

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 317

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 318

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 319

Greedy by end-time picks the most non-overlapping intervals.

## entry 320

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 321

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 322

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 323

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 324

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 325

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 326

Union-Find with path compression amortizes to near-O(1) per op.

## entry 327

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 328

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 329

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 330

Heap when you only need top-k; full sort is wasted work.

## entry 331

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 332

Greedy by end-time picks the most non-overlapping intervals.

## entry 333

Heap when you only need top-k; full sort is wasted work.

## entry 334

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 335

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 336

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 337

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 338

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 339

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 340

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 341

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 342

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 343

Articulation points: same DFS as bridges, with a slightly different test.

## entry 344

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 345

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 346

Union-Find with path compression amortizes to near-O(1) per op.

## entry 347

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 348

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 349

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 350

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 351

Splay tree: every access splays to the root; amortized O(log n).

## entry 352

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 353

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 354

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 355

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 356

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 357

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 359

BFS layers carry implicit shortest-path distance in unweighted graphs.
