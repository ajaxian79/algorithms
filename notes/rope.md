# rope

## entry 1

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 13

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

- StringBuilder: amortize allocation by doubling on grow.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 20

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 32

- Heap when you only need top-k; full sort is wasted work.

## entry 33

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 34

- Euler tour flattens a tree into an array for range-query LCA.

## entry 35

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 36

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 41

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 44

- StringBuilder: amortize allocation by doubling on grow.

## entry 45

- Splay tree: every access splays to the root; amortized O(log n).

## entry 46

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 49

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- StringBuilder: amortize allocation by doubling on grow.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 56

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 64

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Greedy by end-time picks the most non-overlapping intervals.

## entry 67

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 68

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 71

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 72

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 73

- Monotonic stack pops while the new element violates the invariant.

## entry 74

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 75

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 88

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 89

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 92

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 93

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 94

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 95

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 96

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 98

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 99

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 102

- Heap when you only need top-k; full sort is wasted work.

## entry 103

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 104

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 105

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 106

- LIS via patience: each pile holds the smallest tail of length k.

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 109

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 110

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 111

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 113

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 114

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 116

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 119

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 120

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 121

- Walk both pointers from each end inward; advance the smaller side.

## entry 122

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 123

- Euler tour flattens a tree into an array for range-query LCA.

## entry 124

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 125

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 126

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 127

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 128

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 129

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 130

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 131

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 132

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 133

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 134

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 135

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 138

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 139

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 140

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 141

- Splay tree: every access splays to the root; amortized O(log n).

## entry 142

- LIS via patience: each pile holds the smallest tail of length k.

## entry 143

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 144

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 145

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 146

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 147

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 148

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 149

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 150

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 151

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 152

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 153

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 154

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 155

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 156

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 157

- Euler tour flattens a tree into an array for range-query LCA.

## entry 158

- Greedy by end-time picks the most non-overlapping intervals.

## entry 159

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 160

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 161

- Greedy by end-time picks the most non-overlapping intervals.

## entry 162

- Walk both pointers from each end inward; advance the smaller side.

## entry 163

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 164

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 165

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 166

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 167

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 168

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 169

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 170

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 171

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 173

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 174

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 175

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 176

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 178

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 179

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 180

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 181

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 183

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 184

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 185

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 186

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 187

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 188

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 189

- LIS via patience: each pile holds the smallest tail of length k.

## entry 190

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 191

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 194

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 195

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 196

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 197

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 198

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 199

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 200

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 201

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 202

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 203

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 205

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 206

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 207

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 208

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 210

- Greedy by end-time picks the most non-overlapping intervals.

## entry 211

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 212

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 213

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 214

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 215

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 216

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 217

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 220

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 221

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 222

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 223

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 224

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 225

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 226

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 227

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 229

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 230

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 231

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 232

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 233

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 234

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 235

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 236

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 237

- Euler tour flattens a tree into an array for range-query LCA.

## entry 238

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 239

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 240

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 241

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 242

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 243

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 244

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 245

- Greedy by end-time picks the most non-overlapping intervals.

## entry 246

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 247

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 248

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 249

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 250

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 251

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 252

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 253

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 254

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 255

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 257

- Walk both pointers from each end inward; advance the smaller side.

## entry 258

- StringBuilder: amortize allocation by doubling on grow.

## entry 259

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 260

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 261

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 262

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 263

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 264

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 265

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 266

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 267

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 268

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 269

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 270

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 271

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 272

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

- Greedy by end-time picks the most non-overlapping intervals.

## entry 275

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 276

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 277

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 278

- StringBuilder: amortize allocation by doubling on grow.

## entry 279

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 280

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 281

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 282

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 283

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 284

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 285

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 286

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 287

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 288

- Heap when you only need top-k; full sort is wasted work.

## entry 289

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 290

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 291

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 292

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 293

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 294

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 295

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 296

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 297

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 298

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 299

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 300

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 301

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 302

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 303

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 304

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 305

