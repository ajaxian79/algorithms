# kd-tree

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 16

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 17

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Splay tree: every access splays to the root; amortized O(log n).

## entry 21

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 25

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 27

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

- Heap when you only need top-k; full sort is wasted work.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 32

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 38

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Monotonic stack pops while the new element violates the invariant.

## entry 42

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 43

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 46

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 49

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 50

- Monotonic stack pops while the new element violates the invariant.

## entry 51

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 53

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 55

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 56

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 57

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 59

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 60

- Greedy by end-time picks the most non-overlapping intervals.

## entry 61

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 62

- Greedy by end-time picks the most non-overlapping intervals.

## entry 63

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 66

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 68

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 74

- LIS via patience: each pile holds the smallest tail of length k.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- Euler tour flattens a tree into an array for range-query LCA.

## entry 79

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 80

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 82

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 83

- Monotonic stack pops while the new element violates the invariant.

## entry 84

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 87

- Greedy by end-time picks the most non-overlapping intervals.

## entry 88

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 89

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 90

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 91

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 92

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 96

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 97

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 98

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 101

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

- Walk both pointers from each end inward; advance the smaller side.

## entry 105

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 106

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 112

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 113

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 114

- Walk both pointers from each end inward; advance the smaller side.

## entry 115

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 118

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 121

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 122

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 123

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 124

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 125

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 126

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 127

- Heap when you only need top-k; full sort is wasted work.

## entry 128

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 129

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 130

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 131

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 132

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 133

- StringBuilder: amortize allocation by doubling on grow.

## entry 134

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 137

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 138

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 139

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 140

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 141

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 142

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 143

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 144

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 145

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 146

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 148

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 149

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 151

- Monotonic stack pops while the new element violates the invariant.

## entry 152

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 153

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 154

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 156

- StringBuilder: amortize allocation by doubling on grow.

## entry 157

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 158

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 159

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 161

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 162

- LIS via patience: each pile holds the smallest tail of length k.

## entry 163

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 165

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 166

- Monotonic stack pops while the new element violates the invariant.

## entry 167

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 169

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 170

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 171

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 172

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 173

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 175

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 176

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 177

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 178

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 179

- Splay tree: every access splays to the root; amortized O(log n).

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 182

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 183

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 184

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 186

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 187

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 188

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 189

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 190

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 191

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 192

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 193

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 195

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 196

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 197

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 198

- Monotonic stack pops while the new element violates the invariant.

## entry 199

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 200

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 201

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 202

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 203

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 204

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 205

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 206

- Heap when you only need top-k; full sort is wasted work.

## entry 207

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 208

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 209

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 210

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 212

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 213

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 214

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 215

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 216

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 217

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 218

- Stable sort matters when a secondary key was set in a prior pass.

## entry 219

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 220

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 221

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 222

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 223

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 224

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 225

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 226

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 227

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 228

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 229

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 230

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 231

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 232

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 233

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 234

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 235

- StringBuilder: amortize allocation by doubling on grow.

## entry 236

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 237

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 239

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 240

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 241

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 242

- Stable sort matters when a secondary key was set in a prior pass.

## entry 243

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 244

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 245

- Splay tree: every access splays to the root; amortized O(log n).

## entry 246

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 247

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 248

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 249

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 250

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 251

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 252

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 253

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 254

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 255

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 256

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 257

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 258

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 259

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 260

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 261

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 262

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 263

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 264

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 265

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 266

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 267

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 268

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 269

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 270

- Splay tree: every access splays to the root; amortized O(log n).

## entry 271

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 272

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 273

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 274

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 275

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 276

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 277

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 278

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 279

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 280

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 281

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 282

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 283

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 284

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 285

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 286

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 287

- StringBuilder: amortize allocation by doubling on grow.

## entry 288

- Stable sort matters when a secondary key was set in a prior pass.

## entry 289

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 290

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 291

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 292

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 293

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 294

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 295

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 296

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 297

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 298

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 299

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 300

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 301

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 302

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 303

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 304

- Heap when you only need top-k; full sort is wasted work.

## entry 305

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 307

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 308

- StringBuilder: amortize allocation by doubling on grow.

## entry 309

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 310

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 311

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 312

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 313

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 314

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 315

- Walk both pointers from each end inward; advance the smaller side.

## entry 316

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 317

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 318

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 319

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 320

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 321

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 322

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 323

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 324

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 325

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 326

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 327

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 328

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 329

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 330

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 331

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 332

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 333

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 334

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 335

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 336

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 337

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 338

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 339

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 340

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 341

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 342

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 343

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 344

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 345

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 346

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 347

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 348

- Heap when you only need top-k; full sort is wasted work.

## entry 349

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 350

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 351

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 352

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 353

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 354

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 355

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 357

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 358

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 359

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 360

- Euler tour flattens a tree into an array for range-query LCA.

## entry 361

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 362

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 363

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 364

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 365

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 366

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 367

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 368

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 369

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 370

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 371

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 372

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 373

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 374

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 375

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 376

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 377

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 378

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 379

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 380

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 381

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 382

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 383

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 384

- Greedy by end-time picks the most non-overlapping intervals.

## entry 385

- Heap when you only need top-k; full sort is wasted work.

## entry 386

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 387

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 388

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 389

- Stable sort matters when a secondary key was set in a prior pass.

## entry 390

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 391

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 392

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 393

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 394

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 395

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 396

- Greedy by end-time picks the most non-overlapping intervals.

## entry 397

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 398

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 399

- Walk both pointers from each end inward; advance the smaller side.

## entry 400

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 401

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 402

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 403

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 404

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 405

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 406

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 407

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 408

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 409

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 410

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 411

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 412

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 413

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 414

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 415

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 416

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 417

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 418

- Unbounded knapsack: capacity inner ascending allows item reuse.
