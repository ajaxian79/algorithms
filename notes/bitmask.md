# bitmask

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Stable sort matters when a secondary key was set in a prior pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Heap when you only need top-k; full sort is wasted work.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Merge intervals: sort by start; extend the running interval while overlapping.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Walk both pointers from each end inward; advance the smaller side.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- LIS via patience: each pile holds the smallest tail of length k.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 6

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 7

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

- Walk both pointers from each end inward; advance the smaller side.

## entry 9

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 10

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

- StringBuilder: amortize allocation by doubling on grow.

## entry 19

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 20

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 27

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 29

- StringBuilder: amortize allocation by doubling on grow.

## entry 30

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 31

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 32

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 33

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- Greedy by end-time picks the most non-overlapping intervals.

## entry 36

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 37

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 38

- Stable sort matters when a secondary key was set in a prior pass.

## entry 39

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

- Heap when you only need top-k; full sort is wasted work.

## entry 41

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 42

- Stable sort matters when a secondary key was set in a prior pass.

## entry 43

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 44

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 45

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 48

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 51

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 54

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 56

- Splay tree: every access splays to the root; amortized O(log n).

## entry 57

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- Stable sort matters when a secondary key was set in a prior pass.

## entry 60

- Heap when you only need top-k; full sort is wasted work.

## entry 61

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 62

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 63

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 64

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 65

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 66

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 67

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 71

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 72

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 76

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 80

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 81

- LIS via patience: each pile holds the smallest tail of length k.

## entry 82

- StringBuilder: amortize allocation by doubling on grow.

## entry 83

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 84

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 86

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 87

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 88

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 90

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

- LIS via patience: each pile holds the smallest tail of length k.

## entry 92

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 94

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 97

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 98

- Greedy by end-time picks the most non-overlapping intervals.

## entry 99

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

- StringBuilder: amortize allocation by doubling on grow.

## entry 102

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 103

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 106

- Heap when you only need top-k; full sort is wasted work.

## entry 107

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 108

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 109

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 110

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 111

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 112

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 113

- Walk both pointers from each end inward; advance the smaller side.

## entry 114

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 116

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 118

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 119

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 120

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 121

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 122

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 123

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 124

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 125

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 126

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 127

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 128

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 129

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 130

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 131

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 132

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 133

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 134

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 135

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 136

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 137

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 138

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 140

- Monotonic stack pops while the new element violates the invariant.

## entry 141

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 142

- Heap when you only need top-k; full sort is wasted work.

## entry 143

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 144

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 145

- Greedy by end-time picks the most non-overlapping intervals.

## entry 146

- StringBuilder: amortize allocation by doubling on grow.

## entry 147

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 148

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 149

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 150

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 151

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 152

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 153

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 154

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 155

- Heap when you only need top-k; full sort is wasted work.

## entry 156

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 157

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 158

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 159

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 160

- Walk both pointers from each end inward; advance the smaller side.

## entry 161

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 162

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 163

- Splay tree: every access splays to the root; amortized O(log n).

## entry 164

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 165

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 166

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 167

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 168

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 169

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 170

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 171

- Stable sort matters when a secondary key was set in a prior pass.

## entry 172

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 173

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 174

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 175

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 176

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 177

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 178

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 181

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 182

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 184

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 185

- LIS via patience: each pile holds the smallest tail of length k.

## entry 186

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 187

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 188

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 189

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 190

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 192

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 193

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 195

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 196

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 197

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 198

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 199

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 200

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 201

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 202

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 203

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 204

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 205

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 206

- LIS via patience: each pile holds the smallest tail of length k.

## entry 207

- Heap when you only need top-k; full sort is wasted work.

## entry 208

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 209

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 211

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 212

- LIS via patience: each pile holds the smallest tail of length k.

## entry 213

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 214

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 215

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 216

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 217

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 218

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 219

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 220

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 221

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 222

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 223

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 224

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 225

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 226

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 227

- Stable sort matters when a secondary key was set in a prior pass.

## entry 228

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 229

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 230

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 231

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 232

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 233

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 234

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 235

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 236

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 237

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 238

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 239

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 240

- LIS via patience: each pile holds the smallest tail of length k.

## entry 241

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 242

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 243

- Heap when you only need top-k; full sort is wasted work.

## entry 244

- LIS via patience: each pile holds the smallest tail of length k.

## entry 245

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 246

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 247

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 248

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 250

- StringBuilder: amortize allocation by doubling on grow.

## entry 251

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 252

- Stable sort matters when a secondary key was set in a prior pass.

## entry 253

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 254

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 255

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 256

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 257

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 258

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 259

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 260

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 261

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 262

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 263

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 264

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 265

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 266

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 267

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 268

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 269

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 270

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 271

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 272

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 275

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 276

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 277

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 278

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 279

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 280

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 281

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 282

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

- Splay tree: every access splays to the root; amortized O(log n).

## entry 284

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 285

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 286

- Splay tree: every access splays to the root; amortized O(log n).

## entry 287

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 289

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

- LIS via patience: each pile holds the smallest tail of length k.

