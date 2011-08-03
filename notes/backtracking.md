# backtracking

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Heap when you only need top-k; full sort is wasted work.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Union-Find with path compression amortizes to near-O(1) per op.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Merge intervals: sort by start; extend the running interval while overlapping.

- LIS via patience: each pile holds the smallest tail of length k.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5

- Euler tour flattens a tree into an array for range-query LCA.

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 10

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Euler tour flattens a tree into an array for range-query LCA.

## entry 13

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 15

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

- Greedy by end-time picks the most non-overlapping intervals.

## entry 24

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 25

- StringBuilder: amortize allocation by doubling on grow.

## entry 26

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 32

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

- Greedy by end-time picks the most non-overlapping intervals.

## entry 35

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 37

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 38

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 40

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 44

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 45

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 46

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 52

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 54

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 55

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 57

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 58

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Monotonic stack pops while the new element violates the invariant.

## entry 63

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

- Stable sort matters when a secondary key was set in a prior pass.

## entry 70

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 71

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 72

- Greedy by end-time picks the most non-overlapping intervals.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Greedy by end-time picks the most non-overlapping intervals.

## entry 76

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 78

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 79

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 80

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 81

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 91

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 92

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 96

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 97

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 98

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 100

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 101

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 102

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 103

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 104

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 106

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 107

- Splay tree: every access splays to the root; amortized O(log n).

## entry 108

- Walk both pointers from each end inward; advance the smaller side.

## entry 109

- LIS via patience: each pile holds the smallest tail of length k.

## entry 110

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 111

- Stable sort matters when a secondary key was set in a prior pass.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 114

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 116

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 117

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 118

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 119

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 120

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 121

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 122

- Heap when you only need top-k; full sort is wasted work.

## entry 123

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 124

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 125

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 126

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 127

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 128

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 129

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 130

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 131

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 132

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 133

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 134

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

- Walk both pointers from each end inward; advance the smaller side.

## entry 136

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 137

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 138

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 139

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 140

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 141

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 142

- Heap when you only need top-k; full sort is wasted work.

## entry 143

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 144

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 145

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 146

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 147

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 148

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 149

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 150

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 153

- Heap when you only need top-k; full sort is wasted work.

## entry 154

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 155

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 156

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 157

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 158

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 159

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 160

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 161

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 162

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 163

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 164

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 165

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 166

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 167

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 169

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 170

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 171

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 172

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 173

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 174

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 175

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 176

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 177

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 178

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 179

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 182

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 183

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 184

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 185

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 186

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 187

- Splay tree: every access splays to the root; amortized O(log n).

## entry 188

- Stable sort matters when a secondary key was set in a prior pass.

## entry 189

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 190

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 191

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 192

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 193

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 194

- Euler tour flattens a tree into an array for range-query LCA.

## entry 195

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 196

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 197

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 198

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 199

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 200

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 201

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 202

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 203

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 204

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 205

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 206

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 207

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

- StringBuilder: amortize allocation by doubling on grow.

## entry 209

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 210

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 211

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 212

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 213

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 214

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 215

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 216

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 217

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 218

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 219

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 220

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 221

- LIS via patience: each pile holds the smallest tail of length k.

## entry 222

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 223

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 224

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 225

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 226

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 227

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 228

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 229

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 230

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 231

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 232

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 233

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 234

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 235

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 236

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 237

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 238

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 239

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 240

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 241

- Greedy by end-time picks the most non-overlapping intervals.

## entry 242

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 243

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 244

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 245

- StringBuilder: amortize allocation by doubling on grow.

## entry 246

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 247

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 248

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 249

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 250

- Monotonic stack pops while the new element violates the invariant.

## entry 251

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 252

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 253

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 254

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 255

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 256

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 257

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 258

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 259

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 260

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 261

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 262

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 263

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 264

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 265

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 266

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 267

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 268

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 269

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 270

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 271

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 272

- Euler tour flattens a tree into an array for range-query LCA.

## entry 273

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 274

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 275

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 276

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 277

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 278

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 279

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 280

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 281

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 282

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 283

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 284

- Heap when you only need top-k; full sort is wasted work.

## entry 285

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 286

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 287

- Splay tree: every access splays to the root; amortized O(log n).

## entry 288

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 289

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 290

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 291

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 292

- LIS via patience: each pile holds the smallest tail of length k.

## entry 293

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 294

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 295

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 296

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 297

- Splay tree: every access splays to the root; amortized O(log n).

## entry 298

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 299

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 300

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 301

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 302

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 303

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 304

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 305

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 306

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 307

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 308

- Stable sort matters when a secondary key was set in a prior pass.

## entry 309

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 310

- Greedy by end-time picks the most non-overlapping intervals.

## entry 311

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 312

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 313

- Euler tour flattens a tree into an array for range-query LCA.

## entry 314

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 315

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 316

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 317

- Heap when you only need top-k; full sort is wasted work.

## entry 318

- Splay tree: every access splays to the root; amortized O(log n).

