# padding

## entry 1

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 12

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 13

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 16

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 18

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 23

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 24

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 30

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 35

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 36

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 38

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 39

- Monotonic stack pops while the new element violates the invariant.

## entry 40

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 41

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 42

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 43

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 44

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 45

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 46

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 50

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 51

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 52

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 54

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 55

- Walk both pointers from each end inward; advance the smaller side.

## entry 56

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 57

- Walk both pointers from each end inward; advance the smaller side.

## entry 58

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

- LIS via patience: each pile holds the smallest tail of length k.

## entry 60

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 61

- Heap when you only need top-k; full sort is wasted work.

## entry 62

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 63

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 65

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 66

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 68

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 72

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Splay tree: every access splays to the root; amortized O(log n).

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 78

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 82

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 84

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 89

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 90

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 91

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 92

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 94

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

- StringBuilder: amortize allocation by doubling on grow.

## entry 97

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 98

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 101

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 102

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Heap when you only need top-k; full sort is wasted work.

## entry 106

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 107

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- Walk both pointers from each end inward; advance the smaller side.

## entry 111

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 112

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 114

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 115

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 116

- Stable sort matters when a secondary key was set in a prior pass.

## entry 117

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 118

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 119

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 120

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 121

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 122

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 123

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 124

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 125

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 126

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 127

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 128

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 129

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 130

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 131

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 132

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 133

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 134

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 136

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 137

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 138

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 141

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 142

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 143

- Walk both pointers from each end inward; advance the smaller side.

## entry 144

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 145

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 146

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 147

- Walk both pointers from each end inward; advance the smaller side.

## entry 148

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 149

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 150

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 151

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 152

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 153

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 154

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 155

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 156

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 157

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 158

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 159

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 160

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 161

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 163

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 164

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 165

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 166

- Greedy by end-time picks the most non-overlapping intervals.

## entry 167

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 168

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 169

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 170

- Walk both pointers from each end inward; advance the smaller side.

## entry 171

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 172

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 173

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 175

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 176

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 177

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 178

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 179

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 180

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 181

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 182

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 183

- Splay tree: every access splays to the root; amortized O(log n).

## entry 184

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 185

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 186

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 187

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 188

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 189

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

- LIS via patience: each pile holds the smallest tail of length k.

## entry 191

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 192

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 193

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 194

- Walk both pointers from each end inward; advance the smaller side.

## entry 195

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 196

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 197

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 198

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 199

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 200

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 201

- Stable sort matters when a secondary key was set in a prior pass.

## entry 202

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 203

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 204

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 205

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 206

- StringBuilder: amortize allocation by doubling on grow.

## entry 207

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 208

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 209

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 210

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 211

- LIS via patience: each pile holds the smallest tail of length k.

## entry 212

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 213

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 214

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 215

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 216

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 217

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 218

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 219

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 220

- Splay tree: every access splays to the root; amortized O(log n).

## entry 221

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 222

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 223

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 224

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 225

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 226

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 229

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 230

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 231

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 232

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 233

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 234

- Monotonic stack pops while the new element violates the invariant.

## entry 235

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 238

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 239

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 241

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 242

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 243

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 244

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 245

- Walk both pointers from each end inward; advance the smaller side.

## entry 246

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 247

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 248

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 249

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

- Heap when you only need top-k; full sort is wasted work.

## entry 251

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 252

- LIS via patience: each pile holds the smallest tail of length k.

## entry 253

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 254

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 255

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 257

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 259

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 260

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 261

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 262

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 263

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 264

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 265

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 266

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 267

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 268

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 269

- Heap when you only need top-k; full sort is wasted work.

## entry 270

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 272

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 273

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 274

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 275

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 276

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 279

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 280

- Euler tour flattens a tree into an array for range-query LCA.

## entry 281

- Splay tree: every access splays to the root; amortized O(log n).

## entry 282

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 283

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 284

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 285

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 286

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 287

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 288

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 289

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 290

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 291

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 292

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 293

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 294

- Splay tree: every access splays to the root; amortized O(log n).

## entry 295

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 296

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 297

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 298

- Greedy by end-time picks the most non-overlapping intervals.

## entry 299

- Greedy by end-time picks the most non-overlapping intervals.

## entry 300

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 301

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 302

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 304

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 305

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 306

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 307

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 308

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 309

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 310

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 312

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 313

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 314

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 315

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 316

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 317

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 318

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 319

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 320

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 321

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 322

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 323

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 324

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 325

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 326

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 327

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 328

- Splay tree: every access splays to the root; amortized O(log n).

## entry 329

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 330

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 331

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 332

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 333

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 334

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 335

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 336

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 337

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 338

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 339

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 340

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 341

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 343

- Greedy by end-time picks the most non-overlapping intervals.

## entry 344

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 345

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 346

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 347

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 348

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 349

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 350

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 351

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 352

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 354

- StringBuilder: amortize allocation by doubling on grow.

## entry 355

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 356

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 357

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 358

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 359

- Greedy by end-time picks the most non-overlapping intervals.

## entry 360

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 361

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 362

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
