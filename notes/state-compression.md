# state-compression

## entry 1

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- StringBuilder: amortize allocation by doubling on grow.

## entry 26

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 31

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 32

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 33

- Greedy by end-time picks the most non-overlapping intervals.

## entry 34

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 40

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 44

- StringBuilder: amortize allocation by doubling on grow.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 50

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 51

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 52

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 53

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 54

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 57

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 64

- Splay tree: every access splays to the root; amortized O(log n).

## entry 65

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

- Heap when you only need top-k; full sort is wasted work.

## entry 67

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 70

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 73

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 74

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 78

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 79

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

- Euler tour flattens a tree into an array for range-query LCA.

## entry 82

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 84

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 85

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 86

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 88

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 90

- Heap when you only need top-k; full sort is wasted work.

## entry 91

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 92

- Stable sort matters when a secondary key was set in a prior pass.

## entry 93

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

- Walk both pointers from each end inward; advance the smaller side.

## entry 98

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 100

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 101

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 104

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 105

- Greedy by end-time picks the most non-overlapping intervals.

## entry 106

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 107

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 108

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 111

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 112

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 113

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 114

- Walk both pointers from each end inward; advance the smaller side.

## entry 115

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 116

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 117

- Monotonic stack pops while the new element violates the invariant.

## entry 118

- Greedy by end-time picks the most non-overlapping intervals.

## entry 119

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 123

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 125

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 126

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 129

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 130

- StringBuilder: amortize allocation by doubling on grow.

## entry 131

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 133

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 134

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 135

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 136

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 137

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 138

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 139

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 142

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 143

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 144

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 145

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 146

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 147

- Stable sort matters when a secondary key was set in a prior pass.

## entry 148

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 149

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 150

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 151

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 152

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 153

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 154

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 155

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 156

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 157

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 158

- LIS via patience: each pile holds the smallest tail of length k.

## entry 159

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 160

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 161

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 162

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 163

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 164

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 165

- Greedy by end-time picks the most non-overlapping intervals.

## entry 166

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 167

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 168

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 169

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 170

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 171

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 172

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 173

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 174

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 175

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 177

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 178

- Monotonic stack pops while the new element violates the invariant.

## entry 179

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 180

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 181

- Monotonic stack pops while the new element violates the invariant.

## entry 182

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 183

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 184

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 185

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 186

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 187

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 188

- Monotonic stack pops while the new element violates the invariant.

## entry 189

- Greedy by end-time picks the most non-overlapping intervals.

## entry 190

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 191

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 192

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 193

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 194

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 195

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 196

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 197

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 198

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 199

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 200

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 201

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 203

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 204

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 205

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 207

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 208

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 209

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 210

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 214

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 215

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 216

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 217

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 218

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 219

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 220

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 222

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 223

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 224

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 225

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 226

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 227

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 228

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 229

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 230

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 231

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 232

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 233

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 235

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 236

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 237

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 238

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 239

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 240

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 241

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 243

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 244

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 245

- Monotonic stack pops while the new element violates the invariant.

## entry 246

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 247

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 248

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 249

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 251

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 252

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 253

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 254

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 255

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 257

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 258

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 259

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 260

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 261

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 262

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 263

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 264

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 265

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 266

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 267

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 268

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 269

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 270

- Splay tree: every access splays to the root; amortized O(log n).

## entry 271

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 272

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 273

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 274

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 275

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 276

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

- Monotonic stack pops while the new element violates the invariant.

## entry 278

- Greedy by end-time picks the most non-overlapping intervals.

## entry 279

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 280

- Euler tour flattens a tree into an array for range-query LCA.

## entry 281

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 282

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 283

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 284

- Walk both pointers from each end inward; advance the smaller side.

## entry 285

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 286

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 287

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 288

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 289

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

- Heap when you only need top-k; full sort is wasted work.

## entry 291

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 292

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 293

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 294

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 295

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 296

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 297

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 299

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 300

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 301

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 302

- LIS via patience: each pile holds the smallest tail of length k.

## entry 303

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 304

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 305

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 306

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 307

- Walk both pointers from each end inward; advance the smaller side.

## entry 308

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 309

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 310

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 311

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 312

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 313

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 314

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 315

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 316

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 317

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 318

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 319

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 320

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 321

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 322

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 323

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 324

- Monotonic stack pops while the new element violates the invariant.

## entry 325

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 326

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 327

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 328

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 329

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 330

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 331

- Monotonic stack pops while the new element violates the invariant.

## entry 332

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 333

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 334

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 336

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 337

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 338

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 339

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 340

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 341

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 343

- Greedy by end-time picks the most non-overlapping intervals.

## entry 344

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 345

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 346

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 347

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 348

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 349

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 350

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 351

- Stable sort matters when a secondary key was set in a prior pass.

## entry 352

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 353

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 354

- Monotonic stack pops while the new element violates the invariant.

## entry 355

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 356

- Splay tree: every access splays to the root; amortized O(log n).

## entry 357

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 358

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 359

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 360

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 361

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 362

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 363

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 364

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 365

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 366

- Monotonic stack pops while the new element violates the invariant.

## entry 367

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 368

- Greedy by end-time picks the most non-overlapping intervals.

## entry 369

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 370