## entry 319

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 320

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 321

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 322

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 323

- Greedy by end-time picks the most non-overlapping intervals.

## entry 324

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 325

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 326

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 327

- Walk both pointers from each end inward; advance the smaller side.

## entry 328

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 329

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 330

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 331

- StringBuilder: amortize allocation by doubling on grow.

## entry 332

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 333

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 334

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 335

- Monotonic stack pops while the new element violates the invariant.

## entry 336

- Heap when you only need top-k; full sort is wasted work.

## entry 337

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 338

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 339

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 340

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 341

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 342

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 343

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 344

- Walk both pointers from each end inward; advance the smaller side.

## entry 345

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 346

- Stable sort matters when a secondary key was set in a prior pass.

## entry 347

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 348

- Heap when you only need top-k; full sort is wasted work.

## entry 349

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 350

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 351

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 352

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 353

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 354

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 355

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 356

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 357

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 358

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 359

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 360

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 361

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 362

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 363

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 364

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 365

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 366

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 367

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 368

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 369

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 370

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 372

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 373

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 374

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 375

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 376

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 377

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 378

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 379

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 380

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 381

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 382

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 383

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 384

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 385

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 386

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 387

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 388

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 389

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 390

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 391

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 392

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 393

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 394

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 395

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 396

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 398

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 399

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 400

- Euler tour flattens a tree into an array for range-query LCA.

## entry 401

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 402

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 403

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 404

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 405

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 406

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 407

- Walk both pointers from each end inward; advance the smaller side.

## entry 408

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 409

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 410

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 411

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 412

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 413

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 414

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 415

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 416

- LIS via patience: each pile holds the smallest tail of length k.

## entry 417

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 418

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 419

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 420

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 421

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 422

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 423

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 424

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 425

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 426

- Monotonic stack pops while the new element violates the invariant.

## entry 427

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 428

- Heap when you only need top-k; full sort is wasted work.

## entry 429

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 430

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 431

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 432

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 433

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 434

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 435

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 436

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 437

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 438

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 439

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 440

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 441

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 442

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 443

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 444

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 445

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 446

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 447

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 448

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 449

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 450

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 451

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 452

- Walk both pointers from each end inward; advance the smaller side.

## entry 453

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 454

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 455

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 456

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 457

- Splay tree: every access splays to the root; amortized O(log n).

## entry 458

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 459

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 460

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 461

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 462

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 463

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 464

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 465

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 466

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 467

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 468

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 469

- Stable sort matters when a secondary key was set in a prior pass.

## entry 470

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 471

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 472

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 473

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 474

- Walk both pointers from each end inward; advance the smaller side.

## entry 475

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 476

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 477

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 478

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 479

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 480

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 481

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 482

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 483

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 484

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 485

- Monotonic stack pops while the new element violates the invariant.

## entry 486

- StringBuilder: amortize allocation by doubling on grow.

## entry 487

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 488

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 489

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 490

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 491

- Monotonic stack pops while the new element violates the invariant.

## entry 492

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 493

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 494

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 495

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 496

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 497

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 498

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 499

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 500

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 501

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 502

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 503

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 504

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 505

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 506

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 507

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 508

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 509

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 510

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 511

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 512

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 513

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 514

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 515

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 516

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 517

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 518

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 519

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 520

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 521

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 522

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 523

- Greedy by end-time picks the most non-overlapping intervals.

## entry 524

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 525

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 526

- Splay tree: every access splays to the root; amortized O(log n).

## entry 527

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 528

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 529

- Stable sort matters when a secondary key was set in a prior pass.

## entry 530

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 531

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 532

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 533

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 534

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 535

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 536

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 537

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 538

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 539

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 540

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 541

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 542

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 543

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 544

- Heap when you only need top-k; full sort is wasted work.

## entry 545

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 546

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 547

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 548

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 549

- Walk both pointers from each end inward; advance the smaller side.

## entry 550

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 551

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 552

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 553

- StringBuilder: amortize allocation by doubling on grow.

## entry 554

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 555

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 556

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 557

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 558

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 559

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 560

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 561

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 562

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 563

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 564

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 565

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 566

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 567

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 568

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 569

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 570

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 571

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 572

- Walk both pointers from each end inward; advance the smaller side.

## entry 573

- StringBuilder: amortize allocation by doubling on grow.

## entry 574

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 575

- Splay tree: every access splays to the root; amortized O(log n).

## entry 576

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 577

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 578

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 579

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 580

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 581

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 582

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 583

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 584

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 585

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 586

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 587

- Walk both pointers from each end inward; advance the smaller side.

## entry 588

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 589

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 590

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 591

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 592

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 593

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 594

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 595

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 596

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 597

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 598

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 599

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 600

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 601

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 602

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 603

- LIS via patience: each pile holds the smallest tail of length k.

## entry 604

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 605

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 606

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 607

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 608

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 609

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 610

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 611

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 612

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 613

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 614

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 615

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 616

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 617

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 618

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 619

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
