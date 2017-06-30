# kd-tree

## entry 1

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 15

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

Walk both pointers from each end inward; advance the smaller side.

## entry 18

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 19

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 26

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 27

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

Euler tour flattens a tree into an array for range-query LCA.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

Articulation points: same DFS as bridges, with a slightly different test.

## entry 34

Monotonic stack pops while the new element violates the invariant.

## entry 35

State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

Greedy by end-time picks the most non-overlapping intervals.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 40

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 43

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 46

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 47

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 54

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 55

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 58

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 59

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 60

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 61

Walk both pointers from each end inward; advance the smaller side.

## entry 62

State compression: bitmask + integer encodes a small subset cheaply.

## entry 63

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 65

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 66

Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 72

StringBuilder: amortize allocation by doubling on grow.

## entry 73

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 74

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 76

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 78

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 79

Greedy by end-time picks the most non-overlapping intervals.

## entry 80

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 81

Greedy by end-time picks the most non-overlapping intervals.

## entry 82

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 86

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 87

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 88

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 89

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 90

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Wavelet tree: range k-th element in O(log Σ) time.

## entry 93

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 94

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 95

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 96

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 97

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 98

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 100

Greedy by end-time picks the most non-overlapping intervals.

## entry 101

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 103

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 106

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 109

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 110

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 111

Splay tree: every access splays to the root; amortized O(log n).

## entry 112

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 113

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 114

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 115

Greedy by end-time picks the most non-overlapping intervals.

## entry 116

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 117

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 119

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 121

Greedy by end-time picks the most non-overlapping intervals.

## entry 122

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 123

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 124

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 125

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 126

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 129

Walk both pointers from each end inward; advance the smaller side.

## entry 130

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 131

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 133

StringBuilder: amortize allocation by doubling on grow.

## entry 134

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 135

Union-Find with path compression amortizes to near-O(1) per op.

## entry 136

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 137

Greedy by end-time picks the most non-overlapping intervals.

## entry 138

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 139

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 140

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 141

Union-Find with path compression amortizes to near-O(1) per op.

## entry 142

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 143

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 144

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).

## entry 146

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 147

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 148

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 149

Articulation points: same DFS as bridges, with a slightly different test.

## entry 150

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 151

Heap when you only need top-k; full sort is wasted work.

## entry 152

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 153

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 154

Heap when you only need top-k; full sort is wasted work.

## entry 155

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 156

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 157

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 158

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

State compression: bitmask + integer encodes a small subset cheaply.

## entry 161

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 162

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 163

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 164

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 165

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 166

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 168

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 169

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 170

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 171

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 172

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 173

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 174

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 175

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 176

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 177

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 178

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 179

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 180

Walk both pointers from each end inward; advance the smaller side.

## entry 181

Euler tour flattens a tree into an array for range-query LCA.

## entry 182

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 184

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 185

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 186

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 187

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 188

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 189

Euler tour flattens a tree into an array for range-query LCA.

## entry 190

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 191

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 192

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 193

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 194

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 195

Articulation points: same DFS as bridges, with a slightly different test.

## entry 196

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 197

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 198

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 199

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 200

State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 202

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 203

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 204

Stable sort matters when a secondary key was set in a prior pass.

## entry 205

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 206

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 207

Union-Find with path compression amortizes to near-O(1) per op.

## entry 208

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 209

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

Heap when you only need top-k; full sort is wasted work.

## entry 211

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 212

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 213

Wavelet tree: range k-th element in O(log Σ) time.

## entry 214

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 215

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 216

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 217

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 218

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 219

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 220

Greedy by end-time picks the most non-overlapping intervals.

## entry 221

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 222

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 223

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 224

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 225

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 226

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 227

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 228

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 229

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 230

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 231

Euler tour flattens a tree into an array for range-query LCA.

## entry 232

Wavelet tree: range k-th element in O(log Σ) time.

## entry 233

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 234

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 235

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 236

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 237

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 238

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 239

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 240

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 241

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 242

LIS via patience: each pile holds the smallest tail of length k.

## entry 243

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 244

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 245

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 246

Euler tour flattens a tree into an array for range-query LCA.

## entry 247

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 248

State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

LIS via patience: each pile holds the smallest tail of length k.

## entry 250

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 251

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 252

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 253

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 254

Heap when you only need top-k; full sort is wasted work.

## entry 255

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 256

Monotonic stack pops while the new element violates the invariant.

## entry 257

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 258

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 259

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 260

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 261

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 262

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 263

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 264

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 265

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 266

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 267

Union-Find with path compression amortizes to near-O(1) per op.

## entry 268

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 269

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 270

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 271

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 272

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 273

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 274

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 275

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 276

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 277

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 278

Heap when you only need top-k; full sort is wasted work.

## entry 279

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 280

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 281

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 282

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 283

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 284

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 285

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 286

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 287

Monotonic stack pops while the new element violates the invariant.

## entry 288

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 289

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 290

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 291

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 292

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 293

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 294

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 295

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 296

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 297

Heap when you only need top-k; full sort is wasted work.

## entry 298

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 299

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 300

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 301

Monotonic stack pops while the new element violates the invariant.

## entry 302

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 304

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 305

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 306

LIS via patience: each pile holds the smallest tail of length k.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 309

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 310

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 311

Stable sort matters when a secondary key was set in a prior pass.

## entry 312

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 313

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 314

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 315

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 316

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 317

Union-Find with path compression amortizes to near-O(1) per op.

## entry 318

LIS via patience: each pile holds the smallest tail of length k.

## entry 319

StringBuilder: amortize allocation by doubling on grow.

## entry 320

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 321

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 322

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 323

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 324

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 325

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 326

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 327

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 328

Articulation points: same DFS as bridges, with a slightly different test.

## entry 329

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 330

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 331

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 332

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 333

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 334

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 335

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 336

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 337

Heap when you only need top-k; full sort is wasted work.

## entry 338

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 339

Stable sort matters when a secondary key was set in a prior pass.

## entry 340

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 341

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 342

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 343

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 344

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 345

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 346

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 347

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 348

Union-Find with path compression amortizes to near-O(1) per op.

## entry 349

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 351

Euler tour flattens a tree into an array for range-query LCA.

## entry 352

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 354

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 355

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

Monotonic stack pops while the new element violates the invariant.

## entry 357

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 358

State compression: bitmask + integer encodes a small subset cheaply.

## entry 359

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 360

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 361

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 362

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 363

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 364

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 365

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 366

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 367

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 368

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 369

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 370

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 371

Monotonic stack pops while the new element violates the invariant.

## entry 372

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 373

Splay tree: every access splays to the root; amortized O(log n).

## entry 374

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 375

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 376

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 377

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 378

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 379

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 380

State compression: bitmask + integer encodes a small subset cheaply.

## entry 381

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 382

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 383

Splay tree: every access splays to the root; amortized O(log n).

## entry 384

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 385

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 386

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 387

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 388

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 389

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 390

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 391

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 392

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 393

Stable sort matters when a secondary key was set in a prior pass.

## entry 394

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 395

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 396

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 397

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 398

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 399

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 400

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 401

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 402

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 403

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 404

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 405

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 406

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 407

StringBuilder: amortize allocation by doubling on grow.

## entry 408

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 409

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 410

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 411

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 412

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 413

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 414

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 415

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 416

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 417

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
