# cuckoo

## entry 1

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 12

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 24

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 25

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 31

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 38

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 39

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 40

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 41

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

- Monotonic stack pops while the new element violates the invariant.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Greedy by end-time picks the most non-overlapping intervals.

## entry 50

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 53

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 58

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 59

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 62

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 63

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 64

- Greedy by end-time picks the most non-overlapping intervals.

## entry 65

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 68

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 69

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 70

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 71

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 72

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 73

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 75

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 80

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 81

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 84

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 85

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 86

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 88

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 89

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 90

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 91

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 93

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 94

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 101

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 102

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 103

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 106

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 107

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 108

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 109

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 110

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 112

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 114

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 115

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 116

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 117

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 118

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 119

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 120

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 121

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 122

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 124

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 125

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 126

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 128

- Euler tour flattens a tree into an array for range-query LCA.

## entry 129

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 130

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 131

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 132

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 134

- Euler tour flattens a tree into an array for range-query LCA.

## entry 135

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 136

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 137

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 138

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 139

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 140

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 141

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 142

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 143

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 144

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 145

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 146

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 147

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 148

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 150

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 151

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 152

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 153

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 154

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 155

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 156

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 158

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 159

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 160

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 161

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 162

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 163

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 164

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 167

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 169

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 170

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 171

- Stable sort matters when a secondary key was set in a prior pass.

## entry 172

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 173

- Euler tour flattens a tree into an array for range-query LCA.

## entry 174

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 175

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 176

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 177

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 178

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 179

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

- Splay tree: every access splays to the root; amortized O(log n).

## entry 183

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 184

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 185

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 186

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 187

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 188

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 189

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 190

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 191

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 192

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 193

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 194

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 195

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 198

- Greedy by end-time picks the most non-overlapping intervals.

## entry 199

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 200

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 201

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 202

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 203

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 204

- Monotonic stack pops while the new element violates the invariant.

## entry 205

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 206

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 207

- Monotonic stack pops while the new element violates the invariant.

## entry 208

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 209

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 210

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 211

- Walk both pointers from each end inward; advance the smaller side.

## entry 212

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 213

- Splay tree: every access splays to the root; amortized O(log n).

## entry 214

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 215

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 216

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 217

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 218

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 219

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 220

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 221

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 222

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 223

- Greedy by end-time picks the most non-overlapping intervals.

## entry 224

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 225

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 226

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 227

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 228

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 229

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 230

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 231

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 232

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 233

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 234

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 235

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 236

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 237

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 238

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 239

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 240

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 241

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 242

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 243

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 244

- Greedy by end-time picks the most non-overlapping intervals.

## entry 245

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 246

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 247

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 248

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 249

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 251

- Heap when you only need top-k; full sort is wasted work.

## entry 252

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 253

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 254

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 255

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 256

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 257

- Greedy by end-time picks the most non-overlapping intervals.

## entry 258

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 259

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 260

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 261

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 262

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 263

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 264

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 265

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 266

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 267

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 268

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 269

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 270

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 271

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 272

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 273

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 274

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 275

- Splay tree: every access splays to the root; amortized O(log n).

## entry 276

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 277

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 278

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 279

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 280

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 281

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 282

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 283

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 285

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 286

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 287

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 288

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 289

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 290

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 291

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 292

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 293

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 294

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 295

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 296

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 297

- Stable sort matters when a secondary key was set in a prior pass.

## entry 298

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 299

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 300

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 301

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 302

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 303

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 304

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 305

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 306

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 307

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 308

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 309

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 310

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 311

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

- StringBuilder: amortize allocation by doubling on grow.

## entry 313

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 314

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 315

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 316

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 317

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 318

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 319

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 320

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 321

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 322

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 323

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 324

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 325

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 326

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 327

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 328

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 329

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 330

- Walk both pointers from each end inward; advance the smaller side.

## entry 331

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 332

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 333

- Walk both pointers from each end inward; advance the smaller side.

## entry 334

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 335

- Heap when you only need top-k; full sort is wasted work.

