# sparse-table

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Monotonic stack pops while the new element violates the invariant.

## entry 16

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- StringBuilder: amortize allocation by doubling on grow.

## entry 25

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 27

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 29

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 30

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 37

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 43

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 44

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 46

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 47

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 48

- Heap when you only need top-k; full sort is wasted work.

## entry 49

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 50

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 52

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 53

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 55

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 56

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 59

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 60

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Greedy by end-time picks the most non-overlapping intervals.

## entry 63

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 66

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 69

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 71

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 75

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 76

- Monotonic stack pops while the new element violates the invariant.

## entry 77

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 78

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 79

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 80

- Euler tour flattens a tree into an array for range-query LCA.

## entry 81

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 87

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 94

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 95

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 96

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 98

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 100

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 101

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 102

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 103

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 106

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 109

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 110

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 111

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 112

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 113

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 114

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 115

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 116

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 117

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 118

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 121

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 122

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 123

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 124

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 125

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 127

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 128

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 129

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 131

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 132

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 133

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 134

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 136

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 137

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 138

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 139

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 142

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 144

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 145

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 146

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 147

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 148

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 149

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 150

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 151

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 152

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 153

- Heap when you only need top-k; full sort is wasted work.

## entry 154

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 155

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 156

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 158

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 159

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 160

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 161

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 163

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 164

- StringBuilder: amortize allocation by doubling on grow.

## entry 165

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 166

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 167

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 168

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 169

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 170

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 171

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 172

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 173

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 174

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 175

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 176

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 177

- Greedy by end-time picks the most non-overlapping intervals.

## entry 178

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 181

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 183

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 184

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 185

- Stable sort matters when a secondary key was set in a prior pass.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 188

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 189

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 190

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 191

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 192

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 193

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 195

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 197

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 198

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 199

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 200

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 201

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 202

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 203

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 204

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

- Monotonic stack pops while the new element violates the invariant.

## entry 206

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 207

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 208

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 209

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 211

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 212

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 213

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 214

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 215

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 216

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 217

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 218

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 219

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 220

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 222

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 223

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 224

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 225

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 226

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 227

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 228

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 229

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 230

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 231

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 232

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 233

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 234

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 235

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 236

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 237

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 238

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 239

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 240

- StringBuilder: amortize allocation by doubling on grow.

## entry 241

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 242

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 243

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 244

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 245

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 246

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 247

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 248

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 249

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 250

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 251

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 252

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 253

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 254

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 255

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 256

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 257

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 258

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 259

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 260

- Splay tree: every access splays to the root; amortized O(log n).

## entry 261

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 262

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 263

- StringBuilder: amortize allocation by doubling on grow.

## entry 264

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 265

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 266

- Greedy by end-time picks the most non-overlapping intervals.

## entry 267

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 268

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 269

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 270

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 271

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 272

- Splay tree: every access splays to the root; amortized O(log n).

## entry 273

- Greedy by end-time picks the most non-overlapping intervals.

## entry 274

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 275

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 276

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 277

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 278

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 279

- Monotonic stack pops while the new element violates the invariant.

## entry 280

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 281

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 282

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 283

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 284

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 286

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 287

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 288

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 290

- StringBuilder: amortize allocation by doubling on grow.

## entry 291

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 292

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 293

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 294

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 295

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 296

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 297

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 299

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 300

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 301

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 302

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 303

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 304

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 305

- Monotonic stack pops while the new element violates the invariant.

## entry 306

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 307

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 308

- Splay tree: every access splays to the root; amortized O(log n).

## entry 309

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 310

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 311

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 312

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 313

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 315

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 316

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 317

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 318

- LIS via patience: each pile holds the smallest tail of length k.

## entry 319

- Euler tour flattens a tree into an array for range-query LCA.

## entry 320

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 321

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 322

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 323

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 324

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 325

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 326

- Walk both pointers from each end inward; advance the smaller side.

## entry 327

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 328

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 329

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 330

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 331

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 332

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 333

- LIS via patience: each pile holds the smallest tail of length k.

## entry 334

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 335

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 336

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 337

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 338

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 339

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 340

- StringBuilder: amortize allocation by doubling on grow.

## entry 341

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 342

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 343

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 344

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 345

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 346

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 347

