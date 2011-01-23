# robin-hood

## entry 1

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 7

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 9

- Euler tour flattens a tree into an array for range-query LCA.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Monotonic stack pops while the new element violates the invariant.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 18

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 19

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 20

- Walk both pointers from each end inward; advance the smaller side.

## entry 21

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 22

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.

## entry 24

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 27

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 28

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 36

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

- Greedy by end-time picks the most non-overlapping intervals.

## entry 40

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 41

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 43

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 44

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 45

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 48

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 54

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 55

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 56

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 57

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 61

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 62

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 63

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 66

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- StringBuilder: amortize allocation by doubling on grow.

## entry 76

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 77

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- StringBuilder: amortize allocation by doubling on grow.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 85

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 91

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 92

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 94

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 95

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 103

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 104

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 105

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 106

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 110

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 111

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 112

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 113

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 114

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 115

- LIS via patience: each pile holds the smallest tail of length k.

## entry 116

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 117

- Stable sort matters when a secondary key was set in a prior pass.

## entry 118

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 119

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 123

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 124

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 125

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 126

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 127

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 128

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 129

- Euler tour flattens a tree into an array for range-query LCA.

## entry 130

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 131

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 132

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 133

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 134

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 136

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 137

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 138

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 139

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 140

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 141

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 142

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 143

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 144

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 145

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 146

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 147

- StringBuilder: amortize allocation by doubling on grow.

## entry 148

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 149

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 150

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 151

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 152

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 153

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 154

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 155

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 156

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 157

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 158

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 159

- Euler tour flattens a tree into an array for range-query LCA.

## entry 160

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 161

- Stable sort matters when a secondary key was set in a prior pass.

## entry 162

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 163

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 165

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 166

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 167

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 168

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 169

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 170

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 172

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 173

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 174

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 175

- Greedy by end-time picks the most non-overlapping intervals.

## entry 176

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 177

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 178

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 185

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 186

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 187

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 188

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 189

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 190

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 191

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 192

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 193

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 194

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 195

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 196

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 197

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 198

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 199

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 200

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 201

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 202

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 203

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 204

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 205

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 206

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 207

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 208

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 209

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 210

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 211

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 212

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 213

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 214

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 215

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 216

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 217

- LIS via patience: each pile holds the smallest tail of length k.

## entry 218

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 219

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 220

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 221

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 222

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 223

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

- Stable sort matters when a secondary key was set in a prior pass.

## entry 225

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 226

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 227

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 228

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 229

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 230

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 231

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 232

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 233

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 234

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 235

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 236

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 237

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 238

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 239

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 240

- Stable sort matters when a secondary key was set in a prior pass.

## entry 241

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 242

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 243

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 244

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 245

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 246

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 247

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 248

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 249

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 250

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 251

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 252

- LIS via patience: each pile holds the smallest tail of length k.

## entry 253

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 254

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 255

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 256

- Walk both pointers from each end inward; advance the smaller side.

## entry 257

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 258

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 259

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 260

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 261

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 262

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 263

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 264

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 265

- StringBuilder: amortize allocation by doubling on grow.

## entry 266

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 267

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 268

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 269

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 270

- Heap when you only need top-k; full sort is wasted work.

## entry 271

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 272

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 273

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 274

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 275

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 276

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 277

- LIS via patience: each pile holds the smallest tail of length k.

## entry 278

- LIS via patience: each pile holds the smallest tail of length k.

## entry 279

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 280

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 281

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

- Splay tree: every access splays to the root; amortized O(log n).

## entry 283

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 284

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 285

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 286

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 287

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 288

- Splay tree: every access splays to the root; amortized O(log n).

## entry 289

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 290

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 291

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 292

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 293

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 294

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 295

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 296

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 297

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 298

- Greedy by end-time picks the most non-overlapping intervals.

## entry 299

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 300

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 301

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 302

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 303

- StringBuilder: amortize allocation by doubling on grow.

## entry 304

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 305

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 306

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 307

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 308

- Walk both pointers from each end inward; advance the smaller side.

## entry 309

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 310

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 311

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 312

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 313

- Splay tree: every access splays to the root; amortized O(log n).

## entry 314

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 315

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 316

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 317

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 318

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 319

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 320

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 321

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 322

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 323

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 324

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 325

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 326

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 327

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 328

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 329

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 330

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 331

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 332

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 333

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 334

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 335

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 336

- Euler tour flattens a tree into an array for range-query LCA.

## entry 337

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 338

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 339

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 340

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 341

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 342

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 343

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 344

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 345

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 346

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 347

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 349

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 350

- Greedy by end-time picks the most non-overlapping intervals.

## entry 351

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 352

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 353

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 354

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 355

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 356

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 357

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 358

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 359

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 360

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 361

- LIS via patience: each pile holds the smallest tail of length k.

## entry 362

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 363

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 364

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 365

- Splay tree: every access splays to the root; amortized O(log n).

## entry 366

- LIS via patience: each pile holds the smallest tail of length k.

## entry 367

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 368

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 369

- Walk both pointers from each end inward; advance the smaller side.

## entry 370

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 371

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 372

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 373

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 374

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 375

- Walk both pointers from each end inward; advance the smaller side.

