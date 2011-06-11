# digit-dp

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 29

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 30

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

LIS via patience: each pile holds the smallest tail of length k.

## entry 33

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 36

Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

Greedy by end-time picks the most non-overlapping intervals.

## entry 38

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 39

Euler tour flattens a tree into an array for range-query LCA.

## entry 40

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 45

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 46

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 47

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 48

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 49

Monotonic stack pops while the new element violates the invariant.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 54

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Splay tree: every access splays to the root; amortized O(log n).

## entry 60

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 61

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 62

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

Euler tour flattens a tree into an array for range-query LCA.

## entry 67

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 68

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

LIS via patience: each pile holds the smallest tail of length k.

## entry 70

Wavelet tree: range k-th element in O(log Σ) time.

## entry 71

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 77

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 79

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

Walk both pointers from each end inward; advance the smaller side.

## entry 82

Stable sort matters when a secondary key was set in a prior pass.

## entry 83

Articulation points: same DFS as bridges, with a slightly different test.

## entry 84

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 85

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 86

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 87

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 92

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 93

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 95

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 96

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 98

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 99

State compression: bitmask + integer encodes a small subset cheaply.

## entry 100

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 101

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 102

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 106

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 107

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 108

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 109

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 111

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 112

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 113

Monotonic stack pops while the new element violates the invariant.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 116

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 117

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 118

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 119

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 122

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 123

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 124

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 126

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 127

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 129

StringBuilder: amortize allocation by doubling on grow.

## entry 130

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 131

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 132

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 133

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 134

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 135

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 136

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 138

Stable sort matters when a secondary key was set in a prior pass.

## entry 139

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

Greedy by end-time picks the most non-overlapping intervals.

## entry 141

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 142

Union-Find with path compression amortizes to near-O(1) per op.

## entry 143

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 144

Euler tour flattens a tree into an array for range-query LCA.

## entry 145

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 146

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 147

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 148

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 150

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 152

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 153

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 154

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 155

Walk both pointers from each end inward; advance the smaller side.

## entry 156

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

LIS via patience: each pile holds the smallest tail of length k.

## entry 158

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 159

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 160

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 161

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 162

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 163

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 164

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 165

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 166

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 167

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 168

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 169

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 170

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 173

Union-Find with path compression amortizes to near-O(1) per op.

## entry 174

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 176

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

Greedy by end-time picks the most non-overlapping intervals.

## entry 178

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 179

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 180

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 181

State compression: bitmask + integer encodes a small subset cheaply.

## entry 182

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 183

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 184

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 185

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 186

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 187

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 188

Wavelet tree: range k-th element in O(log Σ) time.

## entry 189

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 190

Wavelet tree: range k-th element in O(log Σ) time.

## entry 191

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 192

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

LIS via patience: each pile holds the smallest tail of length k.

## entry 194

Union-Find with path compression amortizes to near-O(1) per op.

## entry 195

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 196

Stable sort matters when a secondary key was set in a prior pass.

## entry 197

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 198

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 199

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 200

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 201

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 203

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 207

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 208

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 209

Walk both pointers from each end inward; advance the smaller side.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 212

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 213

Union-Find with path compression amortizes to near-O(1) per op.

## entry 214

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 215

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 216

Greedy by end-time picks the most non-overlapping intervals.

## entry 217

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 218

State compression: bitmask + integer encodes a small subset cheaply.

## entry 219

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 220

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 221

Articulation points: same DFS as bridges, with a slightly different test.

## entry 222

LIS via patience: each pile holds the smallest tail of length k.

## entry 223

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 224

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 225

Monotonic stack pops while the new element violates the invariant.

## entry 226

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 227

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 228

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 229

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 230

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 231

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 232

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 233

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 234

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 235

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 237

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 238

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 239

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 240

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

Greedy by end-time picks the most non-overlapping intervals.

## entry 242

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 243

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 244

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 245

Articulation points: same DFS as bridges, with a slightly different test.

## entry 246

Splay tree: every access splays to the root; amortized O(log n).

## entry 247

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 248

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 249

Greedy by end-time picks the most non-overlapping intervals.

## entry 250

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 251

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 252

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 253

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 254

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 255

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 256

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 257

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 258

Splay tree: every access splays to the root; amortized O(log n).

## entry 259

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 260

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 261

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 262

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 263

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 264

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 265

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 266

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 267

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 268

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 269

Articulation points: same DFS as bridges, with a slightly different test.

## entry 270

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 271

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 272

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 273

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 274

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 275

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 276

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 277

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 279

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 280

State compression: bitmask + integer encodes a small subset cheaply.

## entry 281

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 282

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 283

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 284

LIS via patience: each pile holds the smallest tail of length k.

## entry 285

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 286

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 287

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 288

Monotonic stack pops while the new element violates the invariant.

## entry 289

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 290

State compression: bitmask + integer encodes a small subset cheaply.

## entry 291

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 292

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 293

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 294

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 295

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 296

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 297

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 298

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 299

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 300

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 301

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 302

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 303

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 304

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 305

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 306

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 307

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 308

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 309

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 310

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 311

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 312

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 313

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 314

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 315

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 316

LIS via patience: each pile holds the smallest tail of length k.

## entry 317

Articulation points: same DFS as bridges, with a slightly different test.

## entry 318

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 319

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 320

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 321

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 322

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 323

Greedy by end-time picks the most non-overlapping intervals.

## entry 324

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 325

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 326

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 327

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 328

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 329

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 330

