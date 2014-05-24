# z-algorithm

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Greedy by end-time picks the most non-overlapping intervals.

- Stable sort matters when a secondary key was set in a prior pass.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Heap when you only need top-k; full sort is wasted work.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 8

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 9

- Heap when you only need top-k; full sort is wasted work.

## entry 10

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 11

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 14

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 17

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 19

- Greedy by end-time picks the most non-overlapping intervals.

## entry 20

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 21

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 28

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 32

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 33

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 34

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 35

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 36

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 37

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 38

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 39

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

- LIS via patience: each pile holds the smallest tail of length k.

## entry 43

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

- LIS via patience: each pile holds the smallest tail of length k.

## entry 45

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 47

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 49

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 50

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 51

- Monotonic stack pops while the new element violates the invariant.

## entry 52

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 53

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 54

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 57

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 58

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Splay tree: every access splays to the root; amortized O(log n).

## entry 61

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 62

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 63

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 64

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 66

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 67

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 69

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 70

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 71

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 72

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 73

- Heap when you only need top-k; full sort is wasted work.

## entry 74

- Greedy by end-time picks the most non-overlapping intervals.

## entry 75

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 77

- Stable sort matters when a secondary key was set in a prior pass.

## entry 78

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 79

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 81

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 83

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 87

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 89

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 96

- Splay tree: every access splays to the root; amortized O(log n).

## entry 97

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 98

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 100

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 101

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 102

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 103

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 104

- Heap when you only need top-k; full sort is wasted work.

## entry 105

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 106

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 107

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 108

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 109

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 110

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 111

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 114

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 115

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 116

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 117

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 119

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 123

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 124

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 125

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 126

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 127

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 128

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 129

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 130

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 131

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 132

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 133

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 134

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 135

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 136

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 137

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 138

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 139

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 141

- Euler tour flattens a tree into an array for range-query LCA.

## entry 142

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 143

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 144

- Euler tour flattens a tree into an array for range-query LCA.

## entry 145

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 146

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 147

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 148

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 149

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 150

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 151

- Euler tour flattens a tree into an array for range-query LCA.

## entry 152

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 153

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 154

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 155

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 156

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 157

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 158

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 159

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 160

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 161

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 162

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 163

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 164

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 165

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 166

- Greedy by end-time picks the most non-overlapping intervals.

## entry 167

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 169

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 170

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 171

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 172

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 173

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 174

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 175

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 176

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 177

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 178

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 179

- LIS via patience: each pile holds the smallest tail of length k.

## entry 180

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 181

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 182

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 183

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 184

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 185

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 186

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 187

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 188

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 189

- Stable sort matters when a secondary key was set in a prior pass.

## entry 190

- Splay tree: every access splays to the root; amortized O(log n).

## entry 191

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 192

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 193

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 194

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 195

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 196

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 197

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 198

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 199

- Walk both pointers from each end inward; advance the smaller side.

## entry 200

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 201

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 202

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 203

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 205

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 206

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 207

- StringBuilder: amortize allocation by doubling on grow.

## entry 208

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 209

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 210

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 211

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 212

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 213

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 214

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 215

- LIS via patience: each pile holds the smallest tail of length k.

## entry 216

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 217

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 218

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 219

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 220

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 221

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 222

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 223

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 224

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 225

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 226

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 227

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 228

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 229

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 230

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 231

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 232

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 233

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 234

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 235

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 236

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 237

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 238

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 239

- Walk both pointers from each end inward; advance the smaller side.

## entry 240

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 241

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 242

- Heap when you only need top-k; full sort is wasted work.

## entry 243

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 244

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 245

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 246

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 247

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 248

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 249

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 250

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 251

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 252

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 253

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 254

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 255

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 256

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 257

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 258

- Stable sort matters when a secondary key was set in a prior pass.

## entry 259

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 260

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 261

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 262

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 263

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 264

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 265

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 266

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 267

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 268

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 269

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 270

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 271

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 272

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 273

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 274

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 275

- Walk both pointers from each end inward; advance the smaller side.

## entry 276

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 277

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 278

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 279

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 280

- Heap when you only need top-k; full sort is wasted work.

## entry 281

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 282

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 283

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 284

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 285

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 286

- Greedy by end-time picks the most non-overlapping intervals.

## entry 287

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 288

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 289

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 290

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 291

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 292

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 293

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 294

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 295

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 296

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 297

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 298

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 299

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 300

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 301

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 302

- Monotonic stack pops while the new element violates the invariant.

## entry 303

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 304

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 305

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 306

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 307

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 308

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 309

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 310