- Splay tree: every access splays to the root; amortized O(log n).

## entry 371

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 372

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 373

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 374

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 375

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 376

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 377

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 378

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 379

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 380

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 381

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 382

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 383

- Monotonic stack pops while the new element violates the invariant.

## entry 384

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 385

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 386

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 387

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 388

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 389

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 390

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 391

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 392

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 393

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 394

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 395

- Splay tree: every access splays to the root; amortized O(log n).

## entry 396

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 397

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 398

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 399

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 400

- Greedy by end-time picks the most non-overlapping intervals.

## entry 401

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 402

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 403

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 404

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 405

- Splay tree: every access splays to the root; amortized O(log n).

## entry 406

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 407

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 408

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 409

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 410

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 411

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 412

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 413

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 414

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 415

- Euler tour flattens a tree into an array for range-query LCA.

## entry 416

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 417

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 419

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 420

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 421

- Euler tour flattens a tree into an array for range-query LCA.

## entry 422

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 423

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 424

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 425

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 426

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 427

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 428

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 429

- Greedy by end-time picks the most non-overlapping intervals.

## entry 430

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 431

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 432

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 433

- Splay tree: every access splays to the root; amortized O(log n).

## entry 434

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 435

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 436

- Euler tour flattens a tree into an array for range-query LCA.

## entry 437

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 438

- StringBuilder: amortize allocation by doubling on grow.

## entry 439

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 440

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 441

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 442

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 443

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 444

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 445

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 446

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 447

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 448

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 449

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 450

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 451

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 452

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 453

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 454

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 455

- LIS via patience: each pile holds the smallest tail of length k.

## entry 456

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 457

- Monotonic stack pops while the new element violates the invariant.

## entry 458

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 459

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 460

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 461

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 462

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 463

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 464

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 465

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 466

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 467

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 468

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 469

- Monotonic stack pops while the new element violates the invariant.

## entry 470

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 471

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 472

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 473

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 474

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 475

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 476

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 477

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 478

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 479

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 480

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 481

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 482

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 483

- Splay tree: every access splays to the root; amortized O(log n).

## entry 484

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 485

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 486

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 487

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 488

- Walk both pointers from each end inward; advance the smaller side.

## entry 489

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 490

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 491

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 492

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 493

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 494

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 495

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 496

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 497

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 498

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 499

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 500

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 501

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 502

- Splay tree: every access splays to the root; amortized O(log n).

## entry 503

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 504

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 505

- Monotonic stack pops while the new element violates the invariant.

## entry 506

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 507

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 508

- Greedy by end-time picks the most non-overlapping intervals.

## entry 509

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 510

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 511

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 512

- StringBuilder: amortize allocation by doubling on grow.

## entry 513

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 514

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 515

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 516

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 517

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 518

- Walk both pointers from each end inward; advance the smaller side.

## entry 519

- Euler tour flattens a tree into an array for range-query LCA.

## entry 520

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 521

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 522

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 523

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 524

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 525

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 526

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 527

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 528

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 529

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 530

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 531

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 532

- LIS via patience: each pile holds the smallest tail of length k.

## entry 533

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 534

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 535

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 536

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 537

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 538

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 539

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 540

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 541

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 542

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 543

- Walk both pointers from each end inward; advance the smaller side.

## entry 544

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 545

- LIS via patience: each pile holds the smallest tail of length k.

## entry 546

- Greedy by end-time picks the most non-overlapping intervals.

## entry 547

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 548

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 549

- Stable sort matters when a secondary key was set in a prior pass.

## entry 550

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 551

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 552

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 553

- Greedy by end-time picks the most non-overlapping intervals.

## entry 554

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 555

- Stable sort matters when a secondary key was set in a prior pass.

## entry 556

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 557

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 558

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 559

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 560

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 561

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 562

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 563

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 564

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 565

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 566

- Stable sort matters when a secondary key was set in a prior pass.

## entry 567

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 568

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 569

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 570

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 571

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 572

- Monotonic stack pops while the new element violates the invariant.

## entry 573

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 574

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 575

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 576

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 577

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 578

- Monotonic stack pops while the new element violates the invariant.

## entry 579

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 580

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 581

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 582

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 583

- StringBuilder: amortize allocation by doubling on grow.

## entry 584

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 585

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 586

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 587

- Walk both pointers from each end inward; advance the smaller side.

## entry 588

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 589

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 590

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 591

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 592

- Greedy by end-time picks the most non-overlapping intervals.

## entry 593

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 594

- Stable sort matters when a secondary key was set in a prior pass.

## entry 595

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 596

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 597

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 598

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 599

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 600

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 601

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 602

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 603

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 604

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 605

- Heap when you only need top-k; full sort is wasted work.

## entry 606

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 607

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 608

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 609

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 610

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 611

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 612

- Heap when you only need top-k; full sort is wasted work.

## entry 613

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 614

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 615

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 616

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 617

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 618

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 619

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 620

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 621

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 622

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 623

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 624

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 625

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 626

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 627

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 628

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 629

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 630

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 631

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 632

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 633

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 634

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 635

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 636

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 637

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 638

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 639

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 640

- Greedy by end-time picks the most non-overlapping intervals.

## entry 641

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
