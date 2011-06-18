# stringbuilder-pitfalls

## entry 1

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2

StringBuilder: amortize allocation by doubling on grow.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 22

State compression: bitmask + integer encodes a small subset cheaply.

## entry 23

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 24

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 25

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 26

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

Union-Find with path compression amortizes to near-O(1) per op.

## entry 28

StringBuilder: amortize allocation by doubling on grow.

## entry 29

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 30

Splay tree: every access splays to the root; amortized O(log n).

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

Monotonic stack pops while the new element violates the invariant.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 44

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 45

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 46

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 47

Heap when you only need top-k; full sort is wasted work.

## entry 48

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

State compression: bitmask + integer encodes a small subset cheaply.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 56

Euler tour flattens a tree into an array for range-query LCA.

## entry 57

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 58

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 59

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 61

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 62

LIS via patience: each pile holds the smallest tail of length k.

## entry 63

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 68

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 76

Splay tree: every access splays to the root; amortized O(log n).

## entry 77

Splay tree: every access splays to the root; amortized O(log n).

## entry 78

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 79

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 80

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 81

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 82

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 83

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 88

Greedy by end-time picks the most non-overlapping intervals.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Splay tree: every access splays to the root; amortized O(log n).

## entry 91

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 92

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 94

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

StringBuilder: amortize allocation by doubling on grow.

## entry 98

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 99

Greedy by end-time picks the most non-overlapping intervals.

## entry 100

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

Heap when you only need top-k; full sort is wasted work.

## entry 103

Stable sort matters when a secondary key was set in a prior pass.

## entry 104

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 105

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 106

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 107

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 108

StringBuilder: amortize allocation by doubling on grow.

## entry 109

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 110

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 111

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 112

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 113

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 115

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 116

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 118

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 119

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 121

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 122

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 123

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

Stable sort matters when a secondary key was set in a prior pass.

## entry 127

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 128

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 131

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 132

Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 134

Splay tree: every access splays to the root; amortized O(log n).

## entry 135

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 136

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 137

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 138

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

LIS via patience: each pile holds the smallest tail of length k.

## entry 141

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 142

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 143

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 144

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).

## entry 146

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 147

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 148

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 150

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 151

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 152

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 153

Union-Find with path compression amortizes to near-O(1) per op.

## entry 154

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 155

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 156

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 157

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 158

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 159

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 160

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 161

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 162

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 163

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 164

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 165

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 166

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 167

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 168

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 169

Union-Find with path compression amortizes to near-O(1) per op.

## entry 170

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 171

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 172

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 173

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 174

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 175

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 176

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 178

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 179

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 180

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 181

Greedy by end-time picks the most non-overlapping intervals.

## entry 182

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 183

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 184

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 185

Stable sort matters when a secondary key was set in a prior pass.

## entry 186

Stable sort matters when a secondary key was set in a prior pass.

## entry 187

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 188

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 189

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 191

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 192

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 193

LIS via patience: each pile holds the smallest tail of length k.

## entry 194

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 195

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 196

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 197

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 198

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

LIS via patience: each pile holds the smallest tail of length k.

## entry 200

State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 202

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 203

Stable sort matters when a secondary key was set in a prior pass.

## entry 204

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 205

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 206

Monotonic stack pops while the new element violates the invariant.

## entry 207

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 208

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 209

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 210

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 211

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 212

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 214

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 216

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 217

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 218

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 219

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 220

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 221

LIS via patience: each pile holds the smallest tail of length k.

## entry 222

LIS via patience: each pile holds the smallest tail of length k.

## entry 223

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 224

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 225

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 226

Greedy by end-time picks the most non-overlapping intervals.

## entry 227

Walk both pointers from each end inward; advance the smaller side.

## entry 228

StringBuilder: amortize allocation by doubling on grow.

## entry 229

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 230

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 231

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 232

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 233

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 234

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 235

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 236

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 237

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 238

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 239

Walk both pointers from each end inward; advance the smaller side.

## entry 240

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 241

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 242

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 243

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 244

State compression: bitmask + integer encodes a small subset cheaply.

