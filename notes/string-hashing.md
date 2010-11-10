# string-hashing

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic stack pops while the new element violates the invariant.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Stable sort matters when a secondary key was set in a prior pass.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 6

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

- Splay tree: every access splays to the root; amortized O(log n).

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 13

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 14

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 15

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 18

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 20

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 22

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 23

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 24

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Monotonic stack pops while the new element violates the invariant.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 34

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 38

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 43

- Greedy by end-time picks the most non-overlapping intervals.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Splay tree: every access splays to the root; amortized O(log n).

## entry 51

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 52

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

- Heap when you only need top-k; full sort is wasted work.

## entry 54

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 59

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 60

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 61

- Stable sort matters when a secondary key was set in a prior pass.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 69

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 70

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 71

- Heap when you only need top-k; full sort is wasted work.

## entry 72

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

- Splay tree: every access splays to the root; amortized O(log n).

## entry 74

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 75

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 77

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 79

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 80

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 82

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 86

- LIS via patience: each pile holds the smallest tail of length k.

## entry 87

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 89

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 90

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 92

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 94

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 95

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 96

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 100

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 101

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 102

- Greedy by end-time picks the most non-overlapping intervals.

## entry 103

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 107

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 111

- Euler tour flattens a tree into an array for range-query LCA.

## entry 112

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 115

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 116

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 117

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 118

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 120

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 121

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 122

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 123

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 124

- Walk both pointers from each end inward; advance the smaller side.

## entry 125

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 126

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 127

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 128

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 129

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 130

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 131

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 132

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 133

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 134

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 135

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 136

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 137

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 138

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 141

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 142

- Euler tour flattens a tree into an array for range-query LCA.

## entry 143

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 144

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 145

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 146

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 147

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 148

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 149

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 150

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 151

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 152

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 153

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 154

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 155

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 156

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 157

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 158

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 159

- StringBuilder: amortize allocation by doubling on grow.

## entry 160

- Euler tour flattens a tree into an array for range-query LCA.

## entry 161

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 162

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 163

- Stable sort matters when a secondary key was set in a prior pass.

## entry 164

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 165

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 166

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 167

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 168

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 169

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 170

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 171

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 172

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 173

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 174

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 175

- Monotonic stack pops while the new element violates the invariant.

## entry 176

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 177

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 178

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 179

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 180

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 181

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 182

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 183

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 184

- Greedy by end-time picks the most non-overlapping intervals.

## entry 185

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 187

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 188

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 189

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 190

- LIS via patience: each pile holds the smallest tail of length k.

## entry 191

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 192

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 193

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 194

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 195

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 196

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 197

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 198

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 199

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 200

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 201

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 202

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 203

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 204

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 205

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 206

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 207

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 208

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 209

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 210

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 211

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 212

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 213

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 214

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 215

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 216

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 217

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 218

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 219

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 220

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 221

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 222

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 223

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 224

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 225

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 226

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 227

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 228

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 229

- Stable sort matters when a secondary key was set in a prior pass.

## entry 230

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 231

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 232

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 233

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 234

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 235

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 237

- LIS via patience: each pile holds the smallest tail of length k.

## entry 238

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 239

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 240

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 241

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 242

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 243

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 244

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 245

- Greedy by end-time picks the most non-overlapping intervals.

## entry 246

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 247

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 248

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 249

- LIS via patience: each pile holds the smallest tail of length k.

## entry 250

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 251

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 252

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 253

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 254

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 255

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 256

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 257

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 258

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 259

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 260

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 261

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 262

- Stable sort matters when a secondary key was set in a prior pass.

## entry 263

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 264

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 265

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 266

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 267

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 268

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 269

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 270

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 271

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 272

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 273

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

- Greedy by end-time picks the most non-overlapping intervals.

## entry 275

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 276

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 277

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 278

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 279

- Greedy by end-time picks the most non-overlapping intervals.

## entry 280

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 281

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 282

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 283

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 284

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 285

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 286

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 287

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 288

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 289

- Walk both pointers from each end inward; advance the smaller side.

## entry 290

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 291

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 292

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 294

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 295

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 296

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 297

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 298

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 299

- Stable sort matters when a secondary key was set in a prior pass.

## entry 300

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 301

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 302

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 303

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 304

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 305

- Splay tree: every access splays to the root; amortized O(log n).

## entry 306

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 307

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 308

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 309

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 310

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 311

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 312

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 313

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 314

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 315

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 316

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 317

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 318

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 319

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 320

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 322

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 323

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 324

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 325

- Stable sort matters when a secondary key was set in a prior pass.

## entry 326

- Greedy by end-time picks the most non-overlapping intervals.

## entry 327

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 328

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 329

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 330

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 331

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 332

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 333

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 334

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 335

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 336

- Monotonic stack pops while the new element violates the invariant.

## entry 337

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 338

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 339

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 340

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 341

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 342

- Heap when you only need top-k; full sort is wasted work.

## entry 343