- Monotonic stack pops while the new element violates the invariant.

## entry 306

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 307

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 308

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 309

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 310

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 311

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 312

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 313

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 314

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 315

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 316

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 317

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 318

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 319

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 320

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 321

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 322

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 323

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 324

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 325

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 326

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 327

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 328

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 329

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 330

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 331

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 332

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 333

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 334

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 336

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 337

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 338

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 339

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 340

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 341

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 342

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 343

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 344

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 345

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 346

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 347

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 348

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 349

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 350

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 351

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 352

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 353

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 354

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 355

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 356

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 357

- Euler tour flattens a tree into an array for range-query LCA.

## entry 358

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 359

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 360

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 361

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 362

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 363

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 364

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 365

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 366

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 367

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 368

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 369

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 370

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 371

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 372

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 373

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 374

- Greedy by end-time picks the most non-overlapping intervals.

## entry 375

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 376

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 377

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 378

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 379

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 380

- Splay tree: every access splays to the root; amortized O(log n).

## entry 381

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 382

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 383

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 384

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 385

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 386

- LIS via patience: each pile holds the smallest tail of length k.

## entry 387

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 388

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 389

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 390

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 391

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 392

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 393

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 394

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 395

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 396

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 397

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 398

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 399

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 400

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 401

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 402

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 403

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 404

- StringBuilder: amortize allocation by doubling on grow.

## entry 405

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 406

- Monotonic stack pops while the new element violates the invariant.

## entry 407

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 408

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 409

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 410

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 411

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 412

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 413

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 414

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 415

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 416

- StringBuilder: amortize allocation by doubling on grow.

## entry 417

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 418

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 419

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 420

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 421

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 422

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 423

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 424

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 425

- Monotonic stack pops while the new element violates the invariant.

## entry 426

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 427

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 428

- Stable sort matters when a secondary key was set in a prior pass.

## entry 429

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 430

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 431

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 432

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 433

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 434

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 435

- Greedy by end-time picks the most non-overlapping intervals.

## entry 436

- Stable sort matters when a secondary key was set in a prior pass.

## entry 437

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 438

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 439

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 440

- LIS via patience: each pile holds the smallest tail of length k.

## entry 441

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 442

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 443

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 444

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 445

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 446

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 447

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 448

- LIS via patience: each pile holds the smallest tail of length k.

## entry 449

- Heap when you only need top-k; full sort is wasted work.

## entry 450

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 451

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 452

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 453

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 454

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 455

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 456

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 457

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 458

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 459

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 460

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 461

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 462

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 463

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 464

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 465

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 466

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 467

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 468

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 469

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 470

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 471

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 472

- LIS via patience: each pile holds the smallest tail of length k.

## entry 473

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 474

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 475

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 476

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 477

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 478

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 479

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 480

- Monotonic stack pops while the new element violates the invariant.

## entry 481

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 482

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 483

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 484

- Heap when you only need top-k; full sort is wasted work.

## entry 485

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 486

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 487

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 488

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 489

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 490

- LIS via patience: each pile holds the smallest tail of length k.

## entry 491

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 492

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 493

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 494

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 495

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 496

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 497

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 498

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 499

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 500

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 501

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 502

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 503

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 504

- Heap when you only need top-k; full sort is wasted work.

## entry 505

- Monotonic stack pops while the new element violates the invariant.

## entry 506

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 507

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 508

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 509

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 510

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 511

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 512

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 513

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 514

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 515

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 516

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 517

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 518

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 519

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 520

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 521

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 522

- Monotonic stack pops while the new element violates the invariant.

## entry 523

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 524

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 525

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 526

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 527

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 528

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 529

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 530

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 531

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 532

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 533

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 534

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 535

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 536

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 537

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 538

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 539

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 540

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 541

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 542

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 543

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 544

- Interval DP: solve all `[l, r]` ranges from short to long.
