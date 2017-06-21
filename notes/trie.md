# trie

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Union-Find with path compression amortizes to near-O(1) per op.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Splay tree: every access splays to the root; amortized O(log n).

## entry 27

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 31

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 32

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 33

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 35

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 37

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 38

- Monotonic stack pops while the new element violates the invariant.

## entry 39

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 42

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 49

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 50

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 51

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 53

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 54

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 55

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 56

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

- Heap when you only need top-k; full sort is wasted work.

## entry 59

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

- Heap when you only need top-k; full sort is wasted work.

## entry 63

- Monotonic stack pops while the new element violates the invariant.

## entry 64

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 65

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 66

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 68

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 70

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

- Euler tour flattens a tree into an array for range-query LCA.

## entry 72

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 73

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 74

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 78

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Splay tree: every access splays to the root; amortized O(log n).

## entry 81

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 82

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 83

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 84

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 85

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 86

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 87

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 88

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 90

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 92

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 94

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 95

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 98

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 101

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 103

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 104

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 105

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 106

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 108

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 109

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 110

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 111

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 113

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 114

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 115

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 116

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 117

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 118

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 119

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 120

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 121

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 122

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 123

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 124

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 125

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 126

- Walk both pointers from each end inward; advance the smaller side.

## entry 127

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 128

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 129

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 131

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 132

- Euler tour flattens a tree into an array for range-query LCA.

## entry 133

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 134

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 135

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 136

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 137

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 138

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 140

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 141

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 142

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 144

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 145

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 146

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 148

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 149

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 150

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 151

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 152

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 153

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 154

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 155

- Heap when you only need top-k; full sort is wasted work.

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 158

- Stable sort matters when a secondary key was set in a prior pass.

## entry 159

- Monotonic stack pops while the new element violates the invariant.

## entry 160

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 161

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 162

- Monotonic stack pops while the new element violates the invariant.

## entry 163

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 164

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 165

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 166

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 167

- StringBuilder: amortize allocation by doubling on grow.

## entry 168

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 169

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 170

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 171

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 172

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 173

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 174

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

- Greedy by end-time picks the most non-overlapping intervals.

## entry 176

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 177

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 178

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 179

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 180

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 181

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 182

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

- Splay tree: every access splays to the root; amortized O(log n).

## entry 184

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 185

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 188

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 189

- Greedy by end-time picks the most non-overlapping intervals.

## entry 190

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 191

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 192

- Splay tree: every access splays to the root; amortized O(log n).

## entry 193

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 194

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 195

- Walk both pointers from each end inward; advance the smaller side.

## entry 196

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 197

- Walk both pointers from each end inward; advance the smaller side.

## entry 198

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 199

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 200

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 201

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 202

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 203

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 204

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 205

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 206

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 207

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 208

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 209

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 210

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 211

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 212

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 213

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 214

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 215

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 216

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 217

- LIS via patience: each pile holds the smallest tail of length k.

## entry 218

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 219

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 220

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 221

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 222

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 223

- Euler tour flattens a tree into an array for range-query LCA.

## entry 224

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 225

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 226

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 227

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 228

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 229

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 230

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 231

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 232

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 233

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 234

- Stable sort matters when a secondary key was set in a prior pass.

## entry 235

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 236

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 237

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 238

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 239

- Splay tree: every access splays to the root; amortized O(log n).

## entry 240

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 241

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 242

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 243

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 244

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 245

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 246

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 247

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 248

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 249

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 250

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 251

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 252

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 253

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 254

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 255

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 256

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 257

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 258

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 259

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 260

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 261

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 262

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 263

- Euler tour flattens a tree into an array for range-query LCA.

## entry 264

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 265

- Monotonic stack pops while the new element violates the invariant.

## entry 266

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 267

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 268

- LIS via patience: each pile holds the smallest tail of length k.

## entry 269

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 270

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 271

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 272

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 273

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 274

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 275

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 276

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 277

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 278

- Euler tour flattens a tree into an array for range-query LCA.

## entry 279

- StringBuilder: amortize allocation by doubling on grow.

## entry 280

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 281

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 282

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 283

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 284

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 285

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 286

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 287

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 288

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 289

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 290

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 291

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 292

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 293

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 294

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 295

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 297

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 298

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 299

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 300

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 301

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 302

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 303

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 304

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 305

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 306

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 307

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 308

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 309

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 310

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 311

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 312

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 313

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 314

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 315

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 316

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 317

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 318

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 319

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 320

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 321

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 322

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 323

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 324

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 325

- Euler tour flattens a tree into an array for range-query LCA.

## entry 326

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 327

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 328

- LIS via patience: each pile holds the smallest tail of length k.

## entry 329

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 330

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 331

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 332

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 333

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 334

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 335

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 336

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 337

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 338

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 339

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 341

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 342

- LIS via patience: each pile holds the smallest tail of length k.

## entry 343

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 344

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 346

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 347

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 348

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 349

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 350

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 351

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 352

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 353

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 354

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 355

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 356

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 357

- Monotonic stack pops while the new element violates the invariant.

## entry 358

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 359

- Greedy by end-time picks the most non-overlapping intervals.

## entry 360

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 361

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 363

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 364

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 365

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 366

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 367

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 368

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 369

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
