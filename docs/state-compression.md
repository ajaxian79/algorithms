# state-compression

## entry 1

Greedy by end-time picks the most non-overlapping intervals.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 16

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 31

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

Wavelet tree: range k-th element in O(log Σ) time.

## entry 33

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 34

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 35

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 40

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 44

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 45

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 51

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 52

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 57

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 61

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 62

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 67

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 69

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 74

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

Union-Find with path compression amortizes to near-O(1) per op.

## entry 76

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 77

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 78

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 86

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Euler tour flattens a tree into an array for range-query LCA.

## entry 91

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 92

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 93

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 95

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 102

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 103

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 105

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 106

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 109

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 110

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 111

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

LIS via patience: each pile holds the smallest tail of length k.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 115

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 116

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 117

StringBuilder: amortize allocation by doubling on grow.

## entry 118

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 119

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 120

Walk both pointers from each end inward; advance the smaller side.

## entry 121

LIS via patience: each pile holds the smallest tail of length k.

## entry 122

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 123

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 124

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 125

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 126

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 128

Greedy by end-time picks the most non-overlapping intervals.

## entry 129

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 131

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 132

Euler tour flattens a tree into an array for range-query LCA.

## entry 133

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 134

LIS via patience: each pile holds the smallest tail of length k.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 137

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 138

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 139

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 140

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 141

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 142

Monotonic stack pops while the new element violates the invariant.

## entry 143

Monotonic stack pops while the new element violates the invariant.

## entry 144

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 145

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 146

Union-Find with path compression amortizes to near-O(1) per op.

## entry 147

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 148

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

Monotonic stack pops while the new element violates the invariant.

## entry 150

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 151

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 152

LIS via patience: each pile holds the smallest tail of length k.

## entry 153

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 154

Articulation points: same DFS as bridges, with a slightly different test.

## entry 155

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 156

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 157

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 158

Walk both pointers from each end inward; advance the smaller side.

## entry 159

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 160

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 161

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 162

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 163

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 165

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

LIS via patience: each pile holds the smallest tail of length k.

## entry 167

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 168

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 169

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 170

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 171

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 172

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 173

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 175

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 179

Wavelet tree: range k-th element in O(log Σ) time.

## entry 180

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 181

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 182

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 183

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 184

StringBuilder: amortize allocation by doubling on grow.

## entry 185

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 186

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 187

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 188

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 189

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

LIS via patience: each pile holds the smallest tail of length k.

## entry 191

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 192

Union-Find with path compression amortizes to near-O(1) per op.

## entry 193

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Wavelet tree: range k-th element in O(log Σ) time.

## entry 196

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 197

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 198

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 199

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 200

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

Wavelet tree: range k-th element in O(log Σ) time.

## entry 202

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 203

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 204

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 205

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 206

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 207

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 208

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 209

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 210

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 212

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 213

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 214

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 215

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 216

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 217

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 218

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 219

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 220

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 221

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 222

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 223

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 224

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 225

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 226

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 227

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 228

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 229

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 230

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 231

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 232

Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 234

Wavelet tree: range k-th element in O(log Σ) time.

## entry 235

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 236

Splay tree: every access splays to the root; amortized O(log n).

## entry 237

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 238

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 239

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 240

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 241

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 242

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 243

Stable sort matters when a secondary key was set in a prior pass.

## entry 244

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 245

Euler tour flattens a tree into an array for range-query LCA.

## entry 246

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 247

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 248

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 249

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 250

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 251

Euler tour flattens a tree into an array for range-query LCA.

## entry 252

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 253

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 254

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 255

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 256

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 257

StringBuilder: amortize allocation by doubling on grow.

## entry 258

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 259

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 260

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 261

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 262

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 263

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 264

Stable sort matters when a secondary key was set in a prior pass.

## entry 265

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 266

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 267

Wavelet tree: range k-th element in O(log Σ) time.

## entry 268

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 269

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 270

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 271

Walk both pointers from each end inward; advance the smaller side.

## entry 272

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 273

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 274

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 275

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 276

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 277

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 278

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 279

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 280

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 281

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 282

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 283

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 284

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 285

Walk both pointers from each end inward; advance the smaller side.

## entry 286

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 287

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 288

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 289

Wavelet tree: range k-th element in O(log Σ) time.

## entry 290

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 291

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 292

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 293

Splay tree: every access splays to the root; amortized O(log n).

## entry 294

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 295

Walk both pointers from each end inward; advance the smaller side.

## entry 296

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 297

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 298

Walk both pointers from each end inward; advance the smaller side.

## entry 299

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 300

Monotonic stack pops while the new element violates the invariant.

## entry 301

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 302

StringBuilder: amortize allocation by doubling on grow.

## entry 303

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 304

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 305

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 306

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 307

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 308

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 309

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 310

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 311

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 312

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 313

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 314

Splay tree: every access splays to the root; amortized O(log n).

## entry 315

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 316

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 317

Stable sort matters when a secondary key was set in a prior pass.

## entry 318

