# string-builder

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 7

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 23

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 24

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 33

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 34

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 37

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 38

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 41

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 42

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 43

- LIS via patience: each pile holds the smallest tail of length k.

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 49

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 51

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 52

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 55

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 59

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 62

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 63

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 65

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 71

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 72

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 73

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 74

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 75

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 76

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 77

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 79

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 82

- Splay tree: every access splays to the root; amortized O(log n).

## entry 83

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 84

- Walk both pointers from each end inward; advance the smaller side.

## entry 85

- Heap when you only need top-k; full sort is wasted work.

## entry 86

- StringBuilder: amortize allocation by doubling on grow.

## entry 87

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 88

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 89

- Monotonic stack pops while the new element violates the invariant.

## entry 90

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 92

- LIS via patience: each pile holds the smallest tail of length k.

## entry 93

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

- LIS via patience: each pile holds the smallest tail of length k.

## entry 95

- Euler tour flattens a tree into an array for range-query LCA.

## entry 96

- LIS via patience: each pile holds the smallest tail of length k.

## entry 97

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 100

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 101

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 102

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 103

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 104

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 105

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 106

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 107

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 109

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 110

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 111

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 113

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 114

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 115

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 116

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 117

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 118

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 119

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 120

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 121

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 122

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 123

- Monotonic stack pops while the new element violates the invariant.

## entry 124

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 125

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 126

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 127

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 128

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 129

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 130

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 131

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 132

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 133

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 134

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 135

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 136

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 138

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 139

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 140

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 141

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 142

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 143

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 144

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 145

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 146

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 147

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 148

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 149

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 150

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 151

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 152

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 153

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 154

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 155

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 156

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 157

- Stable sort matters when a secondary key was set in a prior pass.

## entry 158

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 159

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 160

- StringBuilder: amortize allocation by doubling on grow.

## entry 161

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 162

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 163

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 164

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 165

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 166

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 167

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 168

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 169

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 170

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 171

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 172

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 173

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 174

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 175

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 176

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 177

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 178

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 179

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 182

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 183

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 184

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 185

- Walk both pointers from each end inward; advance the smaller side.

## entry 186

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 187

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 188

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 189

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 190

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 191

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 192

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 193

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 194

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 195

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 198

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 199

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 200

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 203

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 204

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 205

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 206

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 207

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 208

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 209

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 210

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 211

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 214

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 215

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 216

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 217

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 218

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 219

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 220

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 221

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 222

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 223

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 224

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 225

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 226

- Stable sort matters when a secondary key was set in a prior pass.

## entry 227

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 228

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 229

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 230

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 231

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 232

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 233

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 234

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 235

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 236

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 237

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 238

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 239

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 240

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 241

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 242

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 243

- Greedy by end-time picks the most non-overlapping intervals.

## entry 244

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 245

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 246

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 247

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 248

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 249

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 250

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 251

- Euler tour flattens a tree into an array for range-query LCA.

## entry 252

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 253

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 254

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 255

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 256

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 257

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 258

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 259

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 260

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 261

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 262

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 263

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 264

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 265

- Monotonic stack pops while the new element violates the invariant.

## entry 266

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 267

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 268

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 269

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 270

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 271

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 272

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 273

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 274

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 275

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 276

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 277

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 278

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 279

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 280

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 281

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 282

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 283

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 284

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 285

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 286

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 287

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 288

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 289

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 290

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 291

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 292

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 293

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 294

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 295

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 296

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 297

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 298

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 299

- Stable sort matters when a secondary key was set in a prior pass.

## entry 300

- Stable sort matters when a secondary key was set in a prior pass.

## entry 301

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 302

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 303

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 304

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 305

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 306

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 307

- Stable sort matters when a secondary key was set in a prior pass.

## entry 308

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 309

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 310

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 311

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 312

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 313

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 314

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 315

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 316

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 317

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 318

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 319

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 320

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 321

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 322

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 323

- Heap when you only need top-k; full sort is wasted work.

## entry 324

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 325

- StringBuilder: amortize allocation by doubling on grow.

## entry 326

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 327

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 328

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 329

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 330

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 331

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 332

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 333

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 334

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 336

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 337

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 338

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 339

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 340

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 341

- Stable sort matters when a secondary key was set in a prior pass.

## entry 342

- Heap when you only need top-k; full sort is wasted work.

## entry 343

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 344

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 345

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 346

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 347

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 348

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 349

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 350

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 351

- Splay tree: every access splays to the root; amortized O(log n).

## entry 352

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 353

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 354

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 355

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 356

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 357

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 358

