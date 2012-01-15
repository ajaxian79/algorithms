# kosaraju

## entry 1

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 14

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Greedy by end-time picks the most non-overlapping intervals.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

- Stable sort matters when a secondary key was set in a prior pass.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 31

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 32

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 36

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 39

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Stable sort matters when a secondary key was set in a prior pass.

## entry 43

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 44

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 49

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 50

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 55

- Euler tour flattens a tree into an array for range-query LCA.

## entry 56

- Walk both pointers from each end inward; advance the smaller side.

## entry 57

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 62

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 63

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 64

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 65

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 66

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 68

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

- Splay tree: every access splays to the root; amortized O(log n).

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- LIS via patience: each pile holds the smallest tail of length k.

## entry 76

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 77

- Heap when you only need top-k; full sort is wasted work.

## entry 78

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 83

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 87

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 88

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 89

- Splay tree: every access splays to the root; amortized O(log n).

## entry 90

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 91

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 92

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 93

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 94

- StringBuilder: amortize allocation by doubling on grow.

## entry 95

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 96

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 97

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 98

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 100

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- Monotonic stack pops while the new element violates the invariant.

## entry 103

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 104

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 105

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 106

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 107

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 108

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 109

- Heap when you only need top-k; full sort is wasted work.

## entry 110

- StringBuilder: amortize allocation by doubling on grow.

## entry 111

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 112

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 115

- Euler tour flattens a tree into an array for range-query LCA.

## entry 116

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 117

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 119

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 121

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 123

- Walk both pointers from each end inward; advance the smaller side.

## entry 124

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 126

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 127

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 129

- Heap when you only need top-k; full sort is wasted work.

## entry 130

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 131

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 132

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 133

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 134

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 136

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 137

- StringBuilder: amortize allocation by doubling on grow.

## entry 138

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 139

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 140

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 141

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 142

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 146

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 147

- LIS via patience: each pile holds the smallest tail of length k.

## entry 148

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 149

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 150

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 151

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Walk both pointers from each end inward; advance the smaller side.

## entry 155

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 156

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 158

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 159

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 160

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 161

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 162

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 163

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 164

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 165

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 169

- LIS via patience: each pile holds the smallest tail of length k.

## entry 170

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 172

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 174

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 175

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 176

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 177

- StringBuilder: amortize allocation by doubling on grow.

## entry 178

- LIS via patience: each pile holds the smallest tail of length k.

## entry 179

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 180

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- Walk both pointers from each end inward; advance the smaller side.

## entry 183

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 184

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 185

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 186

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 187

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 188

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 189

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 190

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 191

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

- Stable sort matters when a secondary key was set in a prior pass.

## entry 193

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 195

- Greedy by end-time picks the most non-overlapping intervals.

## entry 196

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 197

- LIS via patience: each pile holds the smallest tail of length k.

## entry 198

- Heap when you only need top-k; full sort is wasted work.

## entry 199

- StringBuilder: amortize allocation by doubling on grow.

## entry 200

- Walk both pointers from each end inward; advance the smaller side.

## entry 201

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 203

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 204

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 205

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 206

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 207

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 208

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 209

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 210

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 211

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 214

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 215

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 216

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 217

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 218

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 222

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 223

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 224

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 225

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 226

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 228

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 229

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 230

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 232

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 233

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 234

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 235

- LIS via patience: each pile holds the smallest tail of length k.

## entry 236

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 237

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 238

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 239

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 240

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 242

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 243

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 244

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 246

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 247

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 248

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 249

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 250

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 251

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 252

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 253

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 254

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 255

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 256

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 257

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 258

- Splay tree: every access splays to the root; amortized O(log n).

## entry 259

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 260

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 261

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 262

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 263

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 264

- Monotonic stack pops while the new element violates the invariant.

## entry 265

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 266

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 267

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 268

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 269

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 270

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 271

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 272

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 273

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 274

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 275

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 276

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 277

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 278

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 279

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 280

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 281

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 282

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 283

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 284

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 285

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 286

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 287

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 288

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 289

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 290

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 291

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 292

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 293

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 294

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 295

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 296

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 297

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 298

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 299

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 300

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 301

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 302

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 303

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 304

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 305

- Greedy by end-time picks the most non-overlapping intervals.

## entry 306

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 307

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 308

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 309

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 310

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 311

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 312

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 313

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 314

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 315

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 316

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 317

- Walk both pointers from each end inward; advance the smaller side.

## entry 318

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 319

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 320

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 321

- Euler tour flattens a tree into an array for range-query LCA.

## entry 322

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 323

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 324

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 325

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 326

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 327

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 328

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 329

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 331

- Splay tree: every access splays to the root; amortized O(log n).

## entry 332

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 333

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 334

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 335

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 336

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 337

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 338

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 339

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 340

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 341

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 342

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 343

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 344

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 345

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 346

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 347

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 348

- Greedy by end-time picks the most non-overlapping intervals.

## entry 349

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 350

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 351

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 352

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 353

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 354

- Euler tour flattens a tree into an array for range-query LCA.

