# open-addressing

## entry 1

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 12

- StringBuilder: amortize allocation by doubling on grow.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 18

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 30

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 35

- Heap when you only need top-k; full sort is wasted work.

## entry 36

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Splay tree: every access splays to the root; amortized O(log n).

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 43

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 47

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 49

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 54

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 55

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 56

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 57

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 61

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 62

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 66

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

- Stable sort matters when a secondary key was set in a prior pass.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 72

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 73

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 74

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 75

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 76

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 82

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 83

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 85

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 86

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 87

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

- Splay tree: every access splays to the root; amortized O(log n).

## entry 89

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 90

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 92

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 93

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 101

- Stable sort matters when a secondary key was set in a prior pass.

## entry 102

- LIS via patience: each pile holds the smallest tail of length k.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- Monotonic stack pops while the new element violates the invariant.

## entry 106

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 108

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 109

- Euler tour flattens a tree into an array for range-query LCA.

## entry 110

- Heap when you only need top-k; full sort is wasted work.

## entry 111

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 116

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 117

- StringBuilder: amortize allocation by doubling on grow.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 120

- Heap when you only need top-k; full sort is wasted work.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 123

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 124

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 125

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 126

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 127

- Walk both pointers from each end inward; advance the smaller side.

## entry 128

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 129

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 130

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 133

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 134

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 135

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 137

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 138

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 139

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 141

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 142

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 143

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 144

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 145

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 146

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 147

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 148

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 149

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 150

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 151

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 152

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 153

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 154

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 155

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 156

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 157

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 158

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 159

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 161

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 162

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 163

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 164

- Monotonic stack pops while the new element violates the invariant.

## entry 165

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 167

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 168

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 169

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 170

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 171

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 172

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 173

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 174

- Greedy by end-time picks the most non-overlapping intervals.

## entry 175

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 176

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 177

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 178

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 179

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 181

- StringBuilder: amortize allocation by doubling on grow.

## entry 182

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 183

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 184

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 186

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 187

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 188

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 189

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 190

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 191

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 192

- Greedy by end-time picks the most non-overlapping intervals.

## entry 193

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 194

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 195

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 196

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 197

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 198

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 199

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 200

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 201

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 202

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 203

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 204

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 206

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 207

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 208

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 209

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 210

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 211

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 214

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 215

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 216

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 217

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 218

- Monotonic stack pops while the new element violates the invariant.

## entry 219

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 222

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 223

- Greedy by end-time picks the most non-overlapping intervals.

## entry 224

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 225

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 226

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 229

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 230

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 231

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 232

- Greedy by end-time picks the most non-overlapping intervals.

## entry 233

- Greedy by end-time picks the most non-overlapping intervals.

## entry 234

- LIS via patience: each pile holds the smallest tail of length k.

## entry 235

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 236

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 237

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 239

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 240

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 242

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 243

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 244

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 245

- Splay tree: every access splays to the root; amortized O(log n).

## entry 246

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 247

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 248

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 249

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 250

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 251

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 252

- StringBuilder: amortize allocation by doubling on grow.

## entry 253

- Splay tree: every access splays to the root; amortized O(log n).

## entry 254

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 255

- Splay tree: every access splays to the root; amortized O(log n).

## entry 256

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 257

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 258

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 259

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 260

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 261

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 262

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 263

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 264

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 265

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 266

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 267

- Greedy by end-time picks the most non-overlapping intervals.

## entry 268

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 269

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 270

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 271

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 272

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 273

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 274

- Heap when you only need top-k; full sort is wasted work.

## entry 275

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 276

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 277

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 278

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 279

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 280

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 281

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 283

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 284

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 285

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 286

- Splay tree: every access splays to the root; amortized O(log n).

## entry 287

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 288

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 289

- Splay tree: every access splays to the root; amortized O(log n).

## entry 290

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 291

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 292

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 293

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 294

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 295

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 296

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 297

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 298

- StringBuilder: amortize allocation by doubling on grow.

## entry 299

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 300

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 301

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 302

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 303

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 304

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 305

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 306

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 307

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 308

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 309

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 310

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 311