## entry 291

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 292

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 293

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 294

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 295

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 296

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 297

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 299

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 300

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 301

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 302

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 303

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 304

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 305

- StringBuilder: amortize allocation by doubling on grow.

## entry 306

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 307

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 308

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 309

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 310

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 311

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 312

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 313

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 314

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 315

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 316

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 317

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 318

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 319

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 320

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 321

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 322

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 323

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 324

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 325

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 326

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 327

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 328

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 329

- Greedy by end-time picks the most non-overlapping intervals.

## entry 330

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 331

- Euler tour flattens a tree into an array for range-query LCA.

## entry 332

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 333

- Monotonic stack pops while the new element violates the invariant.

## entry 334

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 335

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 336

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 337

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 338

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 339

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 340

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 341

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 342

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 343

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 344

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 345

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 346

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 347

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 348

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 349

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 350

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 351

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 352

- StringBuilder: amortize allocation by doubling on grow.

## entry 353

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 354

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 355

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 356

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 357

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 358

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 359

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 360

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 361

- Heap when you only need top-k; full sort is wasted work.

## entry 362

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 363

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 364

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 365

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 366

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 367

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 368

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 369

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 370

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 371

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 372

- Walk both pointers from each end inward; advance the smaller side.

## entry 373

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 374

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 375

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 376

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 377

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 378

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 379

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 380

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 381

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 382

- Stable sort matters when a secondary key was set in a prior pass.

## entry 383

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 384

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 385

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 386

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 387

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 388

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 389

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 390

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 391

- Monotonic stack pops while the new element violates the invariant.

## entry 392

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 393

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 394

- Splay tree: every access splays to the root; amortized O(log n).

## entry 395

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 396

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 397

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 398

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 399

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 400

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 401

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 402

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 403

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 404

- Monotonic stack pops while the new element violates the invariant.

## entry 405

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 406

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 407

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 408

- Heap when you only need top-k; full sort is wasted work.

## entry 409

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 410

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 411

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 412

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 413

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 414

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 415

- Walk both pointers from each end inward; advance the smaller side.

## entry 416

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 417

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 418

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 419

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 420

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 421

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 422

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 423

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 424

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 425

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 426

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 427

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 428

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 429

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 430

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 431

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 432

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 433

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 434

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 435

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 436

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 437

- Greedy by end-time picks the most non-overlapping intervals.

## entry 438

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 439

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 440

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 441

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 442

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 443

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 444

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 445

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 446

- Heap when you only need top-k; full sort is wasted work.

## entry 447

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 448

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 449

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 450

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 451

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 452

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 453

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 454

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 455

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 456

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 457

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 458

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 459

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 460

- Walk both pointers from each end inward; advance the smaller side.

## entry 461

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 462

- Greedy by end-time picks the most non-overlapping intervals.

## entry 463

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 464

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 465

- Splay tree: every access splays to the root; amortized O(log n).

## entry 466

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 467

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 468

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 469

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 470

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 471

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 472

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 473

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 474

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 475

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 476

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 477

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 478

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 479

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 480

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 481

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 482

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 483

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 484

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 485

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 486

- Euler tour flattens a tree into an array for range-query LCA.

## entry 487

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 488

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 489

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 490

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 491

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 492

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 493

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 494

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 495

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 496

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 497

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 498

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 499

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 500

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 501

- Monotonic stack pops while the new element violates the invariant.

## entry 502

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 503

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 504

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 505

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 506

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 507

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 508

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 509

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 510

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 511

- Walk both pointers from each end inward; advance the smaller side.

## entry 512

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 513

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 514

- Euler tour flattens a tree into an array for range-query LCA.

## entry 515

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 516

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 517

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 518

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 519

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 520

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 521

- Walk both pointers from each end inward; advance the smaller side.

## entry 522

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 523

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 524

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 525

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 526

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 527

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 528

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 529

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 530

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 531

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 532

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 533

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 534

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 535

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 536

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 537

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 538

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 539

- StringBuilder: amortize allocation by doubling on grow.

## entry 540

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 541

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 542

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 543

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 544

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 545

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 546

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 547

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 548

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 549

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 550

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 551

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 552

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 553

- Stable sort matters when a secondary key was set in a prior pass.

## entry 554

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 555

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 556

- Walk both pointers from each end inward; advance the smaller side.

## entry 557

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 558

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 559

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 560

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 561

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 562

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 563

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 564

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 565

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 566

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 567

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 568

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 569

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 570

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 571

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 572

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 573

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 574

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 575

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 576

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 577

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 578

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 579

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 580

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 581

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 582

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 583

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 584

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 585

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 586

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 587

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 588

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 589

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 590

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 591

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 592

- StringBuilder: amortize allocation by doubling on grow.

## entry 593

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 594

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 595

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 596

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 597

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 598

- LIS via patience: each pile holds the smallest tail of length k.

## entry 599

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 600

- Heap when you only need top-k; full sort is wasted work.

## entry 601

- Splay tree: every access splays to the root; amortized O(log n).

## entry 602

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 603

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 604

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 605

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 606

- Persistent tree: every update creates a new version sharing unchanged nodes.