## entry 355

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 356

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 357

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 358

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 359

- Greedy by end-time picks the most non-overlapping intervals.

## entry 360

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 361

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 362

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 363

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 364

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 365

- Stable sort matters when a secondary key was set in a prior pass.

## entry 366

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 367

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 368

- Euler tour flattens a tree into an array for range-query LCA.

## entry 369

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 370

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 371

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 372

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 373

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 374

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 375

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 376

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 377

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 378

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 379

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 380

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 381

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 382

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 383

- Monotonic stack pops while the new element violates the invariant.

## entry 384

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 385

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 386

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 387

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 388

- Walk both pointers from each end inward; advance the smaller side.

## entry 389

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 390

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 392

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 393

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 394

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 395

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 396

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 397

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 398

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 399

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 400

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 401

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 402

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 403

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 404

- LIS via patience: each pile holds the smallest tail of length k.

## entry 405

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 406

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 407

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 408

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 409

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 410

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 411

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 412

- LIS via patience: each pile holds the smallest tail of length k.

## entry 413

- Greedy by end-time picks the most non-overlapping intervals.

## entry 414

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 415

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 416

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 417

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 418

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 419

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 420

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 421

- Splay tree: every access splays to the root; amortized O(log n).

## entry 422

- Euler tour flattens a tree into an array for range-query LCA.

## entry 423

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 424

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 425

- Monotonic stack pops while the new element violates the invariant.

## entry 426

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 427

- Euler tour flattens a tree into an array for range-query LCA.

## entry 428

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 429

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 430

- Stable sort matters when a secondary key was set in a prior pass.

## entry 431

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 432

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 433

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 434

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 435

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 436

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 437

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 438

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 439

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 440

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 441

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 442

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 443

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 444

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 445

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 446

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 447

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 448

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 449

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 450

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 451

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 452

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 453

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 454

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 455

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 456

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 457

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 458

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 459

- Heap when you only need top-k; full sort is wasted work.

## entry 460

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 461

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 462

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 463

- Stable sort matters when a secondary key was set in a prior pass.

## entry 464

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 465

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 466

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 467

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 468

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

- StringBuilder: amortize allocation by doubling on grow.

## entry 470

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 471

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 472

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 473

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 474

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 475

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 476

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 477

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 478

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 479

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 480

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 481

- Stable sort matters when a secondary key was set in a prior pass.

## entry 482

- Euler tour flattens a tree into an array for range-query LCA.

## entry 483

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 484

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 485

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 486

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 487

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 488

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 489

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 490

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 491

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 492

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 493

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 494

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 495

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 496

- Greedy by end-time picks the most non-overlapping intervals.

## entry 497

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 498

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 499

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 500

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 501

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 502

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 503

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 504

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 505

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 506

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 507

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 508

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 509

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 510

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 511

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 512

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 513

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 514

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 515

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 516

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 517

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 518

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 519

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 520

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 521

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 522

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 523

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 524

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 525

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 526

- Walk both pointers from each end inward; advance the smaller side.

## entry 527

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 528

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 529

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 530

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 531

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 532

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 533

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 534

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 535

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 536

- Stable sort matters when a secondary key was set in a prior pass.

## entry 537

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 538

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 539

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 540

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 541

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 542

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 543

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 544

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 545

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 546

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 547

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 548

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 549

- Euler tour flattens a tree into an array for range-query LCA.

## entry 550

- LIS via patience: each pile holds the smallest tail of length k.

## entry 551

- StringBuilder: amortize allocation by doubling on grow.

## entry 552

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 553

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 554

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 555

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 556

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 557

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 558

- Splay tree: every access splays to the root; amortized O(log n).

## entry 559

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 560

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 561

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 562

- Monotonic stack pops while the new element violates the invariant.

## entry 563

- Heap when you only need top-k; full sort is wasted work.

## entry 564

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 565

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 566

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 567

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 568

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 569

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 570

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 571

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 572

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 573

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 574

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 575

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 576

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 577

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 578

- LIS via patience: each pile holds the smallest tail of length k.

## entry 579

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 580

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 581

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 582

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 583

- Monotonic stack pops while the new element violates the invariant.

## entry 584

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 585

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 586

- Euler tour flattens a tree into an array for range-query LCA.

## entry 587

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 588

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 589

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 590

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 591

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 592

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 593

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 594

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 595

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 596

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 597

- Euler tour flattens a tree into an array for range-query LCA.

## entry 598

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 599

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 600

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 601

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 602

- Splay tree: every access splays to the root; amortized O(log n).

## entry 603

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 604

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 605

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 606

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 607

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 608

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 609

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 610

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 611

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 612

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 613

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 614

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 615

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 616

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 617

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 618

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 619

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 620

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 621

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 622

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 623

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 624

- Euler tour flattens a tree into an array for range-query LCA.

## entry 625

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 626

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 627

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 628

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 629

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 630

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 631

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 632

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 633

- Heap when you only need top-k; full sort is wasted work.

## entry 634

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 635

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 636

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 637

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 638

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 639

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 640

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 641

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
