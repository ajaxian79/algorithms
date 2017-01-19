# union-find

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Stable sort matters when a secondary key was set in a prior pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LIS via patience: each pile holds the smallest tail of length k.

- Walk both pointers from each end inward; advance the smaller side.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 10

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 13

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 14

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Heap when you only need top-k; full sort is wasted work.

## entry 18

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 19

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- Splay tree: every access splays to the root; amortized O(log n).

## entry 35

- Walk both pointers from each end inward; advance the smaller side.

## entry 36

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- Splay tree: every access splays to the root; amortized O(log n).

## entry 39

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 40

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 47

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 51

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 54

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 56

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 57

- Euler tour flattens a tree into an array for range-query LCA.

## entry 58

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 59

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 60

- Walk both pointers from each end inward; advance the smaller side.

## entry 61

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 62

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 63

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 69

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 70

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 77

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 78

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 79

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 80

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 82

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 84

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 88

- Monotonic stack pops while the new element violates the invariant.

## entry 89

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 90

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 91

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 92

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 96

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 97

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Walk both pointers from each end inward; advance the smaller side.

## entry 100

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 101

- Splay tree: every access splays to the root; amortized O(log n).

## entry 102

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 103

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 107

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 109

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 110

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 114

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 115

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 116

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 117

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 118

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 119

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 121

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 124

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 125

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 126

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 129

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 130

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 131

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 132

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 133

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 134

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 135

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 136

- Stable sort matters when a secondary key was set in a prior pass.

## entry 137

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 138

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 140

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 141

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 142

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 143

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 144

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 145

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 146

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 147

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 148

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 150

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 151

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 152

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 153

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 154

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 155

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 156

- Greedy by end-time picks the most non-overlapping intervals.

## entry 157

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 158

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 159

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 160

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 161

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 162

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 163

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 165

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 166

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 167

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 170

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 171

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 172

- Splay tree: every access splays to the root; amortized O(log n).

## entry 173

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 174

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 175

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 176

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 177

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 178

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 179

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 182

- Splay tree: every access splays to the root; amortized O(log n).

## entry 183

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 184

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 185

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 186

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 188

- Stable sort matters when a secondary key was set in a prior pass.

## entry 189

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 190

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 191

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 192

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 193

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

- Stable sort matters when a secondary key was set in a prior pass.

## entry 195

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 196

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 197

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 198

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 199

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 200

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 201

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 202

- Walk both pointers from each end inward; advance the smaller side.

## entry 203

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 204

- Splay tree: every access splays to the root; amortized O(log n).

## entry 205

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 206

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 208

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 209

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 210

- LIS via patience: each pile holds the smallest tail of length k.

## entry 211

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 212

- Walk both pointers from each end inward; advance the smaller side.

## entry 213

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 215

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 216

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 217

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 220

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 221

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 222

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 223

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 224

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 225

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 226

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 227

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 228

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 229

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 230

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 231

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 233

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 234

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 235

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 236

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 237

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 239

- Greedy by end-time picks the most non-overlapping intervals.

## entry 240

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 241

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 242

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 243

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 244

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 245

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 246

- Heap when you only need top-k; full sort is wasted work.

## entry 247

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 248

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

- Splay tree: every access splays to the root; amortized O(log n).

## entry 250

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 251

- LIS via patience: each pile holds the smallest tail of length k.

## entry 252

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 253

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 254

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 255

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 256

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 257

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 258

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 259

- Splay tree: every access splays to the root; amortized O(log n).

## entry 260

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 261

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 262

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 263

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 264

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 265

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 266

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 267

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 268

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 269

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 270

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 271

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 272

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 273

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 274

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 275

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 276

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 277

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 278

- Walk both pointers from each end inward; advance the smaller side.

## entry 279

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 280

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 281

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 282

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 283

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 284

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 285

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 286

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 287

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 288

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 289

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 290

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 291

- Stable sort matters when a secondary key was set in a prior pass.

## entry 292

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 293

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 294

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 295

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 296

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 297

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 298

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 299

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 300

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 301

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 302

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 303

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 304

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 305

- LIS via patience: each pile holds the smallest tail of length k.

## entry 306

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 307

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 308

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 309

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 310

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 311

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 312

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 313

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 314

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 315

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 317

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 318

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 319

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 320

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 321

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 322

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 323

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 324

- Monotonic stack pops while the new element violates the invariant.

## entry 325

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 326

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 327

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 328

- Stable sort matters when a secondary key was set in a prior pass.

## entry 329

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 330

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 331

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 332

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 333

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 334

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 335

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 336

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 337

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 338

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 339

- Euler tour flattens a tree into an array for range-query LCA.

## entry 340

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 341

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 342

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 343

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 344

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 345

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 346

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 347

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 348

- Heap when you only need top-k; full sort is wasted work.

## entry 349

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 350

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 351

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 352

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 353

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 354

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 355

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 356

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 357

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 358

- Monotonic stack pops while the new element violates the invariant.

## entry 359

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 360

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 361

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 362

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 363

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 364

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 367

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 368

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 369

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 370

- StringBuilder: amortize allocation by doubling on grow.

## entry 371

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 372

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 373

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 374

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 375

- Walk both pointers from each end inward; advance the smaller side.

## entry 376

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 377

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 378

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 379

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 380

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 381

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 382

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 383

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 384

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 385

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 386

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 387

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 388

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 389

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 390

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 391

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 392

- Walk both pointers from each end inward; advance the smaller side.

## entry 393

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 394

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 395

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 396

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 398

- Monotonic stack pops while the new element violates the invariant.

## entry 399

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 400

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 401

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 402

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 403

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 404

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 405

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 406

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 407

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 408

- LIS via patience: each pile holds the smallest tail of length k.

## entry 409

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 410

- Euler tour flattens a tree into an array for range-query LCA.

## entry 411

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 412

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 413

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 414

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 415

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 416

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 417

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 418

- Backtracking template: choose, recurse, un-choose. Mutate then revert.
