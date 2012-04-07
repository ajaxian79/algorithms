# hash-collision

## entry 1

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 7

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 11

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 20

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.

## entry 26

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Greedy by end-time picks the most non-overlapping intervals.

## entry 29

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 32

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 33

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 36

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 37

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 40

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 42

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 44

- Splay tree: every access splays to the root; amortized O(log n).

## entry 45

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- StringBuilder: amortize allocation by doubling on grow.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 52

- Greedy by end-time picks the most non-overlapping intervals.

## entry 53

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 54

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 62

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 63

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 64

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 65

- Walk both pointers from each end inward; advance the smaller side.

## entry 66

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 70

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 72

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 73

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 74

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 75

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- Splay tree: every access splays to the root; amortized O(log n).

## entry 78

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 79

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 81

- LIS via patience: each pile holds the smallest tail of length k.

## entry 82

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 83

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 84

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 91

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 92

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 94

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 95

- StringBuilder: amortize allocation by doubling on grow.

## entry 96

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 100

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 102

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 103

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 104

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 106

- Stable sort matters when a secondary key was set in a prior pass.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- Heap when you only need top-k; full sort is wasted work.

## entry 109

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 110

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

- Heap when you only need top-k; full sort is wasted work.

## entry 113

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 114

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 116

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 117

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 119

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 121

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 122

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 123

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 124

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 127

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 128

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 129

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 130

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 132

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 133

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 134

- LIS via patience: each pile holds the smallest tail of length k.

## entry 135

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 136

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 137

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 138

- Euler tour flattens a tree into an array for range-query LCA.

## entry 139

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 142

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 143

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 144

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 145

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 146

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 147

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 148

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 149

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 150

- Euler tour flattens a tree into an array for range-query LCA.

## entry 151

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 152

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 155

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 156

- LIS via patience: each pile holds the smallest tail of length k.

## entry 157

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 159

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 161

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 162

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 163

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 164

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 165

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 166

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 170

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 171

- LIS via patience: each pile holds the smallest tail of length k.

## entry 172

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 173

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 174

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 175

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 176

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 177

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 178

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 179

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 180

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 181

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 182

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 183

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 185

- Greedy by end-time picks the most non-overlapping intervals.

## entry 186

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 187

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 188

- StringBuilder: amortize allocation by doubling on grow.

## entry 189

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 190

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 191

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 192

- Splay tree: every access splays to the root; amortized O(log n).

## entry 193

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 194

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 195

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 196

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 197

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 198

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 199

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 200

- Greedy by end-time picks the most non-overlapping intervals.

## entry 201

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 202

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 203

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 204

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 205

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 206

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 207

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 208

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 209

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 210

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 212

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 213

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 214

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 215

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 216

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 217

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 218

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 219

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 220

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 221

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 222

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 223

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 224

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 225

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 226

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 229

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 230

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 231

- Greedy by end-time picks the most non-overlapping intervals.

## entry 232

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 233

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 234

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 235

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 237

- Greedy by end-time picks the most non-overlapping intervals.

## entry 238

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 239

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 240

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 241

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 242

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 243

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 244

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 245

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 246

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 247

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 248

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 249

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 250

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 251

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 252

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 253

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 254

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 255

- LIS via patience: each pile holds the smallest tail of length k.

## entry 256

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 257

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 258

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 259

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 260

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 261

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 262

- Euler tour flattens a tree into an array for range-query LCA.

## entry 263

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 264

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 265

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 266

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 267

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 268

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 269

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 270

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 271

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 272

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 273

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 274

- Splay tree: every access splays to the root; amortized O(log n).

## entry 275

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 278

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 279

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 280

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 281

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 282

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 283

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 284

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 285

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 286

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 287

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 288

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 289

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 290

- Splay tree: every access splays to the root; amortized O(log n).

## entry 291

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 292

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 293

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 294

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 295

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 296

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 297

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 298

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 299

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 300

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 301

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 302

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 303

- Splay tree: every access splays to the root; amortized O(log n).

## entry 304

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 305

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 306

- Walk both pointers from each end inward; advance the smaller side.

