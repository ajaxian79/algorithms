# in-place-rules

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Heap when you only need top-k; full sort is wasted work.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 15

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 18

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 19

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 23

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 33

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 36

- Stable sort matters when a secondary key was set in a prior pass.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 41

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 42

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 45

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 48

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 53

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 54

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 55

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 56

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 58

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- Splay tree: every access splays to the root; amortized O(log n).

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 63

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 64

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 66

- Walk both pointers from each end inward; advance the smaller side.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 71

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 76

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 77

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 78

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 79

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 81

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 87

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 88

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 89

- Monotonic stack pops while the new element violates the invariant.

## entry 90

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 91

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 98

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 100

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 102

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 103

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 104

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 106

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 108

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 109

- StringBuilder: amortize allocation by doubling on grow.

## entry 110

- Walk both pointers from each end inward; advance the smaller side.

## entry 111

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 113

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 114

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 115

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 116

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 117

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 118

- Stable sort matters when a secondary key was set in a prior pass.

## entry 119

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 120

- Greedy by end-time picks the most non-overlapping intervals.

## entry 121

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 122

- Stable sort matters when a secondary key was set in a prior pass.

## entry 123

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 124

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 125

- LIS via patience: each pile holds the smallest tail of length k.

## entry 126

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 127

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 128

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 129

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 130

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 131

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 132

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 134

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 136

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 137

- Splay tree: every access splays to the root; amortized O(log n).

## entry 138

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 139

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 140

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 141

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 142

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 143

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 144

- Monotonic stack pops while the new element violates the invariant.

## entry 145

- Greedy by end-time picks the most non-overlapping intervals.

## entry 146

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 147

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 148

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 149

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 150

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 152

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 153

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 154

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 155

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 156

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 157

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 158

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 159

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 160

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 161

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 162

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 163

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 164

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 165

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 166

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 167

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 168

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 169

- Splay tree: every access splays to the root; amortized O(log n).

## entry 170

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 171

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 172

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 173

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 175

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 176

- StringBuilder: amortize allocation by doubling on grow.

## entry 177

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 178

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 179

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 180

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 181

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 182

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 183

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 184

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 185

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 186

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 188

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 189

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 190

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 191

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 192

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 193

- Monotonic stack pops while the new element violates the invariant.

## entry 194

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 195

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 196

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 197

- Stable sort matters when a secondary key was set in a prior pass.

## entry 198

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 199

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 200

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 201

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 202

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 203

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 204

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 205

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 206

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 207

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 208

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 210

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 211

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 214

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 215

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 216

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 217

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 218

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 219

- Euler tour flattens a tree into an array for range-query LCA.

## entry 220

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 221

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 222

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 223

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 224

- Stable sort matters when a secondary key was set in a prior pass.

## entry 225

- Monotonic stack pops while the new element violates the invariant.

## entry 226

- StringBuilder: amortize allocation by doubling on grow.

## entry 227

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 228

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 229

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 230

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 231

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 232

- Greedy by end-time picks the most non-overlapping intervals.

## entry 233

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 234

- Monotonic stack pops while the new element violates the invariant.

## entry 235

- LIS via patience: each pile holds the smallest tail of length k.

## entry 236

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 237

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 238

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 239

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 240

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 241

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 242

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 243

- StringBuilder: amortize allocation by doubling on grow.

## entry 244

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 245

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 246

- Walk both pointers from each end inward; advance the smaller side.

## entry 247

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 248

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 249

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 250

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 251

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 252

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 253

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 254

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 255

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 256

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 257

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 258

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 259

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 260

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 261

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 262

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 263

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 264

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 265

- LIS via patience: each pile holds the smallest tail of length k.

## entry 266

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 267

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 268

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 269

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 270

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 271

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 272

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 273

- Stable sort matters when a secondary key was set in a prior pass.

## entry 274

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 275

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 276

- LIS via patience: each pile holds the smallest tail of length k.

## entry 277

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 278

- Splay tree: every access splays to the root; amortized O(log n).

## entry 279

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 280

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 281

- LIS via patience: each pile holds the smallest tail of length k.

## entry 282

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 283

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 284

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 285

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 286

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 287

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 288

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 289

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 290

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 291

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 293

- Monotonic stack pops while the new element violates the invariant.

## entry 294

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 295

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 296

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 297

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 298

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 299

- Heap when you only need top-k; full sort is wasted work.

## entry 300

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 301

- Euler tour flattens a tree into an array for range-query LCA.

## entry 302

- Heap when you only need top-k; full sort is wasted work.

## entry 303

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 304

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 305

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 306

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 307

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 308

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 309

- Stable sort matters when a secondary key was set in a prior pass.

## entry 310

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 311

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 312

- Stable sort matters when a secondary key was set in a prior pass.

## entry 313

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 314

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 315

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 316

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 317

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 318

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 319

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 320

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 321

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 322

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 323

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 324

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 325

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 326

- Walk both pointers from each end inward; advance the smaller side.

## entry 327

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 328

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 329

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 330

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 331

- LIS via patience: each pile holds the smallest tail of length k.

## entry 332

- Euler tour flattens a tree into an array for range-query LCA.

## entry 333

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 334

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 335

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 336

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 337

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 338

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 339

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 340

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 341

- LIS via patience: each pile holds the smallest tail of length k.

## entry 342

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 343

- Stable sort matters when a secondary key was set in a prior pass.

## entry 344

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 346

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 347

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 349

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 350

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 351

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 352

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 353

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 354

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 355

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 356

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 357

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 358

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 359

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 360

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 361

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 362

- Walk both pointers from each end inward; advance the smaller side.

