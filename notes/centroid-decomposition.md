# centroid-decomposition

## entry 1

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- Greedy by end-time picks the most non-overlapping intervals.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- Stable sort matters when a secondary key was set in a prior pass.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Monotonic stack pops while the new element violates the invariant.

## entry 20

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 21

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 22

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Walk both pointers from each end inward; advance the smaller side.

## entry 28

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 33

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Greedy by end-time picks the most non-overlapping intervals.

## entry 37

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 38

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 43

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

- Stable sort matters when a secondary key was set in a prior pass.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 52

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 53

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

- Monotonic stack pops while the new element violates the invariant.

## entry 55

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 57

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 58

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 64

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 67

- Euler tour flattens a tree into an array for range-query LCA.

## entry 68

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 69

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 70

- Euler tour flattens a tree into an array for range-query LCA.

## entry 71

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 72

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

- Heap when you only need top-k; full sort is wasted work.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 84

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

- Walk both pointers from each end inward; advance the smaller side.

## entry 86

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 87

- Splay tree: every access splays to the root; amortized O(log n).

## entry 88

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Greedy by end-time picks the most non-overlapping intervals.

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- LIS via patience: each pile holds the smallest tail of length k.

## entry 93

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 96

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 101

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 102

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 106

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 107

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 109

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 111

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 112

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 113

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 114

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 115

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 116

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 117

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 118

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 119

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 120

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 121

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 122

- Heap when you only need top-k; full sort is wasted work.

## entry 123

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 124

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 125

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 126

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 127

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 128

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 129

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 130

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 131

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 132

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 134

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 135

- Stable sort matters when a secondary key was set in a prior pass.

## entry 136

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 138

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 139

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 140

- Heap when you only need top-k; full sort is wasted work.

## entry 141

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 142

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 143

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 144

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 145

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 146

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 149

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 150

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 151

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 152

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 153

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 154

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 156

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 157

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 158

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 159

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 160

- Euler tour flattens a tree into an array for range-query LCA.

## entry 161

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 162

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 163

- Euler tour flattens a tree into an array for range-query LCA.

## entry 164

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 166

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 167

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 168

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 169

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 170

- Stable sort matters when a secondary key was set in a prior pass.

## entry 171

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 172

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 173

- Splay tree: every access splays to the root; amortized O(log n).

## entry 174

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 176

- Euler tour flattens a tree into an array for range-query LCA.

## entry 177

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 178

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 179

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 180

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 181

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 182

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 183

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

- Euler tour flattens a tree into an array for range-query LCA.

## entry 185

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 186

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 187

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 188

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 189

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 190

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 191

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 192

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 193

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 194

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 195

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 196

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 197

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 199

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 201

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 202

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 203

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 204

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 205

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 206

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 207

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 208

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 209

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 210

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 211

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 212

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 213

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 214

- Greedy by end-time picks the most non-overlapping intervals.

## entry 215

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 216

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 217

- StringBuilder: amortize allocation by doubling on grow.

## entry 218

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 220

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 222

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 223

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 224

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 225

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 226

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 227

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 228

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 229

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 230

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 232

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 233

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 234

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 235

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 236

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 237

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 238

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 239

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 240

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 241

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 242

- Splay tree: every access splays to the root; amortized O(log n).

## entry 243

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 244

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 245

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 246

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 247

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 248

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 249

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 250

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 251

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 252

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 253

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 255

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 256

- Heap when you only need top-k; full sort is wasted work.

## entry 257

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 258

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 259

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 260

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 261

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 262

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 263

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 264

- Heap when you only need top-k; full sort is wasted work.

## entry 265

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 266

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 267

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 268

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 269

- StringBuilder: amortize allocation by doubling on grow.

## entry 270

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 271

- Splay tree: every access splays to the root; amortized O(log n).

## entry 272

- Splay tree: every access splays to the root; amortized O(log n).

## entry 273

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 274

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 275

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 276

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 277

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 278

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 279

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 280

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 281

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 282

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 283

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 284

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 285

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 286

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 287

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 288

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 289

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 290

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 291

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 292

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 293

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 294

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 295

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

- LIS via patience: each pile holds the smallest tail of length k.

## entry 297

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 298

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 299

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 300

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 301

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 302

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 303

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 304

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 305

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 306

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 307

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 308

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 309

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 310

- Splay tree: every access splays to the root; amortized O(log n).

## entry 311

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 312

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 313

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 314

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 315

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 316

- Monotonic stack pops while the new element violates the invariant.

## entry 317

- StringBuilder: amortize allocation by doubling on grow.

## entry 318

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 319

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 320

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 321

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 322

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 323

- Euler tour flattens a tree into an array for range-query LCA.

## entry 324

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 325

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 326

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 327

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 328

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 329

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 330

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 331

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 332

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 333

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 334

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 335

- Greedy by end-time picks the most non-overlapping intervals.

## entry 336

- Monotonic stack pops while the new element violates the invariant.

## entry 337

- LIS via patience: each pile holds the smallest tail of length k.

## entry 338

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 339

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 340

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 341

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 342

- Splay tree: every access splays to the root; amortized O(log n).

## entry 343

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 344

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 345

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 346

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 347

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 348

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 349

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 350

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 351

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 352

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 353

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 354

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 355

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 356

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 357

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 358

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 359

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 360

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 361

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 362

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 363

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 364

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 365

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 366

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 367

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 369

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 370

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 371

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 372

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 373

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 374

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 375

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 376

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 377

- Stable sort matters when a secondary key was set in a prior pass.

## entry 378

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 379

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 380

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 381

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 382

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 383

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 384

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 385

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 386

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 387

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 388

- k-d tree: median-split each axis; nearest-neighbor average O(log n).
