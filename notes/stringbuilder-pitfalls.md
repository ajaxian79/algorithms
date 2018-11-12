# stringbuilder-pitfalls

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 14

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 39

- Stable sort matters when a secondary key was set in a prior pass.

## entry 40

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 46

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 47

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 49

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 52

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 54

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 55

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 56

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 57

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- Euler tour flattens a tree into an array for range-query LCA.

## entry 62

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 63

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 64

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 68

- Splay tree: every access splays to the root; amortized O(log n).

## entry 69

- Walk both pointers from each end inward; advance the smaller side.

## entry 70

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 74

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 75

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 78

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 79

- Greedy by end-time picks the most non-overlapping intervals.

## entry 80

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 83

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Walk both pointers from each end inward; advance the smaller side.

## entry 89

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

- StringBuilder: amortize allocation by doubling on grow.

## entry 91

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 92

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 95

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 97

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 98

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 99

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 100

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 101

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 102

- StringBuilder: amortize allocation by doubling on grow.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 107

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 115

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 118

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 125

- StringBuilder: amortize allocation by doubling on grow.

## entry 126

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 127

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 128

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 129

- Greedy by end-time picks the most non-overlapping intervals.

## entry 130

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 131

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 132

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 133

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 134

- Heap when you only need top-k; full sort is wasted work.

## entry 135

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 136

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 137

- Euler tour flattens a tree into an array for range-query LCA.

## entry 138

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 139

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 140

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 141

- Walk both pointers from each end inward; advance the smaller side.

## entry 142

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 143

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 144

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 145

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 146

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 147

- Heap when you only need top-k; full sort is wasted work.

## entry 148

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 149

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 150

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 151

- Greedy by end-time picks the most non-overlapping intervals.

## entry 152

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 153

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 155

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 158

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 159

- Euler tour flattens a tree into an array for range-query LCA.

## entry 160

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 161

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 162

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 164

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 165

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 166

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 167

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 168

- Greedy by end-time picks the most non-overlapping intervals.

## entry 169

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

- Euler tour flattens a tree into an array for range-query LCA.

## entry 171

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 172

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 173

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 174

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 177

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 178

- Heap when you only need top-k; full sort is wasted work.

## entry 179

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 180

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 181

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 182

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 183

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 184

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 187

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 188

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 189

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 190

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 192

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 193

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 194

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 195

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 196

- Stable sort matters when a secondary key was set in a prior pass.

## entry 197

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 198

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 199

- LIS via patience: each pile holds the smallest tail of length k.

## entry 200

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 201

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 202

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 203

- Splay tree: every access splays to the root; amortized O(log n).

## entry 204

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 205

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 206

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 207

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 208

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 209

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 210

- Splay tree: every access splays to the root; amortized O(log n).

## entry 211

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 212

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 213

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 214

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 215

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 216

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 217

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 218

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 219

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 220

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 221

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 222

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 223

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 224

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 225

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 226

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 227

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 228

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 229

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 230

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 231

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 232

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 233

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 234

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 235

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 237

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 238

- Splay tree: every access splays to the root; amortized O(log n).

## entry 239

- Walk both pointers from each end inward; advance the smaller side.

## entry 240

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 241

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 242

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 243

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 244

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 245

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 246

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 247

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 248

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 249

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 250

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 251

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 252

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 253

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 254

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 255

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 256

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 257

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 258

- Heap when you only need top-k; full sort is wasted work.

## entry 259

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 260

- Euler tour flattens a tree into an array for range-query LCA.

## entry 261

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 262

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 263

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 264

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 265

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 266

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 267

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 268

- Splay tree: every access splays to the root; amortized O(log n).

## entry 269

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 270

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 271

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 272

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 273

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 275

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 276

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 277

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 278

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 279

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 280

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 281

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 282

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 283

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 284

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 285

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 286

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 287

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 288

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 289

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 290

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 291

- Heap when you only need top-k; full sort is wasted work.

## entry 292

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 293

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 294

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 295

- StringBuilder: amortize allocation by doubling on grow.

## entry 296

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 297

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 299

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 300

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 301

- Heap when you only need top-k; full sort is wasted work.

## entry 302

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 303

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 304

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 306

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 307

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 308

- Walk both pointers from each end inward; advance the smaller side.

## entry 309

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 310

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 311

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 312

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 313

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 314

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 315

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 316

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 317

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 318

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 319

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 320

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 321

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 322

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 323

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 325

- Walk both pointers from each end inward; advance the smaller side.

## entry 326

- Stable sort matters when a secondary key was set in a prior pass.

## entry 327

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 328

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

- Euler tour flattens a tree into an array for range-query LCA.

## entry 330

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 331

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 332

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 333

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 334

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 335

- LIS via patience: each pile holds the smallest tail of length k.

## entry 336

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 337

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 338

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 339

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 340

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 341

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 342

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 343

- Euler tour flattens a tree into an array for range-query LCA.

## entry 344

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 345

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 346

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 347

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 348

- Euler tour flattens a tree into an array for range-query LCA.

## entry 349

- LIS via patience: each pile holds the smallest tail of length k.

## entry 350

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 351

- Heap when you only need top-k; full sort is wasted work.

## entry 352

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 353

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 354

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 355

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