## entry 307

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 308

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 309

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 310

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 311

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 312

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 313

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 314

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 315

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 316

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 317

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 318

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 319

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 320

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 321

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 322

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 323

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 324

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 325

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 326

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 328

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 329

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 330

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 331

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 332

- Heap when you only need top-k; full sort is wasted work.

## entry 333

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 334

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 335

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 336

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 337

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 338

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 339

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 340

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 341

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 342

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 343

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 344

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 345

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 346

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 347

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 348

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 349

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 350

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 351

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 352

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 353

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 354

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 355

- LIS via patience: each pile holds the smallest tail of length k.

## entry 356

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 357

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 358

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 359

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 360

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 361

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 362

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 363

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 364

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 366

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 367

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 368

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 369

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 370

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 371

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 372

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 373

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 374

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 375

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 376

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 377

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 378

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 379

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 380

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 381

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 382

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 383

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 384

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 385

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 386

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 387

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 388

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 389

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 390

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 391

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 392

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 393

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 394

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 395

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 396

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 397

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 398

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 399

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 400

- StringBuilder: amortize allocation by doubling on grow.

## entry 401

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 402

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 403

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 404

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 405

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 406

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 407

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 408

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 409

- LIS via patience: each pile holds the smallest tail of length k.

## entry 410

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 411

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 412

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 413

- Euler tour flattens a tree into an array for range-query LCA.

## entry 414

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 415

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 416

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 417

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 418

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 419

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 420

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 421

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 422

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 423

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 424

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 425

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 426

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 427

- Euler tour flattens a tree into an array for range-query LCA.

## entry 428

- Monotonic stack pops while the new element violates the invariant.

## entry 429

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 430

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 431

- Monotonic stack pops while the new element violates the invariant.

## entry 432

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 433

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 434

- Euler tour flattens a tree into an array for range-query LCA.

## entry 435

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 436

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 437

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 438

- StringBuilder: amortize allocation by doubling on grow.

## entry 439

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 440

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 441

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 442

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 443

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 444

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 445

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 446

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 447

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 448

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 449

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 450

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 451

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 452

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 453

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 454

- StringBuilder: amortize allocation by doubling on grow.

## entry 455

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 456

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 457

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 458

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 459

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 460

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 461

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 462

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 463

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 464

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 465

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 466

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 467

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 468

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 469

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 470

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 471

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 472

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 473

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 474

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 475

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 476

- Monotonic stack pops while the new element violates the invariant.

## entry 477

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 478

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 479

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 480

- Monotonic stack pops while the new element violates the invariant.

## entry 481

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 482

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 483

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 484

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 485

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 486

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 487

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 488

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 489

- Splay tree: every access splays to the root; amortized O(log n).

## entry 490

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 491

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 492

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 493

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 494

- Walk both pointers from each end inward; advance the smaller side.

## entry 495

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 497

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 498

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 499

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 500

- LIS via patience: each pile holds the smallest tail of length k.

## entry 501

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 502

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 503

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 504

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 505

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 506

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 507

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 508

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 509

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 510

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 511

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 512

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 513

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 514

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 515

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 516

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 517

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 518

- Walk both pointers from each end inward; advance the smaller side.

## entry 519

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 520

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 521

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 523

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 524

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 525

- Stable sort matters when a secondary key was set in a prior pass.

## entry 526

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 527

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 528

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 529

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 530

- Stable sort matters when a secondary key was set in a prior pass.

## entry 531

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 532

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 533

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 534

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 535

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 536

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 537

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 538

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 539

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 540

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 541

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 542

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 543

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 544

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 545

- StringBuilder: amortize allocation by doubling on grow.

## entry 546

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 547

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 548

- Heap when you only need top-k; full sort is wasted work.

## entry 549

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 550

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 551

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 552

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 553

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 554

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 555

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 556

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 557

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 558

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 559

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 560

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 561

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 562

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 563

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 564

- Walk both pointers from each end inward; advance the smaller side.

## entry 565

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 566

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 567

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 568

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 569

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 570

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 571

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 572

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 573

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 574

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 575

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 576

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 577

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 578

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 579

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 580

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 581

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 582

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 583

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 584

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 585

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 586

- Polynomial rolling hash with two moduli kills almost all collisions in practice.