## entry 245

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 246

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 247

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 248

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 249

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 250

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 251

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 252

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 253

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 254

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 255

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 256

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 258

Splay tree: every access splays to the root; amortized O(log n).

## entry 259

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 260

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 261

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 262

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 263

Euler tour flattens a tree into an array for range-query LCA.

## entry 264

State compression: bitmask + integer encodes a small subset cheaply.

## entry 265

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 266

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 267

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 268

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 269

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 270

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 271

Wavelet tree: range k-th element in O(log Σ) time.

## entry 272

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 273

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 274

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 275

Walk both pointers from each end inward; advance the smaller side.

## entry 276

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 277

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 278

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 279

Heap when you only need top-k; full sort is wasted work.

## entry 280

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 281

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 282

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 283

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 284

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 285

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 286

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 287

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 288

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 289

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 290

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 291

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 292

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 293

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 294

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 295

Union-Find with path compression amortizes to near-O(1) per op.

## entry 296

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 297

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 298

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 299

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 300

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 301

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 302

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 303

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 304

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 305

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 306

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 307

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 308

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 309

Wavelet tree: range k-th element in O(log Σ) time.

## entry 310

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 311

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 312

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 313

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 314

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 315

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 316

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 317

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 318

Walk both pointers from each end inward; advance the smaller side.

## entry 319

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 320

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 321

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 322

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 323

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 324

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 325

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 326

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 327

Walk both pointers from each end inward; advance the smaller side.

## entry 328

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 329

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 330

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 331

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 332

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 333

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 334

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 335

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 336

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 338

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 339

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 340

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 341

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 342

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 343

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 344

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 345

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 346

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 347

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 348

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 349

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 350

StringBuilder: amortize allocation by doubling on grow.

## entry 351

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 352

Union-Find with path compression amortizes to near-O(1) per op.

## entry 353

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 354

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 355

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 356

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 357

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 358

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 359

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 360

Stable sort matters when a secondary key was set in a prior pass.

## entry 361

Union-Find with path compression amortizes to near-O(1) per op.

## entry 362

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 363

Union-Find with path compression amortizes to near-O(1) per op.

## entry 364

Heap when you only need top-k; full sort is wasted work.

## entry 365

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 366

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 367

Splay tree: every access splays to the root; amortized O(log n).

## entry 368

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 369

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 370

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 371

StringBuilder: amortize allocation by doubling on grow.

## entry 372

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 373

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 374

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 375

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 376

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 377

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 378

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 379

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 380

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 381

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 382

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 383

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 384

Wavelet tree: range k-th element in O(log Σ) time.

## entry 385

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 386

Union-Find with path compression amortizes to near-O(1) per op.

## entry 387

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 388

Splay tree: every access splays to the root; amortized O(log n).

## entry 389

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 390

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 392

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 393

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 394

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 395

Euler tour flattens a tree into an array for range-query LCA.

## entry 396

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 397

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 398

Euler tour flattens a tree into an array for range-query LCA.

## entry 399

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 400

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 401

Articulation points: same DFS as bridges, with a slightly different test.

## entry 402

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 403

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 404

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 405

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 406

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 407

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 408

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 409

StringBuilder: amortize allocation by doubling on grow.

## entry 410

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 411

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 412

Union-Find with path compression amortizes to near-O(1) per op.

## entry 413

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 414

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 415

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 416

State compression: bitmask + integer encodes a small subset cheaply.

## entry 417

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 418

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 419

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 420

StringBuilder: amortize allocation by doubling on grow.

## entry 421

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 422

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 423

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 424

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 425

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 426

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 427

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 428

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 429

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 430

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 431

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 432

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 433

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 434

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 435

Greedy by end-time picks the most non-overlapping intervals.

## entry 436

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 437

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 438

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 439

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 440

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 441

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 442

Walk both pointers from each end inward; advance the smaller side.

## entry 443

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 444

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 445

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 446

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 447

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 448

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 449

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 450

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 451

Articulation points: same DFS as bridges, with a slightly different test.

## entry 452

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 453

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 454

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 455

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 456

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 457

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 458

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 459

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 460

Euler tour flattens a tree into an array for range-query LCA.