## entry 336

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 337

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 338

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 339

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 340

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 341

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 342

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 343

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 344

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 345

- Walk both pointers from each end inward; advance the smaller side.

## entry 346

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 347

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 348

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 349

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 350

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 351

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 352

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 353

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 354

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 355

- Stable sort matters when a secondary key was set in a prior pass.

## entry 356

- Greedy by end-time picks the most non-overlapping intervals.

## entry 357

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 358

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 359

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 360

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 361

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 362

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 363

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 364

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 365

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 366

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 367

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 368

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 369

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 370

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 371

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 372

- Walk both pointers from each end inward; advance the smaller side.

## entry 373

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 374

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 375

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 376

- StringBuilder: amortize allocation by doubling on grow.

## entry 377

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 378

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 379

- Monotonic stack pops while the new element violates the invariant.

## entry 380

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 381

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 382

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 383

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 384

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 385

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 386

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 387

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 388

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 389

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 390

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 391

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 392

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 393

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 394

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 395

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 396

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 397

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 398

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 399

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 402

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 403

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 404

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 405

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 406

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 407

- Splay tree: every access splays to the root; amortized O(log n).

## entry 408

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 409

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 410

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 411

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 412

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 413

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 414

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 415

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 416

- Stable sort matters when a secondary key was set in a prior pass.

## entry 417

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 418

- Greedy by end-time picks the most non-overlapping intervals.

## entry 419

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 420

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 421

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 422

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 423

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 424

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 425

- Splay tree: every access splays to the root; amortized O(log n).

## entry 426

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 427

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 428

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 429

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 430

- Greedy by end-time picks the most non-overlapping intervals.

## entry 431

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 432

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 433

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 434

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 435

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 436

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 437

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 438

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 439

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 440

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 441

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 442

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 443

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 444

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 445

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 446

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 447

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 448

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 449

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 450

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 451

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 452

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 453

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 454

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 455

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 456

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 457

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 458

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 459

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 460

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 461

- LIS via patience: each pile holds the smallest tail of length k.

## entry 462

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 463

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 464

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 465

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 466

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 467

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 468

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 470

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 471

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 472

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 473

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 474

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 475

- StringBuilder: amortize allocation by doubling on grow.

## entry 476

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 477

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 478

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 479

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 480

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 481

- Stable sort matters when a secondary key was set in a prior pass.

## entry 482

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 483

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 484

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 485

- Walk both pointers from each end inward; advance the smaller side.

## entry 486

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 487

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 488

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 489

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 490

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 491

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 492

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 493

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 494

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 495

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 496

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 497

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 498

- StringBuilder: amortize allocation by doubling on grow.

## entry 499

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 500

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 501

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 502

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 503

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 504

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 505

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 506

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 507

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 508

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 509

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 510

- Splay tree: every access splays to the root; amortized O(log n).

## entry 511

- Walk both pointers from each end inward; advance the smaller side.

## entry 512

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 513

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 514

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 515

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 516

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 517

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 518

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 519

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 520

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 521

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 522

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 523

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 524

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 525

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 526

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 527

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 528

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 529

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 530

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 531

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 532

- StringBuilder: amortize allocation by doubling on grow.

## entry 533

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 534

- Stable sort matters when a secondary key was set in a prior pass.

## entry 535

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 536

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 537

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 538

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 539

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 540

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 541

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 542

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 543

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 544

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 545

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 546

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 547

- StringBuilder: amortize allocation by doubling on grow.

## entry 548

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 549

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 550

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 551

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 552

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 553

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 554

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 555

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 556

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 557

- Euler tour flattens a tree into an array for range-query LCA.

## entry 558

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 559

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 560

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 561

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 562

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 563

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 564

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 565

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 566

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 567

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 568

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 569

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 570

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 571

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 572

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 573

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 574

- LIS via patience: each pile holds the smallest tail of length k.

## entry 575

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 576

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 577

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 578

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 579

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 580

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 581

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 582

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 583

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 584

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 585

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 586

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 587

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 588

- Tabulation wins when iteration order is obvious and stack depth would blow up.
