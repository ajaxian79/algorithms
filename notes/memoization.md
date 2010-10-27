# memoization

## entry 1

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 16

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 17

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

- Monotonic stack pops while the new element violates the invariant.

## entry 19

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 32

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 36

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 37

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 38

- Stable sort matters when a secondary key was set in a prior pass.

## entry 39

- Euler tour flattens a tree into an array for range-query LCA.

## entry 40

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 41

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 44

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 45

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 46

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 47

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 48

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 50

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 51

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 52

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 53

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 54

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 55

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 56

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 57

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 58

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 61

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 63

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 68

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 71

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 72

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 73

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 77

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 79

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 80

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 81

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 82

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 84

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 85

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 86

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 87

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 88

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 92

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 93

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 94

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 95

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 96

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 97

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 98

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 99

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 100

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 102

- LIS via patience: each pile holds the smallest tail of length k.

## entry 103

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 104

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 105

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 106

- Monotonic stack pops while the new element violates the invariant.

## entry 107

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 108

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 109

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 112

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 113

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 114

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 115

- Stable sort matters when a secondary key was set in a prior pass.

## entry 116

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 117

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 119

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 120

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 121

- Splay tree: every access splays to the root; amortized O(log n).

## entry 122

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 123

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 124

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 125

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 126

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 127

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 129

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 130

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 131

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 132

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 133

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 134

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 137

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

- Stable sort matters when a secondary key was set in a prior pass.

## entry 139

- Walk both pointers from each end inward; advance the smaller side.

## entry 140

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 141

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 142

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 143

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 144

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 145

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 146

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 147

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 148

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 149

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 150

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 151

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 152

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 153

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 154

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 155

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 156

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 158

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 159

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 160

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 161

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 163

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 164

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 165

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 166

- Greedy by end-time picks the most non-overlapping intervals.

## entry 167

- Euler tour flattens a tree into an array for range-query LCA.

## entry 168

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 169

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 170

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 171

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 172

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 173

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 174

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 175

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 176

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 177

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 178

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 179

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 182

- Splay tree: every access splays to the root; amortized O(log n).

## entry 183

- Greedy by end-time picks the most non-overlapping intervals.

## entry 184

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 185

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 186

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 187

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 188

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 189

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 190

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 191

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 192

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 193

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 194

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 195

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 197

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 198

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 199

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 200

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 201

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 202

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 203

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 204

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 205

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 207

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 208

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 209

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 210

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 211

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 212

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 213

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 214

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 215

- Heap when you only need top-k; full sort is wasted work.

## entry 216

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 217

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 218

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 219

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 220

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 221

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 222

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 223

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 224

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 225

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 226

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 227

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 228

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 229

- Stable sort matters when a secondary key was set in a prior pass.

## entry 230

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 232

- Euler tour flattens a tree into an array for range-query LCA.

## entry 233

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 234

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 235

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 236

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 237

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 238

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 239

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 240

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 241

- Stable sort matters when a secondary key was set in a prior pass.

## entry 242

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 243

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 244

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 245

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 246

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 247

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 248

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 249

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 250

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 251

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 252

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 253

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 254

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 255

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 256

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 257

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 258

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 259

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 260

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 261

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

- Euler tour flattens a tree into an array for range-query LCA.

## entry 263

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 264

- Walk both pointers from each end inward; advance the smaller side.

## entry 265

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 266

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 267

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 268

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 269

- Heap when you only need top-k; full sort is wasted work.

## entry 270

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 271

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 272

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 273

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 274

- Monotonic stack pops while the new element violates the invariant.

## entry 275

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 276

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 277

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 278

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 279

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 280

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 281

- Euler tour flattens a tree into an array for range-query LCA.

## entry 282

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 283

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 284

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 285

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 286

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 287

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 288

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 289

- Walk both pointers from each end inward; advance the smaller side.

## entry 290

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 291

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 292

- Euler tour flattens a tree into an array for range-query LCA.

## entry 293

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 294

- StringBuilder: amortize allocation by doubling on grow.

## entry 295

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 296

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 297

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 298

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 299

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 300

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 301

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 302

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 303

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 304

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 305

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 306

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 307

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 308

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 309

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 310

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 311

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 312

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 313

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 314

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 315

- Walk both pointers from each end inward; advance the smaller side.

## entry 316

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 317

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 318

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 319

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 320

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 321

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 322

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 323

- StringBuilder: amortize allocation by doubling on grow.

## entry 324

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 325

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 326

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 327

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 328

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 329

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 330

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 331

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 332

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 333

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 334

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 335

- Greedy by end-time picks the most non-overlapping intervals.

## entry 336

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 337

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 338

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 339

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 341

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 342

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 343

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 344

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 345

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 346

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 347

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 348

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 349

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 351

- LIS via patience: each pile holds the smallest tail of length k.

## entry 352

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 353

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 354

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 355

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 356

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 357