## entry 363

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 364

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 365

- Splay tree: every access splays to the root; amortized O(log n).

## entry 366

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 367

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 368

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 369

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 370

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 371

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 372

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 373

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 374

- StringBuilder: amortize allocation by doubling on grow.

## entry 375

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 376

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 377

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 378

- Euler tour flattens a tree into an array for range-query LCA.

## entry 379

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 380

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 381

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 382

- Greedy by end-time picks the most non-overlapping intervals.

## entry 383

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 384

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 385

- Greedy by end-time picks the most non-overlapping intervals.

## entry 386

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 387

- Stable sort matters when a secondary key was set in a prior pass.

## entry 388

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 389

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 390

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 391

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 392

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 393

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 394

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 395

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 396

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 397

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 398

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 399

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 400

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 401

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 402

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 403

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 404

- Monotonic stack pops while the new element violates the invariant.

## entry 405

- Heap when you only need top-k; full sort is wasted work.

## entry 406

- Walk both pointers from each end inward; advance the smaller side.

## entry 407

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 408

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 409

- Monotonic stack pops while the new element violates the invariant.

## entry 410

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 411

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 412

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 413

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 414

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 415

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 416

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 417

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 418

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 419

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 420

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 421

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 422

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 423

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 424

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 425

- Heap when you only need top-k; full sort is wasted work.

## entry 426

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 427

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 428

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 429

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 430

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 431

- Greedy by end-time picks the most non-overlapping intervals.

## entry 432

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 433

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 434

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 435

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 436

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 437

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 438

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 439

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 440

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 441

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 442

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 443

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 444

- Monotonic stack pops while the new element violates the invariant.

## entry 445

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 446

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 447

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 448

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 449

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 450

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 451

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 452

- StringBuilder: amortize allocation by doubling on grow.

## entry 453

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 454

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 455

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 456

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 457

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 458

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 459

- Splay tree: every access splays to the root; amortized O(log n).

## entry 460

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 461

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 462

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 463

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 464

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 465

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 466

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 467

- LIS via patience: each pile holds the smallest tail of length k.

## entry 468

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 469

- Greedy by end-time picks the most non-overlapping intervals.

## entry 470

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 471

- Greedy by end-time picks the most non-overlapping intervals.

## entry 472

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 473

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 474

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 475

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 476

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 477

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 478

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 479

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 480

- StringBuilder: amortize allocation by doubling on grow.

## entry 481

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 482

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 483

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 484

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 485

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 486

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 487

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 488

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 489

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 490

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 491

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 492

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 493

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 494

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 495

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 497

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 498

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 499

- StringBuilder: amortize allocation by doubling on grow.

## entry 500

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 501

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 502

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 503

- Euler tour flattens a tree into an array for range-query LCA.

## entry 504

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 505

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 506

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 507

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 508

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 509

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 510

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 511

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 512

- Stable sort matters when a secondary key was set in a prior pass.

## entry 513

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 514

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 515

- Stable sort matters when a secondary key was set in a prior pass.

## entry 516

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 517

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 518

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 519

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 520

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 521

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 522

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 523

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 524

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 525

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 526

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 527

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 528

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 529

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 530

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 531

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 532

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 533

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 534

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 535

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 536

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 537

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 538

- Stable sort matters when a secondary key was set in a prior pass.

## entry 539

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 540

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 541

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 542

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 543

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 544

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 545

- Heap when you only need top-k; full sort is wasted work.

## entry 546

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 547

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 548

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 549

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 550

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 551

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 552

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 553

- Walk both pointers from each end inward; advance the smaller side.

## entry 554

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 555

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 556

- Greedy by end-time picks the most non-overlapping intervals.

## entry 557

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 558

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 559

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 560

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 561

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 562

- Euler tour flattens a tree into an array for range-query LCA.

## entry 563

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 564

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 565

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 566

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 567

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 568

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 569

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 570

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 571

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 572

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 573

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 574

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 575

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 576

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 577

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 578

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 579

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 580

- StringBuilder: amortize allocation by doubling on grow.

## entry 581

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 582

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 583

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 584

- Monotonic stack pops while the new element violates the invariant.

## entry 585

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 586

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 587

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 588

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 589

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 591

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 592

- Greedy by end-time picks the most non-overlapping intervals.

## entry 593

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 594

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 595

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 596

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 597

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 598

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 599

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 600

- Splay tree: every access splays to the root; amortized O(log n).

## entry 601

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 602

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 603

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 604

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 605

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 606

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 607

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 608

- Monotonic stack pops while the new element violates the invariant.

## entry 609

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 610

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 611

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 612

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 613

- Greedy by end-time picks the most non-overlapping intervals.

## entry 614

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 615

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 616

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 617

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 618

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 619

- Stable sort matters when a secondary key was set in a prior pass.

## entry 620

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 621

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 622

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 623

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 624

- Euler tour flattens a tree into an array for range-query LCA.

## entry 625

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 626

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 627

- Greedy by end-time picks the most non-overlapping intervals.

## entry 628

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 629

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 630

- LIS via patience: each pile holds the smallest tail of length k.

## entry 631

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 632

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 633

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 634

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 635

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 636

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 637

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 638

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 639

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 640

- StringBuilder: amortize allocation by doubling on grow.

## entry 641

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 642

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 643

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 644

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 645

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 646

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 647

- Greedy by end-time picks the most non-overlapping intervals.

## entry 648

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 649

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 650

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 651

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 652

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 653

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 654

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 655

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 656

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 657

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 658

- Stable sort matters when a secondary key was set in a prior pass.

## entry 659

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 660

- Wavelet tree: range k-th element in O(log Σ) time.
