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
