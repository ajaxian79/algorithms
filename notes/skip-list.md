# skip-list

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

- Monotonic stack pops while the new element violates the invariant.

## entry 5

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 11

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 18

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 19

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

- Euler tour flattens a tree into an array for range-query LCA.

## entry 22

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 29

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 32

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 36

- LIS via patience: each pile holds the smallest tail of length k.

## entry 37

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 39

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 42

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 43

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 45

- Walk both pointers from each end inward; advance the smaller side.

## entry 46

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 49

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 50

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 51

- Euler tour flattens a tree into an array for range-query LCA.

## entry 52

- Euler tour flattens a tree into an array for range-query LCA.

## entry 53

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 55

- Monotonic stack pops while the new element violates the invariant.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 58

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 59

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 61

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 63

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 65

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 66

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 67

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 68

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 69

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 71

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 74

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 75

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 76

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 77

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 78

- Monotonic stack pops while the new element violates the invariant.

## entry 79

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 80

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 81

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 82

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 85

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 86

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 88

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 89

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 90

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 91

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 92

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 93

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

- Walk both pointers from each end inward; advance the smaller side.

## entry 95

- Splay tree: every access splays to the root; amortized O(log n).

## entry 96

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 97

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 98

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 99

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 100

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 101

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 102

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 103

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 104

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 107

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 110

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 111

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 112

- Walk both pointers from each end inward; advance the smaller side.

## entry 113

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 114

- Stable sort matters when a secondary key was set in a prior pass.

## entry 115

- Splay tree: every access splays to the root; amortized O(log n).

## entry 116

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 117

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 118

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 119

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 120

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 121

- LIS via patience: each pile holds the smallest tail of length k.

## entry 122

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 123

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 125

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 126

- Monotonic stack pops while the new element violates the invariant.

## entry 127

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 128

- Greedy by end-time picks the most non-overlapping intervals.

## entry 129

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 130

- Euler tour flattens a tree into an array for range-query LCA.

## entry 131

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 133

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 134

- LIS via patience: each pile holds the smallest tail of length k.

## entry 135

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 136

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 137

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 138

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 139

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 140

- LIS via patience: each pile holds the smallest tail of length k.

## entry 141

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 142

- Euler tour flattens a tree into an array for range-query LCA.

## entry 143

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 144

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 145

- Greedy by end-time picks the most non-overlapping intervals.

## entry 146

- Walk both pointers from each end inward; advance the smaller side.

## entry 147

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 148

- Greedy by end-time picks the most non-overlapping intervals.

## entry 149

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 150

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 151

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 152

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 153

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 154

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 156

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

- Monotonic stack pops while the new element violates the invariant.

## entry 158

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 159

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 160

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 161

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 162

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 163

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 164

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 165

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 166

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 167

- Splay tree: every access splays to the root; amortized O(log n).

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 170

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 171

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 172

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 173

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 174

- LIS via patience: each pile holds the smallest tail of length k.

## entry 175

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 176

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 177

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 178

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 181

- Greedy by end-time picks the most non-overlapping intervals.

## entry 182

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 183

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 184

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 185

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 186

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 187

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 188

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 189

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 190

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 191

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 192

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 193

- Walk both pointers from each end inward; advance the smaller side.

## entry 194

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 195

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 196

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 197

- Heap when you only need top-k; full sort is wasted work.

## entry 198

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 199

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 201

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 202

- Heap when you only need top-k; full sort is wasted work.

## entry 203

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 204

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 205

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 206

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 207

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 208

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 209

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 210

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 212

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 213

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 214

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 215

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 216

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 217

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 218

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 219

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 220

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 221

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 222

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 223

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 224

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 225

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 226

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 227

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 228

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 229

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 230

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 231

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 232

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 233

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 234

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 235

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 236

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 237

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 238

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 239

- Greedy by end-time picks the most non-overlapping intervals.

## entry 240

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 241

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 242

- Splay tree: every access splays to the root; amortized O(log n).

## entry 243

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 244

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 246

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 247

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 248

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 249

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 250

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 251

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 252

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 253

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 254

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 255

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 256

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 257

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 258

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 259

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 260

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 261

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 262

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 263

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 264

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 265

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 266

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 267

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 268

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 269

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 270

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 271

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 272

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 273

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 274

- Heap when you only need top-k; full sort is wasted work.

## entry 275

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 276

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 277

- Splay tree: every access splays to the root; amortized O(log n).

## entry 278

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 279

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 280

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 281

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 282

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 283

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 284

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 286

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 287

- LIS via patience: each pile holds the smallest tail of length k.

## entry 288

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 289

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 290

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 291

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 292

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 293

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 294

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 295

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 296

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 297

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 298

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 299

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 300

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 301

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 302

- LIS via patience: each pile holds the smallest tail of length k.

## entry 303

- LIS via patience: each pile holds the smallest tail of length k.

## entry 304

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 305

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 306

- Euler tour flattens a tree into an array for range-query LCA.

## entry 307

- Euler tour flattens a tree into an array for range-query LCA.

## entry 308

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 309

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 310

- Splay tree: every access splays to the root; amortized O(log n).

## entry 311

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

- Stable sort matters when a secondary key was set in a prior pass.

## entry 313

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 314

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 315

- Greedy by end-time picks the most non-overlapping intervals.

## entry 316

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 317

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 318

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 319

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 320

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 321

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 322

- LIS via patience: each pile holds the smallest tail of length k.

## entry 323

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 324

- LCA via binary lifting: jump up powers of two until depths match, then converge.