- Greedy by end-time picks the most non-overlapping intervals.

## entry 312

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 313

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 314

- Euler tour flattens a tree into an array for range-query LCA.

## entry 315

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 316

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 317

- Stable sort matters when a secondary key was set in a prior pass.

## entry 318

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 319

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 320

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 321

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 322

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 323

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 324

- Greedy by end-time picks the most non-overlapping intervals.

## entry 325

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 326

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 327

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 328

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 329

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 330

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 331

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 332

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 333

- Monotonic stack pops while the new element violates the invariant.

## entry 334

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 335

- LIS via patience: each pile holds the smallest tail of length k.

## entry 336

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 337

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 338

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 339

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 340

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 341

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 342

- Heap when you only need top-k; full sort is wasted work.

## entry 343

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 344

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 345

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 346

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 347

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 348

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 349

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 350

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 351

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 352

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 353

- Euler tour flattens a tree into an array for range-query LCA.

## entry 354

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 355

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 356

- Monotonic stack pops while the new element violates the invariant.

## entry 357

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 359

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 360

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 361

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 362

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 363

- Monotonic stack pops while the new element violates the invariant.

## entry 364

- Euler tour flattens a tree into an array for range-query LCA.

## entry 365

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 366

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 367

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 368

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 369

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 370

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 371

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 372

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 373

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 374

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 375

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 376

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 377

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 378

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 379

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 380

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 381

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 382

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 383

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 384

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 385

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 386

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 387

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 388

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 389

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 390

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 391

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 392

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 393

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 394

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 395

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 396

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 397

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 398

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 399

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 400

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 401

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 402

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 403

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 404

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 405

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 406

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 407

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 408

- LIS via patience: each pile holds the smallest tail of length k.

## entry 409

- Monotonic stack pops while the new element violates the invariant.

## entry 410

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 411

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 412

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 413

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 414

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 415

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 416

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 417

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 418

- Greedy by end-time picks the most non-overlapping intervals.

## entry 419

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 420

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 421

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 422

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 423

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 424

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 425

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 426

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 427

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 428

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 429

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 430

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 431

- Walk both pointers from each end inward; advance the smaller side.

## entry 432

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 433

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 434

- Greedy by end-time picks the most non-overlapping intervals.

## entry 435

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 436

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 437

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 438

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 439

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 440

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 441

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 442

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 443

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 445

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 446

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 447

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 448

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 449

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 450

- Heap when you only need top-k; full sort is wasted work.

## entry 451

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 452

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 453

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 454

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 455

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 456

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 457

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 458

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 459

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 460

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 461

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 462

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 463

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 464

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 465

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 466

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 467

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 468

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 469

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 470

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 471

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 472

- Heap when you only need top-k; full sort is wasted work.

## entry 473

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 474

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 475

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 476

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 477

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 478

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 479

- Stable sort matters when a secondary key was set in a prior pass.

## entry 480

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 481

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 482

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 483

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 484

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 485

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 486

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 487

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 488

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 489

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 490

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 491

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 492

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 493

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 494

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 495

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 496

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 497

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 498

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 499

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 500

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 501

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 502

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 503

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 504

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 505

- LIS via patience: each pile holds the smallest tail of length k.

## entry 506

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 507

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 508

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 509

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 510

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 511

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 512

- Splay tree: every access splays to the root; amortized O(log n).

## entry 513

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 514

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 515

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 516

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 517

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 518

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 519

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 520

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 521

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 522

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 523

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 524

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 525

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 526

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 527

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 528

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 529

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 530

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 531

- Euler tour flattens a tree into an array for range-query LCA.

## entry 532

- Monotonic stack pops while the new element violates the invariant.

## entry 533

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 534

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 535

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 536

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 537

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 538

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 539

- Monotonic stack pops while the new element violates the invariant.

## entry 540

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 541

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 542

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 543

- Euler tour flattens a tree into an array for range-query LCA.

## entry 544

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 545

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 546

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 547

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 548

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 549

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 550

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 551

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 552

- Heap when you only need top-k; full sort is wasted work.

## entry 553

- Walk both pointers from each end inward; advance the smaller side.

## entry 554

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