- Euler tour flattens a tree into an array for range-query LCA.

## entry 358

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 359

- LIS via patience: each pile holds the smallest tail of length k.

## entry 360

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 361

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 362

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 363

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 364

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 365

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 366

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 367

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 368

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 369

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 370

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 371

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 372

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 373

- Splay tree: every access splays to the root; amortized O(log n).

## entry 374

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 375

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 376

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 377

- Greedy by end-time picks the most non-overlapping intervals.

## entry 378

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 379

- Greedy by end-time picks the most non-overlapping intervals.

## entry 380

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 381

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 382

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 383

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 384

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 385

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 386

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 387

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 388

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 389

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 390

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 391

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 392

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 393

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 394

- Greedy by end-time picks the most non-overlapping intervals.

## entry 395

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 396

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 397

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 398

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 399

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 400

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 401

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 402

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 403

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 404

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 405

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 406

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 407

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 408

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 409

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 410

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 411

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 412

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 413

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 414

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 415

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 416

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 417

- Monotonic stack pops while the new element violates the invariant.

## entry 418

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 419

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 420

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 421

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 422

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 423

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 424

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 425

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 426

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 427

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 428

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 429

- LIS via patience: each pile holds the smallest tail of length k.

## entry 430

- StringBuilder: amortize allocation by doubling on grow.

## entry 431

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 432

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 433

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 434

- Heap when you only need top-k; full sort is wasted work.

## entry 435

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 436

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 437

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 438

- Stable sort matters when a secondary key was set in a prior pass.

## entry 439

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 440

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 441

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 442

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 443

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 444

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 445

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 446

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 447

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 448

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 449

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 450

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 451

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 452

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 453

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 454

- Walk both pointers from each end inward; advance the smaller side.

## entry 455

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 456

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 457

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 458

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 459

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 460

- Euler tour flattens a tree into an array for range-query LCA.

## entry 461

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 462

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 463

- Monotonic stack pops while the new element violates the invariant.

## entry 464

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 465

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 466

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 467

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 468

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 469

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 470

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 471

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 472

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 473

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 474

- Walk both pointers from each end inward; advance the smaller side.

## entry 475

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 476

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 477

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 478

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 479

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 480

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 481

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 482

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 483

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 484

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 485

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 486

- Greedy by end-time picks the most non-overlapping intervals.

## entry 487

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 488

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 489

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 490

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 491

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 492

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 493

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 494

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 495

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 496

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 497

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 498

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 499

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 500

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 501

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 502

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 503

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 504

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 505

- Heap when you only need top-k; full sort is wasted work.

## entry 506

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 507

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 508

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 509

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 510

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 511

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 512

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 513

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 514

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 515

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 516

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 517

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 518

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 519

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 520

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 521

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 522

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 523

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 524

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 525

- LIS via patience: each pile holds the smallest tail of length k.

## entry 526

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 527

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 528

- Stable sort matters when a secondary key was set in a prior pass.

## entry 529

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 530

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 531

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 532

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 533

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 534

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 535

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 536

- Greedy by end-time picks the most non-overlapping intervals.

## entry 537

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 538

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 539

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 540

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 541

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 542

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 543

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 544

- Heap when you only need top-k; full sort is wasted work.

## entry 545

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 546

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 547

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 548

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 549

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 550

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 551

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 552

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 553

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 554

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 555

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 556

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 557

- Euler tour flattens a tree into an array for range-query LCA.

## entry 558

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 559

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 560

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 561

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 562

- Euler tour flattens a tree into an array for range-query LCA.

## entry 563

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 564

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 565

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 566

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 567

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 568

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 569

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 570

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 571

- Monotonic stack pops while the new element violates the invariant.

## entry 572

- Walk both pointers from each end inward; advance the smaller side.

## entry 573

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 574

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 575

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 576

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 577

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 578

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 579

- Stable sort matters when a secondary key was set in a prior pass.

## entry 580

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 581

- Heap when you only need top-k; full sort is wasted work.

## entry 582

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 583

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 584

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 585

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 586

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 587

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 588

- StringBuilder: amortize allocation by doubling on grow.

## entry 589

- StringBuilder: amortize allocation by doubling on grow.

## entry 590

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 591

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 592

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 593

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 594

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 595

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 596

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 597

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 598

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 599

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 600

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 601

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 602

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 603

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 604

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 605

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 606

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 607

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 608

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 609

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 610

- Walk both pointers from each end inward; advance the smaller side.

## entry 611

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 612

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 613

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 614

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 615

- Euler tour flattens a tree into an array for range-query LCA.

## entry 616

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 617

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 618

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 619

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 620

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 621

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 622

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 623

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 624

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 625

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 626

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 627

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 628

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 629

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 630

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 631

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 632

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 633

- Heap when you only need top-k; full sort is wasted work.

## entry 634

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