- Greedy by end-time picks the most non-overlapping intervals.

## entry 348

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 349

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 350

- Stable sort matters when a secondary key was set in a prior pass.

## entry 351

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 352

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 353

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 354

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 355

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 356

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 357

- Walk both pointers from each end inward; advance the smaller side.

## entry 358

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 359

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 360

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 361

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 363

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 364

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 365

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 366

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 367

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 368

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 369

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 370

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 371

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 372

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 373

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 374

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 375

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 376

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 377

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 378

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 379

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 380

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 381

- Splay tree: every access splays to the root; amortized O(log n).

## entry 382

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 383

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 384

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 385

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 386

- Monotonic stack pops while the new element violates the invariant.

## entry 387

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 388

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 389

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 390

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 391

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 392

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 393

- Monotonic stack pops while the new element violates the invariant.

## entry 394

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 395

- Euler tour flattens a tree into an array for range-query LCA.

## entry 396

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 397

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 398

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 399

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 400

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 401

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 402

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 403

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 404

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 405

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 406

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 407

- Stable sort matters when a secondary key was set in a prior pass.

## entry 408

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 409

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 410

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 411

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 412

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 413

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 414

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 415

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 416

- Euler tour flattens a tree into an array for range-query LCA.

## entry 417

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 418

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 419

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 420

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 421

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 422

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 423

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 424

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 425

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 426

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 427

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 428

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 430

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 431

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 432

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 433

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 434

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 435

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 436

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 437

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 438

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 439

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 440

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 441

- StringBuilder: amortize allocation by doubling on grow.

## entry 442

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 443

- Splay tree: every access splays to the root; amortized O(log n).

## entry 444

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 445

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 446

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 447

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 448

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 449

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 450

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 451

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 452

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 453

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 454

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 455

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 456

- StringBuilder: amortize allocation by doubling on grow.

## entry 457

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 458

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 459

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 460

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 461

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 462

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 463

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 464

- Greedy by end-time picks the most non-overlapping intervals.

## entry 465

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 466

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 467

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 468

- Walk both pointers from each end inward; advance the smaller side.

## entry 469

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 470

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 471

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 472

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 473

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 474

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 475

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 476

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 477

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 478

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 479

- StringBuilder: amortize allocation by doubling on grow.

## entry 480

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 481

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 482

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 483

- LIS via patience: each pile holds the smallest tail of length k.

## entry 484

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 485

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 486

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 487

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 488

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 489

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 490

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 491

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 492

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 493

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 494

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 495

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 496

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 497

- StringBuilder: amortize allocation by doubling on grow.

## entry 498

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 499

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 500

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 501

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 502

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 503

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 504

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 505

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 506

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 507

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 508

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 509

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 510

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 511

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 512

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 513

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 514

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 515

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 516

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 517

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 518

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 519

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 520

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 521

- Greedy by end-time picks the most non-overlapping intervals.

## entry 522

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 523

- Monotonic stack pops while the new element violates the invariant.

## entry 524

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 525

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 526

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 527

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 528

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 529

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 530

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 531

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 532

- Stable sort matters when a secondary key was set in a prior pass.

## entry 533

- Splay tree: every access splays to the root; amortized O(log n).

## entry 534

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 535

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 536

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 537

- LIS via patience: each pile holds the smallest tail of length k.

## entry 538

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 539

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 540

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 541

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 542

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 543

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 544

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 545

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 546

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 547

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 548

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 549

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 550

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 551

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 552

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 553

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 554

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 555

- Heap when you only need top-k; full sort is wasted work.

## entry 556

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 557

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 558

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 559

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 560

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 561

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 562

- StringBuilder: amortize allocation by doubling on grow.

## entry 563

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 564

- LIS via patience: each pile holds the smallest tail of length k.

## entry 565

- Euler tour flattens a tree into an array for range-query LCA.

## entry 566

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 567

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 568

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 569

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 570

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 571

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 572

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 573

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 574

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 575

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 576

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 577

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 578

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 579

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 580

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 581

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 582

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 583

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 584

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 585

- Walk both pointers from each end inward; advance the smaller side.

## entry 586

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 587

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 588

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 589

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 590

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 591

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 592

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 593

- LIS via patience: each pile holds the smallest tail of length k.

## entry 594

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 595

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 596

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