## entry 461

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 462

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 463

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 464

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 465

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 466

LIS via patience: each pile holds the smallest tail of length k.

## entry 467

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 468

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 469

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 470

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 471

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 472

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 473

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 474

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 475

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 476

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 477

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 478

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 479

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 480

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 481

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 482

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 483

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 484

Euler tour flattens a tree into an array for range-query LCA.

## entry 485

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 486

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 487

Stable sort matters when a secondary key was set in a prior pass.

## entry 488

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 489

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 490

Euler tour flattens a tree into an array for range-query LCA.

## entry 491

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 492

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 493

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 494

Monotonic stack pops while the new element violates the invariant.

## entry 495

Union-Find with path compression amortizes to near-O(1) per op.

## entry 496

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 497

State compression: bitmask + integer encodes a small subset cheaply.

## entry 498

Wavelet tree: range k-th element in O(log Σ) time.

## entry 499

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 500

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 501

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 502

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 503

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 504

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 505

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 506

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 507

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 508

Euler tour flattens a tree into an array for range-query LCA.

## entry 509

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 510

State compression: bitmask + integer encodes a small subset cheaply.

## entry 511

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 512

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 513

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 514

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 515

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 516

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 517

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 518

Monotonic stack pops while the new element violates the invariant.

## entry 519

Splay tree: every access splays to the root; amortized O(log n).

## entry 520

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 521

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

Splay tree: every access splays to the root; amortized O(log n).

## entry 523

Splay tree: every access splays to the root; amortized O(log n).

## entry 524

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 525

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 526

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 527

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 528

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 529

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 530

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 531

Articulation points: same DFS as bridges, with a slightly different test.

## entry 532

Walk both pointers from each end inward; advance the smaller side.

## entry 533

LIS via patience: each pile holds the smallest tail of length k.

## entry 534

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 535

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 536

StringBuilder: amortize allocation by doubling on grow.

## entry 537

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 538

Stable sort matters when a secondary key was set in a prior pass.

## entry 539

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 540

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 541

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 542

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 543

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 544

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 545

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 546

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 547

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 548

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 549

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 550

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 551

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 552

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 553

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 554

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 555

Heap when you only need top-k; full sort is wasted work.

## entry 556

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 557

Heap when you only need top-k; full sort is wasted work.

## entry 558

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 559

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 560

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 561

LIS via patience: each pile holds the smallest tail of length k.

## entry 562

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 563

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 564

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 565

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 566

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 567

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 568

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 569

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 570

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 571

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 572

Stable sort matters when a secondary key was set in a prior pass.

## entry 573

Euler tour flattens a tree into an array for range-query LCA.

## entry 574

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 575

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 576

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 577

State compression: bitmask + integer encodes a small subset cheaply.

## entry 578

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 579

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 580

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 581

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 582

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 583

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 584

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 585

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 586

Splay tree: every access splays to the root; amortized O(log n).

## entry 587

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 588

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 589

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 590

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 591

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 592

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 593

LIS via patience: each pile holds the smallest tail of length k.

## entry 594

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 595

Monotonic stack pops while the new element violates the invariant.

## entry 596

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 597

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 598

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 599

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 600

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 601

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 602

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 603

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 604

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 605

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 606

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 607

Euler tour flattens a tree into an array for range-query LCA.

## entry 608

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 609

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 610

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 611

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 612

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 613

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 614

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 615

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 616

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 617

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 618

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 619

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 620

LIS via patience: each pile holds the smallest tail of length k.

## entry 621

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 622

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 623

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 624

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 625

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 626

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 627

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 628

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 629

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 630

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 631

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 632

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 633

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 634

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 635

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 636

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 637

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 638

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 639

Heap when you only need top-k; full sort is wasted work.

## entry 640

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 641

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 642

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 643

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 644

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 645

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 646

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 647

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 648

Euler tour flattens a tree into an array for range-query LCA.

## entry 649

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 650

Monotonic stack pops while the new element violates the invariant.

## entry 651

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 652

Union-Find with path compression amortizes to near-O(1) per op.

## entry 653

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 654

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 655

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 656

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
