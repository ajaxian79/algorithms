# knapsack-unbounded

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Stable sort matters when a secondary key was set in a prior pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Greedy by end-time picks the most non-overlapping intervals.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 7

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 8

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 9

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 11

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 15

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 16

- Walk both pointers from each end inward; advance the smaller side.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Heap when you only need top-k; full sort is wasted work.

## entry 19

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 20

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 25

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 34

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 35

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 36

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 40

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

- Monotonic stack pops while the new element violates the invariant.

## entry 42

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 43

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 44

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

- Walk both pointers from each end inward; advance the smaller side.

## entry 46

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 48

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 49

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 50

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 51

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 52

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 53

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 54

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 55

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 56

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 57

- Heap when you only need top-k; full sort is wasted work.

## entry 58

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 62

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 63

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 64

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 65

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 66

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 69

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 70

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 71

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 73

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 74

- Splay tree: every access splays to the root; amortized O(log n).

## entry 75

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 76

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 77

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 78

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 79

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

- Greedy by end-time picks the most non-overlapping intervals.

## entry 81

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 82

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 83

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 84

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 88

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 89

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 93

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 94

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 95

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 96

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 98

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 99

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 100

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 101

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 103

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 104

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 107

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 108

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 109

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 112

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 113

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 115

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 116

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 117

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 118

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 119

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 120

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 121

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 124

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 125

- Monotonic stack pops while the new element violates the invariant.

## entry 126

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 127

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 128

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 129

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 130

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 131

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 132

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 133

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 134

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 135

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 136

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 137

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 138

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 139

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 140

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 141

- Greedy by end-time picks the most non-overlapping intervals.

## entry 142

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 143

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 144

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 145

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 146

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 148

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 149

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 150

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 151

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 152

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 153

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 154

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 155

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 156

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 157

- Walk both pointers from each end inward; advance the smaller side.

## entry 158

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 159

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 160

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 161

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 162

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 163

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 164

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 165

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 166

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 167

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 168

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 169

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 170

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 171

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 172

- Euler tour flattens a tree into an array for range-query LCA.

## entry 173

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 174

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 175

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 176

- Monotonic stack pops while the new element violates the invariant.

## entry 177

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 178

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 179

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 180

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 181

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 182

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 183

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 184

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 185

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 186

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 187

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 188

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 189

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 190

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 191

- StringBuilder: amortize allocation by doubling on grow.

## entry 192

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 193

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 195

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 196

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 197

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 199

- Walk both pointers from each end inward; advance the smaller side.

## entry 200

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 201

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 202

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 203

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 204

- Euler tour flattens a tree into an array for range-query LCA.

## entry 205

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 206

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 207

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 208

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 209

- Walk both pointers from each end inward; advance the smaller side.

## entry 210

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 211

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 212

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 213

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 214

- Walk both pointers from each end inward; advance the smaller side.

## entry 215

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 216

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 217

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 218

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 219

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 220

- Heap when you only need top-k; full sort is wasted work.

## entry 221

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 222

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 223

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 224

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 225

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 226

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 227

- Greedy by end-time picks the most non-overlapping intervals.

## entry 228

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 229

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 230

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 231

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 232

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 233

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 234

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 235

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 236

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 237

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 238

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 239

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 240

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 241

- Monotonic stack pops while the new element violates the invariant.

## entry 242

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 243

- LIS via patience: each pile holds the smallest tail of length k.

## entry 244

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 245

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 246

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 247

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 248

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 249

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 250

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 251

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 252

- Splay tree: every access splays to the root; amortized O(log n).

## entry 253

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 254

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 255

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 256

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 257

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 258

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 259

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 260

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 261

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 263

- LIS via patience: each pile holds the smallest tail of length k.

## entry 264

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 265

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 266

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 267

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 268

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 269

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 270

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 271

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 272

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 273

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 274

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 275

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 276

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 277

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 278

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 279

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 280

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 282

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 283

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 284

- Euler tour flattens a tree into an array for range-query LCA.

