# endianness

## entry 1

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

Heap when you only need top-k; full sort is wasted work.

## entry 6

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 7

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 16

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 29

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 30

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 31

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 32

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 34

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 36

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 38

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 39

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 40

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 41

Stable sort matters when a secondary key was set in a prior pass.

## entry 42

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 43

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 44

Monotonic stack pops while the new element violates the invariant.

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

Articulation points: same DFS as bridges, with a slightly different test.

## entry 47

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 48

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 49

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 51

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 52

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 53

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 59

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

LIS via patience: each pile holds the smallest tail of length k.

## entry 61

StringBuilder: amortize allocation by doubling on grow.

## entry 62

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 63

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 64

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 67

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 69

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 70

Articulation points: same DFS as bridges, with a slightly different test.

## entry 71

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 72

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 73

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 74

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 75

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 78

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 79

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 80

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 81

Union-Find with path compression amortizes to near-O(1) per op.

## entry 82

StringBuilder: amortize allocation by doubling on grow.

## entry 83

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 87

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

StringBuilder: amortize allocation by doubling on grow.

## entry 89

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 90

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

StringBuilder: amortize allocation by doubling on grow.

## entry 93

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 94

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 98

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

Walk both pointers from each end inward; advance the smaller side.

## entry 101

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 103

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 104

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 105

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

Splay tree: every access splays to the root; amortized O(log n).

## entry 107

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 108

Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 110

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 111

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 112

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 113

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 114

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 115

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 116

Euler tour flattens a tree into an array for range-query LCA.

## entry 117

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 118

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 119

Walk both pointers from each end inward; advance the smaller side.

## entry 120

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 121

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 122

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 125

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 126

Articulation points: same DFS as bridges, with a slightly different test.

## entry 127

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 128

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 129

Wavelet tree: range k-th element in O(log Σ) time.

## entry 130

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 131

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 132

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 133

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 134

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 135

LIS via patience: each pile holds the smallest tail of length k.

## entry 136

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 137

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 138

Splay tree: every access splays to the root; amortized O(log n).

## entry 139

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 140

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 141

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 142

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 143

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 144

Walk both pointers from each end inward; advance the smaller side.

## entry 145

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 146

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 147

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 148

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 149

Walk both pointers from each end inward; advance the smaller side.

## entry 150

Greedy by end-time picks the most non-overlapping intervals.

## entry 151

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 152

LIS via patience: each pile holds the smallest tail of length k.

## entry 153

LIS via patience: each pile holds the smallest tail of length k.

## entry 154

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 156

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 157

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 159

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 160

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 161

LIS via patience: each pile holds the smallest tail of length k.

## entry 162

Union-Find with path compression amortizes to near-O(1) per op.

## entry 163

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 164

Articulation points: same DFS as bridges, with a slightly different test.

## entry 165

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 166

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 167

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 169

Splay tree: every access splays to the root; amortized O(log n).

## entry 170

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 171

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 172

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 173

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 174

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 175

Splay tree: every access splays to the root; amortized O(log n).

## entry 176

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 177

LIS via patience: each pile holds the smallest tail of length k.

## entry 178

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 179

Union-Find with path compression amortizes to near-O(1) per op.

## entry 180

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 181

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 182

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 183

StringBuilder: amortize allocation by doubling on grow.

## entry 184

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 185

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 186

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 188

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 189

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 190

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 192

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 193

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 194

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 195

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 196

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 197

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 198

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 199

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 200

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 201

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 202

Walk both pointers from each end inward; advance the smaller side.

## entry 203

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 204

State compression: bitmask + integer encodes a small subset cheaply.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

State compression: bitmask + integer encodes a small subset cheaply.

## entry 207

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 208

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 209

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

Euler tour flattens a tree into an array for range-query LCA.

## entry 211

Walk both pointers from each end inward; advance the smaller side.

## entry 212

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 213

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 214

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 215

Heap when you only need top-k; full sort is wasted work.

## entry 216

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 217

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 218

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 219

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 220

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 222

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 223

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 224

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 225

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 226

Splay tree: every access splays to the root; amortized O(log n).

## entry 227

Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 229

State compression: bitmask + integer encodes a small subset cheaply.

## entry 230

Heap when you only need top-k; full sort is wasted work.

## entry 231

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 232

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 233

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 234

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 235

Articulation points: same DFS as bridges, with a slightly different test.

## entry 236

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 237

Heap when you only need top-k; full sort is wasted work.

## entry 238

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 239

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 240

Heap when you only need top-k; full sort is wasted work.

## entry 241

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 242

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 243

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 244

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 245

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 246

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 247

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 248

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 249

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 250

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 251

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 252

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 253

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 254

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 255

Splay tree: every access splays to the root; amortized O(log n).

## entry 256

Wavelet tree: range k-th element in O(log Σ) time.

## entry 257

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 259

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 260

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 261

LIS via patience: each pile holds the smallest tail of length k.

## entry 262

Stable sort matters when a secondary key was set in a prior pass.

## entry 263

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 264

Articulation points: same DFS as bridges, with a slightly different test.

## entry 265

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 266

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 267

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 268

StringBuilder: amortize allocation by doubling on grow.

## entry 269

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 270

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 271

