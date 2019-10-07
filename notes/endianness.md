# endianness

## entry 1

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 6

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 8

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 16

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Greedy by end-time picks the most non-overlapping intervals.

## entry 22

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

- Stable sort matters when a secondary key was set in a prior pass.

## entry 29

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 30

- Euler tour flattens a tree into an array for range-query LCA.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 34

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 35

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 38

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 39

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 43

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 44

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

- LIS via patience: each pile holds the smallest tail of length k.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 48

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

- Splay tree: every access splays to the root; amortized O(log n).

## entry 51

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 52

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

- Monotonic stack pops while the new element violates the invariant.

## entry 57

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 61

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 62

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 66

- LIS via patience: each pile holds the smallest tail of length k.

## entry 67

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 68

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- LIS via patience: each pile holds the smallest tail of length k.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- Walk both pointers from each end inward; advance the smaller side.

## entry 74

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 78

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 79

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 80

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 81

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 82

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 83

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 86

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 88

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 90

- Greedy by end-time picks the most non-overlapping intervals.

## entry 91

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 92

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 95

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 97

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 98

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 99

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 100

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 101

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 102

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 103

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 104

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 105

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 106

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 110

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 111

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 112

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 113

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 114

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 115

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 116

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

- StringBuilder: amortize allocation by doubling on grow.

## entry 118

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 119

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 120

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 121

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 122

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 123

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 124

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 125

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 126

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 127

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 128

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 129

- Splay tree: every access splays to the root; amortized O(log n).

## entry 130

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 131

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 132

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 133

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 134

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 135

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 136

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 137

- Splay tree: every access splays to the root; amortized O(log n).

## entry 138

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 140

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 141

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 142

- Euler tour flattens a tree into an array for range-query LCA.

## entry 143

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 144

- Euler tour flattens a tree into an array for range-query LCA.

## entry 145

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 146

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 147

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 148

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 149

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 150

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 151

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 152

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 153

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 154

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 155

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 158

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 159

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 160

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 161

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 163

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 164

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 166

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 167

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 168

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 169

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 170

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 171

- Monotonic stack pops while the new element violates the invariant.

## entry 172

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 173

- Walk both pointers from each end inward; advance the smaller side.

## entry 174

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 175

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 177

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 178

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 179

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 180

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 181

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 182

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 183

- Walk both pointers from each end inward; advance the smaller side.

## entry 184

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 185

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 186

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

- Splay tree: every access splays to the root; amortized O(log n).

## entry 188

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 189

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 190

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 191

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 192

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 193

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 194

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 195

- Monotonic stack pops while the new element violates the invariant.

## entry 196

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 197

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 198

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 199

- Greedy by end-time picks the most non-overlapping intervals.

## entry 200

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 201

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 203

- Splay tree: every access splays to the root; amortized O(log n).

## entry 204

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 205

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 206

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 207

- Walk both pointers from each end inward; advance the smaller side.

## entry 208

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 209

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 210

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 211

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 212

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 213

- Greedy by end-time picks the most non-overlapping intervals.

## entry 214

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 215

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 216

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 217

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 218

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 219

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 220

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 221

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 222

- Greedy by end-time picks the most non-overlapping intervals.

## entry 223

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 224

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 225

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 226

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 227

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 228

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 229

- Heap when you only need top-k; full sort is wasted work.

## entry 230

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 231

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 232

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 233

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 234

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 235

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 236

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 237

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 238

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 239

- Walk both pointers from each end inward; advance the smaller side.

## entry 240

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 241

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 242

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 243

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 244

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 245

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 246

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 247

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 248

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 249

- LIS via patience: each pile holds the smallest tail of length k.

## entry 250

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 251

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 252

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 253

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 255

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 256

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 257

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 258

- StringBuilder: amortize allocation by doubling on grow.

## entry 259

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 260

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 263

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 264

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 265

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 266

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 267

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 268

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 269

- StringBuilder: amortize allocation by doubling on grow.

## entry 270

- Splay tree: every access splays to the root; amortized O(log n).

## entry 271

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 272

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 273

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 274

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 275

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 276

- Euler tour flattens a tree into an array for range-query LCA.

## entry 277

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 278

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 279

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 280

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 281

- Euler tour flattens a tree into an array for range-query LCA.

## entry 282

- StringBuilder: amortize allocation by doubling on grow.

## entry 283

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 284

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 285

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 286

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 287

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 289

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 290

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 291

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 292

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 293

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 294

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 295

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 296

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 297

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 298

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 299

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 300

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 301

- Splay tree: every access splays to the root; amortized O(log n).

## entry 302

- Heap when you only need top-k; full sort is wasted work.

## entry 303

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 304

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 305

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 306

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 307

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 308

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 309

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 310

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 311

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 312

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 313

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 314

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 315

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 316

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 317

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 318

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 319

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 320

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 321

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 322

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 323

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 324

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 325

- LIS via patience: each pile holds the smallest tail of length k.

## entry 326

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 327

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 328

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 329

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 330

- Heap when you only need top-k; full sort is wasted work.

## entry 331

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 332

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 333

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 334

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