## entry 376

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 377

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 378

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

- Heap when you only need top-k; full sort is wasted work.

## entry 380

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 381

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 382

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 383

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 384

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 385

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 386

- Euler tour flattens a tree into an array for range-query LCA.

## entry 387

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 388

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 389

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 390

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 391

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 392

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 393

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 394

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 395

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 396

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 397

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 398

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 399

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 400

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 401

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 402

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 403

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 404

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 405

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 406

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 407

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 408

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 409

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 410

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 411

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 412

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 413

- Walk both pointers from each end inward; advance the smaller side.

## entry 414

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 415

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 416

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 417

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 418

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 419

- Heap when you only need top-k; full sort is wasted work.

## entry 420

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 421

- Greedy by end-time picks the most non-overlapping intervals.

## entry 422

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 423

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 424

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 425

- Greedy by end-time picks the most non-overlapping intervals.

## entry 426

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 427

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 428

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 429

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 430

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 431

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 432

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 433

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 434

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 435

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 436

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 437

- Walk both pointers from each end inward; advance the smaller side.

## entry 438

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 439

- StringBuilder: amortize allocation by doubling on grow.

## entry 440

- Heap when you only need top-k; full sort is wasted work.

## entry 441

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 442

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 443

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 444

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 445

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 446

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 447

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 448

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 449

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 450

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 451

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 452

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 453

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 454

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 455

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 456

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 457

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 458

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 459

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 460

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 461

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 462

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 463

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 464

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 465

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 466

- LIS via patience: each pile holds the smallest tail of length k.

## entry 467

- StringBuilder: amortize allocation by doubling on grow.

## entry 468

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 469

- StringBuilder: amortize allocation by doubling on grow.

## entry 470

- StringBuilder: amortize allocation by doubling on grow.

## entry 471

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 472

- Walk both pointers from each end inward; advance the smaller side.

## entry 473

- Heap when you only need top-k; full sort is wasted work.

## entry 474

- Walk both pointers from each end inward; advance the smaller side.

## entry 475

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 476

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 477

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 478

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 480

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 481

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 482

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 483

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 484

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 485

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 486

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 487

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 488

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 489

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 490

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 491

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 492

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 493

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 494

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 495

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 496

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 497

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 498

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 499

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 500

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 501

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 502

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 503

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 504

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 505

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 506

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 507

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 508

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 509

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 510

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 511

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 512

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 513

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 514

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 515

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 516

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 517

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 518

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 519

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 520

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 521

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 522

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 523

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 524

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 525

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 526

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 527

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 528

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 529

- Heap when you only need top-k; full sort is wasted work.

## entry 530

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 531

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 532

- Monotonic stack pops while the new element violates the invariant.

## entry 533

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 534

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 535

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 536

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 537

- LIS via patience: each pile holds the smallest tail of length k.

## entry 538

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 539

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 540

- LIS via patience: each pile holds the smallest tail of length k.

## entry 541

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 542

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 543

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 544

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 545

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 546

- Monotonic stack pops while the new element violates the invariant.

## entry 547

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 548

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 549

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 550

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 551

- StringBuilder: amortize allocation by doubling on grow.

## entry 552

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 553

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 554

- StringBuilder: amortize allocation by doubling on grow.

## entry 555

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 556

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 557

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 558

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 559

- Stable sort matters when a secondary key was set in a prior pass.

## entry 560

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 561

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 562

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 563

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 564

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 565

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 566

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 567

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 568

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 569

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 570

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 571

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 572

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 573

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 574

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 575

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 576

- Splay tree: every access splays to the root; amortized O(log n).

## entry 577

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 578

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 579

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 580

- Monotonic stack pops while the new element violates the invariant.

## entry 581

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 582

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 583

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 584

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 585

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 586

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 587

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 588

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 589

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 590

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 591

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 592

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 593

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 594

- Euler tour flattens a tree into an array for range-query LCA.

## entry 595

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 596

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 597

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 598

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 599

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 600

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 601

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 602

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 603

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 604

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 605

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 606

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 607

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 608

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 609

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 610

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 611

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 612

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 613

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 614

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 615

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 616

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 617

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 618

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 619

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 620

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 621

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 622

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 623

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 624

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 625

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 626

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 627

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 628

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 629

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 630

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 631

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 632

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 633

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 634

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 635

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 636

- Euler tour flattens a tree into an array for range-query LCA.

## entry 637

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 638

- Greedy by end-time picks the most non-overlapping intervals.

## entry 639

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 640

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 641

- Heap when you only need top-k; full sort is wasted work.

## entry 642

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 643

- StringBuilder: amortize allocation by doubling on grow.

## entry 644

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 645

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 646

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 647

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 648

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 649

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 650

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 651

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 652

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 653

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 654

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 655

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 656

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 657

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 658

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 659

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 660

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 661

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 662

- Splay tree: every access splays to the root; amortized O(log n).

## entry 663

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 664

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 665

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 666

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 667

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 668

- Heap when you only need top-k; full sort is wasted work.

## entry 669

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 670

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 671

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 672

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 673

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 674

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 675

- Interval tree: stores intervals on the median; query traverses O(log n) levels.