Wavelet tree: range k-th element in O(log Σ) time.

## entry 272

Monotonic stack pops while the new element violates the invariant.

## entry 273

Heap when you only need top-k; full sort is wasted work.

## entry 274

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 275

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 276

Wavelet tree: range k-th element in O(log Σ) time.

## entry 277

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 278

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 279

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 280

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 282

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 283

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 284

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 286

Heap when you only need top-k; full sort is wasted work.

## entry 287

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 288

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 289

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 290

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 291

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 292

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 293

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 294

StringBuilder: amortize allocation by doubling on grow.

## entry 295

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 296

Wavelet tree: range k-th element in O(log Σ) time.

## entry 297

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 298

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 299

Splay tree: every access splays to the root; amortized O(log n).

## entry 300

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 301

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 302

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 303

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 304

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 305

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 306

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 307

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 308

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 309

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 310

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 311

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 312

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 313

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 314

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 315

Monotonic stack pops while the new element violates the invariant.

## entry 316

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 317

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 318

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 319

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 320

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 321

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 322

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 323

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 324

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 325

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 326

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 327

Stable sort matters when a secondary key was set in a prior pass.

## entry 328

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 329

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 330

Greedy by end-time picks the most non-overlapping intervals.

## entry 331

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 332

Euler tour flattens a tree into an array for range-query LCA.

## entry 333

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 334

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 335

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 336

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 337

Greedy by end-time picks the most non-overlapping intervals.

## entry 338

Wavelet tree: range k-th element in O(log Σ) time.

## entry 339

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 340

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 341

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 342

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 343

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 344

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 345

Splay tree: every access splays to the root; amortized O(log n).

## entry 346

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 347

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 348

Splay tree: every access splays to the root; amortized O(log n).

## entry 349

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 350

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 351

Stable sort matters when a secondary key was set in a prior pass.

## entry 352

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 354

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 355

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 356

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 357

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 358

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 359

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 360

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 361

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 362

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 363

Union-Find with path compression amortizes to near-O(1) per op.

## entry 364

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 365

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 366

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 367

Articulation points: same DFS as bridges, with a slightly different test.

## entry 368

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 369

Monotonic stack pops while the new element violates the invariant.

## entry 370

LIS via patience: each pile holds the smallest tail of length k.

## entry 371

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 372

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 373

StringBuilder: amortize allocation by doubling on grow.

## entry 374

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 375

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 376

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 377

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 378

Euler tour flattens a tree into an array for range-query LCA.

## entry 379

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 380

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 381

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 382

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 383

Splay tree: every access splays to the root; amortized O(log n).

## entry 384

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 385

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 386

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 387

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 388

Euler tour flattens a tree into an array for range-query LCA.

## entry 389

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 390

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 391

LIS via patience: each pile holds the smallest tail of length k.

## entry 392

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 393

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 394

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 395

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 396

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 397

StringBuilder: amortize allocation by doubling on grow.

## entry 398

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 399

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 400

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 401

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 402

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 403

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 404

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 405

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 406

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 407

State compression: bitmask + integer encodes a small subset cheaply.

## entry 408

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 409

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 410

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 411

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 412

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 413

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 414

Union-Find with path compression amortizes to near-O(1) per op.

## entry 415

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 416

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 417

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 418

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 419

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 420

StringBuilder: amortize allocation by doubling on grow.

## entry 421

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 422

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 423

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 424

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 425

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 426

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 427

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 428

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 430

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 431

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 432

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 433

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 434

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 435

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 436

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 437

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 438

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 439

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 441

Wavelet tree: range k-th element in O(log Σ) time.

## entry 442

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 443

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 444

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 445

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 446

StringBuilder: amortize allocation by doubling on grow.

## entry 447

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 448

Greedy by end-time picks the most non-overlapping intervals.

## entry 449

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 450

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 451

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 452

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 453

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 454

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 455

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 456

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 457

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 458

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 459

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 460

Splay tree: every access splays to the root; amortized O(log n).

## entry 461

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 462

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 463

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 464

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 465

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 466

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 467

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 468

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 469

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 470

Union-Find with path compression amortizes to near-O(1) per op.

## entry 471

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 472

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 473

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 474

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 475

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 476

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 477

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 478

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 479

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 480

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 481

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 482

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 483

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 484

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 485

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 486

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 487

Monotonic stack pops while the new element violates the invariant.

## entry 488

Heap when you only need top-k; full sort is wasted work.

## entry 489

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 490

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 491

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 492

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 493

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 494

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 495

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 496

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 497

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 498

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 499

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 500

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 501

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 502

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 503

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 504

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 505

Euler tour flattens a tree into an array for range-query LCA.

## entry 506

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 507

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 508

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 509

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 510

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 511

Splay tree: every access splays to the root; amortized O(log n).

## entry 512

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 513

Wavelet tree: range k-th element in O(log Σ) time.

## entry 514

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 515

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 516

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 517

StringBuilder: amortize allocation by doubling on grow.

## entry 518

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 519

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 520

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 521

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 522

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 523

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 524

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 525

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 526

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 527

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 528

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 529

Walk both pointers from each end inward; advance the smaller side.

## entry 530

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 531

Splay tree: every access splays to the root; amortized O(log n).

## entry 532

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
