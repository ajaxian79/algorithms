# kosaraju

## entry 1

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Monotonic stack pops while the new element violates the invariant.

## entry 15

Stable sort matters when a secondary key was set in a prior pass.

## entry 16

LIS via patience: each pile holds the smallest tail of length k.

## entry 17

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 18

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Heap when you only need top-k; full sort is wasted work.

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

Euler tour flattens a tree into an array for range-query LCA.

## entry 24

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 34

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 35

Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 37

Monotonic stack pops while the new element violates the invariant.

## entry 38

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 41

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 44

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 45

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 46

State compression: bitmask + integer encodes a small subset cheaply.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

Stable sort matters when a secondary key was set in a prior pass.

## entry 50

Splay tree: every access splays to the root; amortized O(log n).

## entry 51

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 55

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 56

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

Monotonic stack pops while the new element violates the invariant.

## entry 59

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 61

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

StringBuilder: amortize allocation by doubling on grow.

## entry 65

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 66

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 71

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 74

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 75

Wavelet tree: range k-th element in O(log Σ) time.

## entry 76

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 79

LIS via patience: each pile holds the smallest tail of length k.

## entry 80

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 81

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 82

Greedy by end-time picks the most non-overlapping intervals.

## entry 83

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 84

Euler tour flattens a tree into an array for range-query LCA.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 89

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 90

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 91

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 92

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 93

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

Heap when you only need top-k; full sort is wasted work.

## entry 95

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 98

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 99

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 100

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 101

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 102

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 104

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 105

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

Euler tour flattens a tree into an array for range-query LCA.

## entry 107

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 108

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 109

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 110

Monotonic stack pops while the new element violates the invariant.

## entry 111

Union-Find with path compression amortizes to near-O(1) per op.

## entry 112

Heap when you only need top-k; full sort is wasted work.

## entry 113

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 114

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 115

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 116

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 117

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 118

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 119

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 120

Union-Find with path compression amortizes to near-O(1) per op.

## entry 121

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 122

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 123

Euler tour flattens a tree into an array for range-query LCA.

## entry 124

StringBuilder: amortize allocation by doubling on grow.

## entry 125

Union-Find with path compression amortizes to near-O(1) per op.

## entry 126

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 128

State compression: bitmask + integer encodes a small subset cheaply.

## entry 129

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 130

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 131

Walk both pointers from each end inward; advance the smaller side.

## entry 132

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 133

Monotonic stack pops while the new element violates the invariant.

## entry 134

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 135

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 136

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 137

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 138

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 139

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 140

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 141

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 142

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 143

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 144

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 145

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 146

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 147

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 148

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 150

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 151

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 152

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 153

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 154

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 155

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 156

Union-Find with path compression amortizes to near-O(1) per op.

## entry 157

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 158

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 159

Greedy by end-time picks the most non-overlapping intervals.

## entry 160

Articulation points: same DFS as bridges, with a slightly different test.

## entry 161

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 162

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 163

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 164

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 165

Articulation points: same DFS as bridges, with a slightly different test.

## entry 166

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 167

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 168

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 169

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 170

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 171

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 172

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 173

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 174

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 175

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 176

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

Greedy by end-time picks the most non-overlapping intervals.

## entry 178

Union-Find with path compression amortizes to near-O(1) per op.

## entry 179

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 180

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 181

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 182

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 183

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 184

Wavelet tree: range k-th element in O(log Σ) time.

## entry 185

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 186

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 187

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 188

Euler tour flattens a tree into an array for range-query LCA.

## entry 189

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 190

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 191

LIS via patience: each pile holds the smallest tail of length k.

## entry 192

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 193

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 194

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 195

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 196

Monotonic stack pops while the new element violates the invariant.

## entry 197

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 198

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 199

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 200

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 201

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 202

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 203

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

StringBuilder: amortize allocation by doubling on grow.

## entry 205

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 206

Union-Find with path compression amortizes to near-O(1) per op.

## entry 207

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 208

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 209

Monotonic stack pops while the new element violates the invariant.

## entry 210

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 211

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 212

StringBuilder: amortize allocation by doubling on grow.

## entry 213

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 214

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 215

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 216

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 217

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 218

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 219

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 220

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 221

State compression: bitmask + integer encodes a small subset cheaply.

## entry 222

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 223

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 224

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 225

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 226

Monotonic stack pops while the new element violates the invariant.

## entry 227

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 228

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 229

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 230

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 231

Heap when you only need top-k; full sort is wasted work.

## entry 232

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 233

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 234

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 235

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 236

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 237

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 238

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 239

Walk both pointers from each end inward; advance the smaller side.

## entry 240

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 241

Articulation points: same DFS as bridges, with a slightly different test.

## entry 242

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 243

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 244

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 245

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 246

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 247

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 248

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 249

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 250

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 251

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 252

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 253

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 255

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 256

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 257

Stable sort matters when a secondary key was set in a prior pass.

## entry 258

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 259

StringBuilder: amortize allocation by doubling on grow.

## entry 260

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 261

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 263

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 264

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 265

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 266

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 267

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 269

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 270

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 271

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 272

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 273

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 274

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 275

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 276

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 278

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 279

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 280

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 281

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 282

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 283

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 284

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 285

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 286

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 287

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 288

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 289

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 290

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 291

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 293

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 294

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 295

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 296

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 297

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 298

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 299

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 300

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 301

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 302

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 303

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 304

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 305

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 306

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 307

Union-Find with path compression amortizes to near-O(1) per op.

## entry 308

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 309

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 310

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 311

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 312

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 313

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 314

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 315

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 316

LIS via patience: each pile holds the smallest tail of length k.

## entry 317

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 318

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 319

Heap when you only need top-k; full sort is wasted work.

## entry 320

Union-Find with path compression amortizes to near-O(1) per op.

## entry 321

LIS via patience: each pile holds the smallest tail of length k.

## entry 322

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 323

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 324

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 325

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 326

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 327

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 328

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 329

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 330

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 331

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 332

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 333

Wavelet tree: range k-th element in O(log Σ) time.

## entry 334

Splay tree: every access splays to the root; amortized O(log n).

## entry 335

Articulation points: same DFS as bridges, with a slightly different test.

## entry 336

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 337

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 338

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 339

Wavelet tree: range k-th element in O(log Σ) time.

## entry 340

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 341

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 342

StringBuilder: amortize allocation by doubling on grow.

## entry 343

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 344

StringBuilder: amortize allocation by doubling on grow.

## entry 345

Monotonic stack pops while the new element violates the invariant.

## entry 346

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 347

Wavelet tree: range k-th element in O(log Σ) time.

## entry 348

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 349

Greedy by end-time picks the most non-overlapping intervals.