Euler tour flattens a tree into an array for range-query LCA.

## entry 319

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 320

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 321

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 322

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 323

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 324

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 325

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 326

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 327

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 328

Wavelet tree: range k-th element in O(log Σ) time.

## entry 329

Stable sort matters when a secondary key was set in a prior pass.

## entry 330

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 331

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 332

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 333

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 334

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 335

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 336

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 337

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 338

Euler tour flattens a tree into an array for range-query LCA.

## entry 339

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 340

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 341

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 343

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 344

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 345

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 346

Walk both pointers from each end inward; advance the smaller side.

## entry 347

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 348

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 349

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 350

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 351

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 352

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 353

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 354

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 355

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 356

Monotonic stack pops while the new element violates the invariant.

## entry 357

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 358

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 359

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 360

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 361

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 362

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 364

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 366

Splay tree: every access splays to the root; amortized O(log n).

## entry 367

StringBuilder: amortize allocation by doubling on grow.

## entry 368

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 369

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 370

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 371

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 372

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 373

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 374

Stable sort matters when a secondary key was set in a prior pass.

## entry 375

Heap when you only need top-k; full sort is wasted work.

## entry 376

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 377

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 378

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 379

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 380

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 381

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 382

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 383

Heap when you only need top-k; full sort is wasted work.

## entry 384

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 385

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 386

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 387

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 388

Walk both pointers from each end inward; advance the smaller side.

## entry 389

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 390

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 391

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 392

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 393

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 394

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 395

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 396

Wavelet tree: range k-th element in O(log Σ) time.

## entry 397

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 398

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 399

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 400

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 401

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 402

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 403

Walk both pointers from each end inward; advance the smaller side.

## entry 404

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 405

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 406

Stable sort matters when a secondary key was set in a prior pass.

## entry 407

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 408

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 409

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 410

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 411

Monotonic stack pops while the new element violates the invariant.

## entry 412

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 413

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 414

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 415

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 416

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 417

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 418

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 419

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 420

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 421

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 422

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 423

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 424

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 425

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 426

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 427

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 428

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 429

StringBuilder: amortize allocation by doubling on grow.

## entry 430

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 431

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 432

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 433

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 434

State compression: bitmask + integer encodes a small subset cheaply.

## entry 435

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 436

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 437

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 438

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 439

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 441

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 442

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 443

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 444

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 445

Splay tree: every access splays to the root; amortized O(log n).

## entry 446

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 447

Articulation points: same DFS as bridges, with a slightly different test.

## entry 448

Union-Find with path compression amortizes to near-O(1) per op.

## entry 449

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 450

Wavelet tree: range k-th element in O(log Σ) time.

## entry 451

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 452

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 453

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 454

Wavelet tree: range k-th element in O(log Σ) time.

## entry 455

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 456

Splay tree: every access splays to the root; amortized O(log n).

## entry 457

Union-Find with path compression amortizes to near-O(1) per op.

## entry 458

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 459

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 460

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 461

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 462

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 463

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 464

State compression: bitmask + integer encodes a small subset cheaply.

## entry 465

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 466

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 467

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 468

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 469

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 470

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 471

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 472

Heap when you only need top-k; full sort is wasted work.

## entry 473

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 474

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 475

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 476

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 477

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 478

State compression: bitmask + integer encodes a small subset cheaply.

## entry 479

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 480

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 481

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 482

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 483

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 484

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 485

Wavelet tree: range k-th element in O(log Σ) time.

## entry 486

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 487

Stable sort matters when a secondary key was set in a prior pass.

## entry 488

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 489

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 490

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 491

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 492

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 493

Heap when you only need top-k; full sort is wasted work.

## entry 494

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 495

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 496

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 497

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 498

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 499

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 500

Articulation points: same DFS as bridges, with a slightly different test.

## entry 501

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 502

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 503

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 504

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 505

StringBuilder: amortize allocation by doubling on grow.

## entry 506

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 507

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 508

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 509

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 510

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 511

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 512

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 513

LIS via patience: each pile holds the smallest tail of length k.

## entry 514

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 515

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 516

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 517

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 518

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 519

Heap when you only need top-k; full sort is wasted work.

## entry 520

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 521

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 522

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 523

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 524

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 525

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 526

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 527

LIS via patience: each pile holds the smallest tail of length k.

## entry 528

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 529

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 530

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 531

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 532

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 533

Articulation points: same DFS as bridges, with a slightly different test.

## entry 534

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 535

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 536

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 537

Greedy by end-time picks the most non-overlapping intervals.

## entry 538

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 539

Articulation points: same DFS as bridges, with a slightly different test.

## entry 540

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 541

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 542

LIS via patience: each pile holds the smallest tail of length k.

## entry 543

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 544

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 545

LIS via patience: each pile holds the smallest tail of length k.

## entry 546

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 547

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 548

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 549

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 550

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 551

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 552

Euler tour flattens a tree into an array for range-query LCA.

## entry 553

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 554

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 555

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 556

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 557

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 558

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 559

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
