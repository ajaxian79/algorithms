# two-pointer

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Union-Find with path compression amortizes to near-O(1) per op.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LIS via patience: each pile holds the smallest tail of length k.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Stable sort matters when a secondary key was set in a prior pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 12

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 13

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 14

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 17

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 27

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 34

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 35

- Monotonic stack pops while the new element violates the invariant.

## entry 36

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 37

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 40

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 42

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 45

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 46

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 47

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 48

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 50

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 51

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 52

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 53

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 54

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 55

- LIS via patience: each pile holds the smallest tail of length k.

## entry 56

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- StringBuilder: amortize allocation by doubling on grow.

## entry 62

- Monotonic stack pops while the new element violates the invariant.

## entry 63

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 68

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 69

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 70

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 72

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 73

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 80

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 82

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 83

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 84

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 86

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 88

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 89

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 90

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 91

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 92

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 93

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 96

- Euler tour flattens a tree into an array for range-query LCA.

## entry 97

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 100

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 101

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 104

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 105

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 106

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 108

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 109

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 112

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 113

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 114

- LIS via patience: each pile holds the smallest tail of length k.

## entry 115

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 116

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 117

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 118

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

- Heap when you only need top-k; full sort is wasted work.

## entry 120

- Heap when you only need top-k; full sort is wasted work.

## entry 121

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 122

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 123

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 124

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 125

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 126

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 127

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 129

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 130

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 131

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 132

- Stable sort matters when a secondary key was set in a prior pass.

## entry 133

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 134

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 135

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 136

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 137

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 138

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 139

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 140

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 141

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 142

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 143

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 144

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 145

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 146

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 147

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 148

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 150

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 151

- Greedy by end-time picks the most non-overlapping intervals.

## entry 152

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 153

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 154

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 155

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 156

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 157

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 158

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 159

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 160

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 161

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 163

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 164

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 165

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 166

- Walk both pointers from each end inward; advance the smaller side.

## entry 167

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 168

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 169

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 170

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 171

- StringBuilder: amortize allocation by doubling on grow.

## entry 172

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 173

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 174

- Monotonic stack pops while the new element violates the invariant.

## entry 175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 177

- StringBuilder: amortize allocation by doubling on grow.

## entry 178

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 179

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 180

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 181

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 183

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 184

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 185

- Greedy by end-time picks the most non-overlapping intervals.

## entry 186

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 187

- Splay tree: every access splays to the root; amortized O(log n).

## entry 188

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 189

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 191

- Heap when you only need top-k; full sort is wasted work.

## entry 192

- Walk both pointers from each end inward; advance the smaller side.

## entry 193

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 194

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 195

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 196

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 197

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 198

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 199

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 200

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 201

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 203

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 204

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 205

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 206

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 208

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 209

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 210

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 212

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 213

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 214

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 215

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 217

- StringBuilder: amortize allocation by doubling on grow.

## entry 218

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 219

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 220

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 221

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 222

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 223

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 224

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 225

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 226

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 227

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 228

- Greedy by end-time picks the most non-overlapping intervals.

## entry 229

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 230

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 231

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 232

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 233

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 234

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 236

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 237

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 238

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 239

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 240

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 241

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 242

- Stable sort matters when a secondary key was set in a prior pass.

## entry 243

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 244

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 245

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 246

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 247

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 248

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 249

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 250

- Stable sort matters when a secondary key was set in a prior pass.

## entry 251

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 252

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 253

- Stable sort matters when a secondary key was set in a prior pass.

## entry 254

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 255

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 256

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 257

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 259

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 260

- StringBuilder: amortize allocation by doubling on grow.

## entry 261

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 262

- LIS via patience: each pile holds the smallest tail of length k.

## entry 263

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 264

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 265

- Greedy by end-time picks the most non-overlapping intervals.

## entry 266

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 267

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 268

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 269

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 270

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 271

- Splay tree: every access splays to the root; amortized O(log n).

## entry 272

- LIS via patience: each pile holds the smallest tail of length k.

## entry 273

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 274

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 275

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 276

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 277

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 278

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 279

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 280

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 281

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 282

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 283

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 284

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 286

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 287

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 288

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 289

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 290

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 291

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 292

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 293

- Walk both pointers from each end inward; advance the smaller side.

## entry 294

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 295

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 296

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 297

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 298

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 299

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 300

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 301

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 302

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 303

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 305

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 306

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 307

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 308

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 309

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 310

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 311

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 312

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 313

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 314

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 315

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 316

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 317

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 318

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 319

- Heap when you only need top-k; full sort is wasted work.

## entry 320

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 321

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 322

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 323

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 324

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 325

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 326

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 327

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 328

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 329

- Walk both pointers from each end inward; advance the smaller side.

## entry 330

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 331

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 332

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 333

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 334

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 335

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 336

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 337

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 338

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 339

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 340

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 341

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 342

- Walk both pointers from each end inward; advance the smaller side.

## entry 343

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 344

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 345

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 346

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 347

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 348

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 349

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 351

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 352

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 353

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 354

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 355

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 356

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 357

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 358

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 359

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 360

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 361

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 362

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 363

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 364

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 365

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 366

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 367

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 368

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 369

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 370

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 371

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 372

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 373

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 374

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 375

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 376

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 377

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 378

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 379

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 380

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 381

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 382

- Walk both pointers from each end inward; advance the smaller side.

## entry 383

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 384

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 385

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 386

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 387

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 388

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 389

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 390

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 391

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 392

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 393

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 394

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 395

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 396

- Stable sort matters when a secondary key was set in a prior pass.

## entry 397

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 398

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 399

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 400

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 401

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 402

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 403

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 404

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 405

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 406

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 407

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 408

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 409

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 410

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 411

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 412

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 413

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 414

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 415

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 416

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 417

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 418

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 419

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 420

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 421

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 422

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 423

- StringBuilder: amortize allocation by doubling on grow.

## entry 424

- Euler tour flattens a tree into an array for range-query LCA.

## entry 425

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 426

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 427

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 428

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 429

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 430

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 431

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 432

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 433

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 434

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 435

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 436

- Heap when you only need top-k; full sort is wasted work.

## entry 437

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 438

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 439

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 440

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 441

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 442

- StringBuilder: amortize allocation by doubling on grow.

## entry 443

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 444

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 445

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 446

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 447

- Heap when you only need top-k; full sort is wasted work.

## entry 448

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 449

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 450

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 451

- Greedy by end-time picks the most non-overlapping intervals.

## entry 452

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 453

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 454

- Heap when you only need top-k; full sort is wasted work.

## entry 455

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 456

- Greedy by end-time picks the most non-overlapping intervals.

## entry 457

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 458

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 459

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 460

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 461

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 462

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 463

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 464

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 465

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 466

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 467

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 468

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 469

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 470

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 471

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 472

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 473

- Euler tour flattens a tree into an array for range-query LCA.

## entry 474

- Euler tour flattens a tree into an array for range-query LCA.

## entry 475

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 476

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 477

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 478

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 479

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 480

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 481

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 482

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 483

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 484

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 485

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 486

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 487

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 488

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 489

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 490

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 491

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 492

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 493

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 494

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 495

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 497

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 498

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 499

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 500

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 501

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 502

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 503

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 504

- StringBuilder: amortize allocation by doubling on grow.

## entry 505

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 506

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 507

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 508

- Splay tree: every access splays to the root; amortized O(log n).

## entry 509

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 510

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 511

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 512

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 513

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 514

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 515

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 516

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 517

- Stable sort matters when a secondary key was set in a prior pass.

## entry 518

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 519

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 520

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 521

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 522

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