## entry 285

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 286

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 287

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 288

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 289

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 291

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 292

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 293

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 294

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 295

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 297

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 298

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 299

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 300

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 301

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 302

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 303

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 304

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 305

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 306

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 307

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 308

- Greedy by end-time picks the most non-overlapping intervals.

## entry 309

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 310

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 311

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 312

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 313

- Monotonic stack pops while the new element violates the invariant.

## entry 314

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 315

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 316

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 317

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 318

- LIS via patience: each pile holds the smallest tail of length k.

## entry 319

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 320

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 321

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 322

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 323

- Stable sort matters when a secondary key was set in a prior pass.

## entry 324

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 325

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 326

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 327

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 328

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 330

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 331

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 332

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 333

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 334

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 335

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 336

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 337

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 338

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 339

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 340

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 341

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 342

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 343

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 344

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 345

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 346

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 347

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 348

- Greedy by end-time picks the most non-overlapping intervals.

## entry 349

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 350

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 351

- Monotonic stack pops while the new element violates the invariant.

## entry 352

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 353

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 354

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 355

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 356

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 357

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 358

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 360

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 361

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 362

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 363

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 364

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 365

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 366

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 367

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 368

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 369

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 370

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 371

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 372

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 373

- Heap when you only need top-k; full sort is wasted work.

## entry 374

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 375

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 376

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 377

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 378

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 379

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 380

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 381

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 382

- StringBuilder: amortize allocation by doubling on grow.

## entry 383

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 384

- Monotonic stack pops while the new element violates the invariant.

## entry 385

- Walk both pointers from each end inward; advance the smaller side.

## entry 386

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 387

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 388

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 389

- Walk both pointers from each end inward; advance the smaller side.

## entry 390

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 391

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 392

- LIS via patience: each pile holds the smallest tail of length k.

## entry 393

- Splay tree: every access splays to the root; amortized O(log n).

## entry 394

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 395

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 396

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 397

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 398

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 399

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 400

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 401

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 402

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 403

- Stable sort matters when a secondary key was set in a prior pass.

## entry 404

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 405

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 406

- Greedy by end-time picks the most non-overlapping intervals.

## entry 407

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 408

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 409

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 410

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 411

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 412

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 413

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 414

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 415

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 416

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 417

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 418

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 419

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 420

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 421

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 422

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 423

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 424

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 425

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 426

- Splay tree: every access splays to the root; amortized O(log n).

## entry 427

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 428

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 429

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 430

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 431

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 432

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 433

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 434

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 435

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 436

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 437

- Greedy by end-time picks the most non-overlapping intervals.

## entry 438

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 439

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 440

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 441

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 442

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 443

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 444

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 445

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 446

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 447

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 448

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 449

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 450

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 451

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 452

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 453

- StringBuilder: amortize allocation by doubling on grow.

## entry 454

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 455

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 456

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 457

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 458

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 459

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 460

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 461

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 462

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 463

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 464

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 465

- Heap when you only need top-k; full sort is wasted work.

## entry 466

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 467

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 468

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 469

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 470

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 471

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 472

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 473

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 474

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 475

- Euler tour flattens a tree into an array for range-query LCA.

## entry 476

- Greedy by end-time picks the most non-overlapping intervals.

## entry 477

- StringBuilder: amortize allocation by doubling on grow.

## entry 478

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 479

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 481

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 482

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 483

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 484

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 485

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 486

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 487

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 488

- StringBuilder: amortize allocation by doubling on grow.

## entry 489

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 490

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 491

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 492

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 493

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 494

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 495

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 496

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 497

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 498

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 499

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 500

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 501

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 502

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 503

- StringBuilder: amortize allocation by doubling on grow.

## entry 504

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 505

- StringBuilder: amortize allocation by doubling on grow.

## entry 506

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 507

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 508

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 509

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 510

- StringBuilder: amortize allocation by doubling on grow.

## entry 511

- Heap when you only need top-k; full sort is wasted work.

## entry 512

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 513

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 514

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 515

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