- Euler tour flattens a tree into an array for range-query LCA.

## entry 359

- Stable sort matters when a secondary key was set in a prior pass.

## entry 360

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 361

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 362

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 363

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 364

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 365

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 366

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 367

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 368

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 369

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 370

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 371

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 372

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 373

- Euler tour flattens a tree into an array for range-query LCA.

## entry 374

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 375

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 376

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 377

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 378

- Splay tree: every access splays to the root; amortized O(log n).

## entry 379

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 380

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 381

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 382

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 383

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 384

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 385

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 386

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 387

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 388

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 389

- Stable sort matters when a secondary key was set in a prior pass.

## entry 390

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 391

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 392

- Greedy by end-time picks the most non-overlapping intervals.

## entry 393

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 394

- Greedy by end-time picks the most non-overlapping intervals.

## entry 395

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 396

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 397

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 398

- Stable sort matters when a secondary key was set in a prior pass.

## entry 399

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 400

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 401

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 402

- Monotonic stack pops while the new element violates the invariant.

## entry 403

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 404

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 405

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 406

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 407

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 408

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 409

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 410

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 411

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 412

- Splay tree: every access splays to the root; amortized O(log n).

## entry 413

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 414

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 415

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 416

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 417

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 418

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 419

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 420

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 421

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 422

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 423

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 424

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 425

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 426

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 427

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 428

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 429

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 430

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 431

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 432

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 433

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 434

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 435

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 436

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 437

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 438

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 439

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 440

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 441

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 442

- Heap when you only need top-k; full sort is wasted work.

## entry 443

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 444

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 445

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 446

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 447

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 448

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 449

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 450

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 451

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 452

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 453

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 454

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 455

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 456

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 457

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 458

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 459

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 460

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 461

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 462

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 463

- StringBuilder: amortize allocation by doubling on grow.

## entry 464

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 465

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 466

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 467

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 468

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 469

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 470

- Splay tree: every access splays to the root; amortized O(log n).

## entry 471

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 472

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 473

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 475

- Monotonic stack pops while the new element violates the invariant.

## entry 476

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 477

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 478

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 479

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 480

- StringBuilder: amortize allocation by doubling on grow.

## entry 481

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 482

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 483

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 484

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 485

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 486

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 487

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 488

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 489

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 490

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 491

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 492

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 493

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 494

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 495

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 496

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 497

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 498

- LIS via patience: each pile holds the smallest tail of length k.

## entry 499

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 500

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 501

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 502

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 503

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 504

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 505

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 506

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 507

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 508

- Euler tour flattens a tree into an array for range-query LCA.

## entry 509

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 510

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 511

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 512

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 513

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 514

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 515

- Splay tree: every access splays to the root; amortized O(log n).

## entry 516

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 517

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 518

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 519

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 520

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 521

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 522

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 523

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 524

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 525

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 526

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 527

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 528

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 529

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 530

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 531

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 532

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 533

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 534

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 535

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 536

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 537

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 538

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 539

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 540

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 541

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 542

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 543

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 544

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 545

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 546

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 547

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 548

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 549

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 550

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 551

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 552

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 553

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 554

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 555

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 556

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 557

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 558

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 559

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 560

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 561

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 562

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 563

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 564

- LIS via patience: each pile holds the smallest tail of length k.

## entry 565

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 566

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 567

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 568

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 569

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 570

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 571

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 572

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 573

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 574

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 575

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 576

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 577

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 578

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 579

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 580

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 581

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 582

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 583

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 584

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 585

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 586

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 587

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 588

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 589

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 591

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 592

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 593

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 594

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 595

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 596

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 597

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 598

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 599

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 600

- Monotonic stack pops while the new element violates the invariant.

## entry 601

- LIS via patience: each pile holds the smallest tail of length k.

## entry 602

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 603

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 604

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 605

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 606

- Euler tour flattens a tree into an array for range-query LCA.

## entry 607

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 608

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 609

- Splay tree: every access splays to the root; amortized O(log n).

## entry 610

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 611

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 612

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 613

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 614

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 615

- Stable sort matters when a secondary key was set in a prior pass.

## entry 616

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 617

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 618

- Euler tour flattens a tree into an array for range-query LCA.

## entry 619

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 620

- Stable sort matters when a secondary key was set in a prior pass.

## entry 621

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 622

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 623

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 624

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 625

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 626

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 627

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 628

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 629

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 630

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 631

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 632

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 633

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 634

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 635

- Stable sort matters when a secondary key was set in a prior pass.

## entry 636

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 637

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 638

- ASCII rules are a strict subset of UTF-8; no special handling needed.