Stable sort matters when a secondary key was set in a prior pass.

## entry 331

Stable sort matters when a secondary key was set in a prior pass.

## entry 332

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 333

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 334

Union-Find with path compression amortizes to near-O(1) per op.

## entry 335

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 336

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 337

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 338

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 339

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 340

Walk both pointers from each end inward; advance the smaller side.

## entry 341

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 342

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 343

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 344

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 345

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 346

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 348

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 349

Wavelet tree: range k-th element in O(log Σ) time.

## entry 350

Walk both pointers from each end inward; advance the smaller side.

## entry 351

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 352

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 353

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 354

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 355

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

Union-Find with path compression amortizes to near-O(1) per op.

## entry 357

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 358

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 359

Walk both pointers from each end inward; advance the smaller side.

## entry 360

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 361

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 362

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 364

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 365

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 366

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 367

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

Articulation points: same DFS as bridges, with a slightly different test.

## entry 369

Articulation points: same DFS as bridges, with a slightly different test.

## entry 370

Union-Find with path compression amortizes to near-O(1) per op.

## entry 371

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 372

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 373

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 374

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 375

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 376

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 377

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 378

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 379

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 380

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 381

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 382

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 383

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 384

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 385

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 386

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 387

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 388

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 389

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 390

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 391

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 392

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 393

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 394

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 395

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 396

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 397

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 398

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 399

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 400

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 401

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 402

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 403

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 404

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 405

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 406

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 407

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 408

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 409

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 410

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 411

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 412

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 413

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 414

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 415

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 416

StringBuilder: amortize allocation by doubling on grow.

## entry 417

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 418

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 420

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 421

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 422

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 423

StringBuilder: amortize allocation by doubling on grow.

## entry 424

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 425

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 426

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 427

Walk both pointers from each end inward; advance the smaller side.

## entry 428

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 429

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 430

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 431

Walk both pointers from each end inward; advance the smaller side.

## entry 432

Stable sort matters when a secondary key was set in a prior pass.

## entry 433

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 434

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 435

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 436

Walk both pointers from each end inward; advance the smaller side.

## entry 437

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 438

Euler tour flattens a tree into an array for range-query LCA.

## entry 439

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 441

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 442

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 443

Union-Find with path compression amortizes to near-O(1) per op.

## entry 444

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 445

Splay tree: every access splays to the root; amortized O(log n).

## entry 446

Union-Find with path compression amortizes to near-O(1) per op.

## entry 447

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 448

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 449

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 450

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 451

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 452

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 453

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 454

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 455

Articulation points: same DFS as bridges, with a slightly different test.

## entry 456

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 457

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 458

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 459

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 460

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 461

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 462

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 463

Wavelet tree: range k-th element in O(log Σ) time.

## entry 464

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 465

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 466

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 467

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 468

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 469

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 470

State compression: bitmask + integer encodes a small subset cheaply.

## entry 471

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 472

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 473

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 474

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 475

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 476

Articulation points: same DFS as bridges, with a slightly different test.

## entry 477

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 478

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 479

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 480

Union-Find with path compression amortizes to near-O(1) per op.

## entry 481

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 482

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 483

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 484

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 485

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 486

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 487

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 488

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 489

StringBuilder: amortize allocation by doubling on grow.

## entry 490

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 491

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 492

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 493

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 494

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 495

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 496

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 497

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 498

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 499

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 500

Monotonic stack pops while the new element violates the invariant.

## entry 501

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 502

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 503

Monotonic stack pops while the new element violates the invariant.

## entry 504

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 505

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 506

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 507

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 508

StringBuilder: amortize allocation by doubling on grow.

## entry 509

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 510

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 511

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 512

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 513

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 514

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 515

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 516

StringBuilder: amortize allocation by doubling on grow.

## entry 517

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 518

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 519

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 520

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 521

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 523

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 524

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 525

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 526

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 527

StringBuilder: amortize allocation by doubling on grow.

## entry 528

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 529

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 530

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 531

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 532

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 533

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 534

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 535

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 536

LIS via patience: each pile holds the smallest tail of length k.

## entry 537

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 538

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 539

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 540

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 541

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 542

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 543

Wavelet tree: range k-th element in O(log Σ) time.

## entry 544

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 545

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 546

Walk both pointers from each end inward; advance the smaller side.

## entry 547

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 548

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 549

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 550

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 551

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 552

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 553

LIS via patience: each pile holds the smallest tail of length k.

## entry 554

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 555

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 556

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 557

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 558

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 559

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 560

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 561

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 562

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 563

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 564

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 565

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 566

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 567

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 568

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 569

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 570

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 571

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 572

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 573

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 574

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 575

Greedy by end-time picks the most non-overlapping intervals.

## entry 576

State compression: bitmask + integer encodes a small subset cheaply.

## entry 577

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 578

Articulation points: same DFS as bridges, with a slightly different test.

## entry 579

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 580

StringBuilder: amortize allocation by doubling on grow.

## entry 581

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 582

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 583

LIS via patience: each pile holds the smallest tail of length k.

## entry 584

Stable sort matters when a secondary key was set in a prior pass.

## entry 585

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 586

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 587

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 588

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 589

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 590

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 591

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 592

State compression: bitmask + integer encodes a small subset cheaply.

## entry 593

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 594

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 595

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 596

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 597

Walk both pointers from each end inward; advance the smaller side.

## entry 598

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 599

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 600

Interval tree: stores intervals on the median; query traverses O(log n) levels.