- StringBuilder: amortize allocation by doubling on grow.

## entry 344

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 345

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 346

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 347

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 348

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 349

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 350

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 351

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 352

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 353

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 354

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 355

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 356

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 357

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 359

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 360

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 361

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 362

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 363

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 364

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 365

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 366

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 367

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 368

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 369

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 370

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 371

- Walk both pointers from each end inward; advance the smaller side.

## entry 372

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 373

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 374

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 375

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 376

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 377

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 378

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 379

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 380

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 381

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 382

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 383

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 384

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 385

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 386

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 387

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 388

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 389

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 390

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 391

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 392

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 393

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 394

- LIS via patience: each pile holds the smallest tail of length k.

## entry 395

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 396

- Heap when you only need top-k; full sort is wasted work.

## entry 397

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 398

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 399

- StringBuilder: amortize allocation by doubling on grow.

## entry 400

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 401

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 402

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 403

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 404

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 405

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 406

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 407

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 408

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 409

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 410

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 411

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 412

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 413

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 414

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 415

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 416

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 417

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 418

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 419

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 420

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 421

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 422

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 423

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 424

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 425

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 426

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 427

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 428

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 429

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 430

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 431

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 432

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 433

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 434

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 435

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 436

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 437

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 438

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 439

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 440

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 441

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 442

- Walk both pointers from each end inward; advance the smaller side.

## entry 443

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 444

- StringBuilder: amortize allocation by doubling on grow.

## entry 445

- Monotonic stack pops while the new element violates the invariant.

## entry 446

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 447

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 448

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 449

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 450

- Euler tour flattens a tree into an array for range-query LCA.

## entry 451

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 452

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 453

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 454

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 455

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 456

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 457

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 458

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 459

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 460

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 461

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 462

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 463

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 464

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 465

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 466

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 467

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 468

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 469

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 470

- StringBuilder: amortize allocation by doubling on grow.

## entry 471

- Splay tree: every access splays to the root; amortized O(log n).

## entry 472

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 473

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 474

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 475

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 476

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 477

- Monotonic stack pops while the new element violates the invariant.

## entry 478

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 479

- Heap when you only need top-k; full sort is wasted work.

## entry 480

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 481

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 482

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 483

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 484

- LIS via patience: each pile holds the smallest tail of length k.

## entry 485

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 486

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 487

- Greedy by end-time picks the most non-overlapping intervals.

## entry 488

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 489

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 490

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 491

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 492

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 493

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 494

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 495

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 496

- Splay tree: every access splays to the root; amortized O(log n).

## entry 497

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 498

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 499

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 500

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 501

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 502

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 503

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 504

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 505

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 506

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 507

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 508

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 509

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 510

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 511

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 512

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 513

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 514

- Splay tree: every access splays to the root; amortized O(log n).

## entry 515

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 516

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 517

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 518

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 519

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 520

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 521

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 522

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 523

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 524

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 525

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 526

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 527

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 528

- Euler tour flattens a tree into an array for range-query LCA.

## entry 529

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 530

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 531

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 532

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 533

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 534

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 535

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 536

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 537

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 538

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 539

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 540

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 541

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 542

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 543

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 544

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 545

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 546

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 547

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 548

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 549

- Greedy by end-time picks the most non-overlapping intervals.

## entry 550

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 551

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 552

- Monotonic stack pops while the new element violates the invariant.

## entry 553

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 554

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 555

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 556

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 557

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 558

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 559

- Greedy by end-time picks the most non-overlapping intervals.

## entry 560

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 561

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 562

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 563

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 564

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 565

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 566

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 567

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 568

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 569

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 570

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 571

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 572

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 573

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 574

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 575

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 576

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 577

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 578

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 579

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 580

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 581

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 582

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 583

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 584

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 585

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 586

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 587

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 588

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 589

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 590

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 591

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 592

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 593

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 594

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 595

- Walk both pointers from each end inward; advance the smaller side.

## entry 596

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 597

- Stable sort matters when a secondary key was set in a prior pass.

## entry 598

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 599

- Monotonic stack pops while the new element violates the invariant.

## entry 600

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 601

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 602

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 603

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 604

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 605

- Splay tree: every access splays to the root; amortized O(log n).

## entry 606

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 607

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 608

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 609

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 610

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 611

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 612

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 613

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 614

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 615

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 616

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 617

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 618

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 619

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 620

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 621

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 622

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 623

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 624

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 625

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 626

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 627

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 628

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 629

- Heap when you only need top-k; full sort is wasted work.

## entry 630

- Splay tree: every access splays to the root; amortized O(log n).

## entry 631

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 632

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 633

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 634

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 635

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 636

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 637

- Monotonic stack pops while the new element violates the invariant.

## entry 638

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 639

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 640

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 641

- Walk both pointers from each end inward; advance the smaller side.

## entry 642

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 643

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 644

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 645

- Greedy by end-time picks the most non-overlapping intervals.

## entry 646

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 647

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 648

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
