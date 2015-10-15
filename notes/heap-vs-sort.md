# heap-vs-sort

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

## entry 1

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- Greedy by end-time picks the most non-overlapping intervals.

## entry 12

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 13

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 14

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- Stable sort matters when a secondary key was set in a prior pass.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

- StringBuilder: amortize allocation by doubling on grow.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 28

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 38

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 39

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 40

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 41

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 50

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 51

- LIS via patience: each pile holds the smallest tail of length k.

## entry 52

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 53

- LIS via patience: each pile holds the smallest tail of length k.

## entry 54

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 55

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 56

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 58

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 59

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 60

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 61

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 66

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 67

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 68

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 70

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 72

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 73

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 74

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 75

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 77

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 78

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 79

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 80

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 81

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 82

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 85

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 86

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 87

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 89

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 90

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 91

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 92

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 95

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 96

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 97

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 98

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 101

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 102

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 110

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 111

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 112

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 113

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 114

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 115

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 116

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 117

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 118

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 119

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 120

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 121

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 122

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 123

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 124

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 125

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 126

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 130

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 131

- Splay tree: every access splays to the root; amortized O(log n).

## entry 132

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 133

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 134

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 135

- Walk both pointers from each end inward; advance the smaller side.

## entry 136

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 137

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 138

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 139

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 140

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 141

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 142

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 143

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 144

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 145

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 146

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 147

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 148

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 149

- Stable sort matters when a secondary key was set in a prior pass.

## entry 150

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 151

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 152

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 153

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 154

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 155

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 156

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 157

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 158

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 159

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 160

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 161

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 163

- Greedy by end-time picks the most non-overlapping intervals.

## entry 164

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 165

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 166

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 167

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 168

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 169

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 170

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 171

- Splay tree: every access splays to the root; amortized O(log n).

## entry 172

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 174

- StringBuilder: amortize allocation by doubling on grow.

## entry 175

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 176

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 178

- Heap when you only need top-k; full sort is wasted work.

## entry 179

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 180

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 181

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 182

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 183

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 184

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 185

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 186

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 187

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 188

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 189

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 190

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 191

- Stable sort matters when a secondary key was set in a prior pass.

## entry 192

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 193

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 194

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 195

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 196

- Splay tree: every access splays to the root; amortized O(log n).

## entry 197

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 198

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 199

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 200

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 201

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 202

- Monotonic stack pops while the new element violates the invariant.

## entry 203

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 204

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 207

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 208

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 209

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 210

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 211

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 212

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 213

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 214

- Euler tour flattens a tree into an array for range-query LCA.

## entry 215

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 216

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 217

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 218

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 219

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 220

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 221

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 222

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 223

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 224

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 225

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 226

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 227

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 228

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 229

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 230

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 231

- Greedy by end-time picks the most non-overlapping intervals.

## entry 232

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 233

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 235

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 236

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 238

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 239

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 240

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 241

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 242

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 243

- Splay tree: every access splays to the root; amortized O(log n).

## entry 244

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 245

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 246

- Stable sort matters when a secondary key was set in a prior pass.

## entry 247

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 248

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 249

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 250

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 251

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 252

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 253

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 254

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 255

- LIS via patience: each pile holds the smallest tail of length k.

## entry 256

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 257

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 258

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 259

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 260

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 261

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 262

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 263

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 264

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 265

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 266

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 267

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 268

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 269

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 270

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 271

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 272

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 273

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 274

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 275

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 276

- Splay tree: every access splays to the root; amortized O(log n).

## entry 277

- Monotonic stack pops while the new element violates the invariant.

## entry 278

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 279

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 280

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 281

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 282

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 283

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 284

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 285

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 286

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 287

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 288

- Euler tour flattens a tree into an array for range-query LCA.

## entry 289

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 291

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 292

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 293

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 294

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 295

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 296

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 297

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 298

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 299

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 300

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 301

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 302

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 303

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 305

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 306

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 307

- Splay tree: every access splays to the root; amortized O(log n).

## entry 308

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 309

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 310

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 311

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 312

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 313

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 314

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 315

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 316

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 317

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 318

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 319

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 320

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 321

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 322

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 323

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 324

- Euler tour flattens a tree into an array for range-query LCA.

## entry 325

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 326

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 328

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 329

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 330

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 331

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 332

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 333

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 334

- Greedy by end-time picks the most non-overlapping intervals.

## entry 335

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 336

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 337

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 338

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 339

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 340

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 341

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 342

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 343

- Walk both pointers from each end inward; advance the smaller side.

## entry 344

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 345

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 346

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 347

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 349

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 350

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 351

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 352

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 353

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 354

- Euler tour flattens a tree into an array for range-query LCA.

## entry 355

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 356

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 357

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 358

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 359

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 360

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 361

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 362

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 363

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 364

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 367

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 368

- Walk both pointers from each end inward; advance the smaller side.

## entry 369

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 370

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 371

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 372

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 373

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 374

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 375

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 376

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 377

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 378

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 379

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 380

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 381

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 382

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 383

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 384

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 385

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 386

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 387

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 388

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 389

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 390

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 391

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 392

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 393

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 394

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 395

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 396

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 397

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 398

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 399

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 400

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 401

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 402

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 403

- Walk both pointers from each end inward; advance the smaller side.

## entry 404

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 405

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 406

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 407

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 408

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 409

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 410

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 411

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 412

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 413

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 414

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 415

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 416

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 417

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 418

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 419

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 420

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 421

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 422

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 423

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 424

- Monotonic stack pops while the new element violates the invariant.

## entry 425

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 426

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 427

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 428

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 429

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 430

- Euler tour flattens a tree into an array for range-query LCA.

## entry 431

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 432

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 433

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 434

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 435

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 436

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 437

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 438

- Greedy by end-time picks the most non-overlapping intervals.

## entry 439

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 440

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 441

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 442

- Monotonic stack pops while the new element violates the invariant.

## entry 443

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 444

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 445

- Splay tree: every access splays to the root; amortized O(log n).

## entry 446

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 447

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 448

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 449

- Monotonic stack pops while the new element violates the invariant.

## entry 450

- Euler tour flattens a tree into an array for range-query LCA.

## entry 451

- Walk both pointers from each end inward; advance the smaller side.

## entry 452

- LIS via patience: each pile holds the smallest tail of length k.

## entry 453

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 454

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 455

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 456

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 457

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.