- Monotonic stack pops while the new element violates the invariant.

## entry 311

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 312

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 313

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 314

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 315

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 316

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 317

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 318

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 319

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 320

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 321

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 322

- Euler tour flattens a tree into an array for range-query LCA.

## entry 323

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 324

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 325

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 326

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 327

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 328

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 329

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 330

- LIS via patience: each pile holds the smallest tail of length k.

## entry 331

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 332

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 333

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 334

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 335

- Monotonic stack pops while the new element violates the invariant.

## entry 336

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 337

- Walk both pointers from each end inward; advance the smaller side.

## entry 338

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 339

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 340

- Monotonic stack pops while the new element violates the invariant.

## entry 341

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 342

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 343

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 344

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 345

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 346

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 347

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 349

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 350

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 351

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 352

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 353

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 354

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 355

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 356

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 357

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 358

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 359

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 360

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 361

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 363

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 364

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 365

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 366

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 367

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 368

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 369

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 370

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 371

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 372

- Euler tour flattens a tree into an array for range-query LCA.

## entry 373

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 374

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 375

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 376

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 377

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 378

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 379

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 380

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 381

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 382

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 383

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 384

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 385

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 386

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 387

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 388

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 389

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 390

- Splay tree: every access splays to the root; amortized O(log n).

## entry 391

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 392

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 393

- Monotonic stack pops while the new element violates the invariant.

## entry 394

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 395

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 396

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 397

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 398

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 399

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 401

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 402

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 403

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 404

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 405

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 406

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 407

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 408

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 409

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 410

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 411

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 412

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 413

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 414

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 415

- Greedy by end-time picks the most non-overlapping intervals.

## entry 416

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 417

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 418

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 419

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 420

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 421

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 422

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 423

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 424

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 425

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 426

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 427

- Euler tour flattens a tree into an array for range-query LCA.

## entry 428

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 429

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 430

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 431

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 432

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 433

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 434

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 435

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 436

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 437

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 438

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 439

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 440

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 441

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 442

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 443

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 444

- Euler tour flattens a tree into an array for range-query LCA.

## entry 445

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 446

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 447

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 448

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 449

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 450

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 451

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 452

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 453

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 454

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 455

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 456

- Euler tour flattens a tree into an array for range-query LCA.

## entry 457

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 458

- Stable sort matters when a secondary key was set in a prior pass.

## entry 459

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 460

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 461

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 462

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 463

- Heap when you only need top-k; full sort is wasted work.

## entry 464

- Euler tour flattens a tree into an array for range-query LCA.

## entry 465

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 466

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 467

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 468

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 469

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 470

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 471

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 472

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 473

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 474

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 475

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 476

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 477

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 478

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 479

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 481

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 482

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 483

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 484

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 485

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 486

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 487

- Splay tree: every access splays to the root; amortized O(log n).

## entry 488

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 489

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 490

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 491

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 492

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 493

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 494

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 495

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 496

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 497

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 498

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 499

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 500

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 501

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 502

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 503

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 504

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 505

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 506

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 507

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 508

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 509

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 510

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 511

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 512

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 513

- Stable sort matters when a secondary key was set in a prior pass.

## entry 514

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 515

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 516

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 517

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 518

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 519

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 520

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 521

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 522

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 523

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 524

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 525

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 526

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 527

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 528

- Greedy by end-time picks the most non-overlapping intervals.

## entry 529

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 530

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 531

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 532

- Heap when you only need top-k; full sort is wasted work.

## entry 533

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 534

- StringBuilder: amortize allocation by doubling on grow.

## entry 535

- Splay tree: every access splays to the root; amortized O(log n).

## entry 536

- LIS via patience: each pile holds the smallest tail of length k.

## entry 537

- Walk both pointers from each end inward; advance the smaller side.

## entry 538

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 539

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 540

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 541

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 542

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 543

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 544

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 545

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 546

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 547

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 548

- Monotonic stack pops while the new element violates the invariant.

## entry 549

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 550

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 551

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 552

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 553

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 554

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 555

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 556

- Greedy by end-time picks the most non-overlapping intervals.

## entry 557

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 558

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 559

- Greedy by end-time picks the most non-overlapping intervals.

## entry 560

- LIS via patience: each pile holds the smallest tail of length k.

## entry 561

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 562

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 563

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 564

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 565

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 566

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 567

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 568

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 569

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 570

- Heap when you only need top-k; full sort is wasted work.

## entry 571

- Euler tour flattens a tree into an array for range-query LCA.

## entry 572

- Tree DP: post-order DFS lets children inform the parent in one pass.
