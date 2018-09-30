# intervals-merge

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Monotonic stack pops while the new element violates the invariant.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Greedy by end-time picks the most non-overlapping intervals.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Heap when you only need top-k; full sort is wasted work.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 10

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 11

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Walk both pointers from each end inward; advance the smaller side.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 26

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 41

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 42

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Greedy by end-time picks the most non-overlapping intervals.

## entry 45

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 46

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- StringBuilder: amortize allocation by doubling on grow.

## entry 55

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 56

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 57

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 58

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 63

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 64

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 70

- Splay tree: every access splays to the root; amortized O(log n).

## entry 71

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 73

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 74

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 75

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 76

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 77

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 81

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 82

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 83

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 85

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 86

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 88

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 90

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 92

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 93

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 96

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 97

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 98

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 99

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 102

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 106

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 109

- Heap when you only need top-k; full sort is wasted work.

## entry 110

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 111

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 112

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 114

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 115

- Splay tree: every access splays to the root; amortized O(log n).

## entry 116

- Euler tour flattens a tree into an array for range-query LCA.

## entry 117

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 122

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 125

- Walk both pointers from each end inward; advance the smaller side.

## entry 126

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 127

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 129

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 130

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 131

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 132

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 133

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 134

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 135

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 136

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 137

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 138

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 139

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 141

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 142

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 143

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 144

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 145

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 146

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 147

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 148

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 149

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 150

- Greedy by end-time picks the most non-overlapping intervals.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 153

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 154

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 157

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 158

- Greedy by end-time picks the most non-overlapping intervals.

## entry 159

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 160

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 161

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 162

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 163

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 164

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 165

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 166

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 167

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 168

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 169

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 170

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 171

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 173

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 174

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

- StringBuilder: amortize allocation by doubling on grow.

## entry 176

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 177

- Walk both pointers from each end inward; advance the smaller side.

## entry 178

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 181

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 182

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 183

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 184

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 185

- Splay tree: every access splays to the root; amortized O(log n).

## entry 186

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 187

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 188

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 189

- Splay tree: every access splays to the root; amortized O(log n).

## entry 190

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 191

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 192

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 193

- Euler tour flattens a tree into an array for range-query LCA.

## entry 194

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 196

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 197

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 198

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 199

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 200

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 201

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 202

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 203

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 205

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 207

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 209

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 210

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 211

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 212

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 216

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 217

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 218

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 219

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 220

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 221

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 222

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 223

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 224

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 225

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 226

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 227

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 228

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 230

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 231

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 232

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 233

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 234

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 235

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 236

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 237

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 238

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 239

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 241

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 242

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 243

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 244

- Monotonic stack pops while the new element violates the invariant.

## entry 245

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 246

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 247

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 248

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 249

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 250

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 251

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 252

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 253

- Splay tree: every access splays to the root; amortized O(log n).

## entry 254

- StringBuilder: amortize allocation by doubling on grow.

## entry 255

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 256

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 257

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 258

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 259

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 260

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 261

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 263

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 264

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 265

- LIS via patience: each pile holds the smallest tail of length k.

## entry 266

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 267

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 268

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 269

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 270

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 271

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 272

- Walk both pointers from each end inward; advance the smaller side.

## entry 273

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 274

- Greedy by end-time picks the most non-overlapping intervals.

## entry 275

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 276

- Monotonic stack pops while the new element violates the invariant.

## entry 277

- LIS via patience: each pile holds the smallest tail of length k.

## entry 278

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 279

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 280

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 282

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 283

- StringBuilder: amortize allocation by doubling on grow.

## entry 284

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 285

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 286

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 287

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 288

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 289

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 290

- Monotonic stack pops while the new element violates the invariant.

## entry 291

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 292

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 293

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 294

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 295

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 296

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 297

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 298

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 299

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 300

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 301

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 302

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 303

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 304

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 305

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 306

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 307

- Walk both pointers from each end inward; advance the smaller side.

## entry 308

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 310

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 312

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 313

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 314

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 315

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 316

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 317

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 318

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 319

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 320

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 321

- Monotonic stack pops while the new element violates the invariant.

## entry 322

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 323

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 324

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 325

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

- Euler tour flattens a tree into an array for range-query LCA.

## entry 327

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 328

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 329

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 330

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 331

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 332

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 333

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 334

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 335

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 336

- LIS via patience: each pile holds the smallest tail of length k.

## entry 337

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 338

- StringBuilder: amortize allocation by doubling on grow.

## entry 339

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 340

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 341

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 342

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 343

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 344

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 345

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 346

- Greedy by end-time picks the most non-overlapping intervals.

## entry 347

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 348

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 349

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 351

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 352

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 353

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 354

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 355

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 356

- Monotonic stack pops while the new element violates the invariant.

## entry 357

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 358

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 359

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 360

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 361

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 362

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 363

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 364

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 365

- k-d tree: median-split each axis; nearest-neighbor average O(log n).
