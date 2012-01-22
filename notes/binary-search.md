# binary-search

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Union-Find with path compression amortizes to near-O(1) per op.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Heap when you only need top-k; full sort is wasted work.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Greedy by end-time picks the most non-overlapping intervals.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5

- StringBuilder: amortize allocation by doubling on grow.

## entry 6

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 8

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 9

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 10

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 14

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 15

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 16

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 23

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 27

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 30

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 31

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 35

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 44

- Monotonic stack pops while the new element violates the invariant.

## entry 45

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 47

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 48

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 49

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 50

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 51

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 57

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 58

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 60

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 61

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 63

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 64

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 65

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 66

- LIS via patience: each pile holds the smallest tail of length k.

## entry 67

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 68

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 71

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 72

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 73

- StringBuilder: amortize allocation by doubling on grow.

## entry 74

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 75

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 76

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 80

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 81

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 82

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 83

- Splay tree: every access splays to the root; amortized O(log n).

## entry 84

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 86

- Monotonic stack pops while the new element violates the invariant.

## entry 87

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 88

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 90

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 92

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 93

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 94

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 95

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 96

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 97

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 98

- LIS via patience: each pile holds the smallest tail of length k.

## entry 99

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 100

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 101

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 102

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 103

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 104

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 106

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 109

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 111

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 112

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 113

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 114

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 116

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 117

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 119

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 120

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 121

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 125

- Greedy by end-time picks the most non-overlapping intervals.

## entry 126

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 127

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 128

- Stable sort matters when a secondary key was set in a prior pass.

## entry 129

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 130

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 131

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 132

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 133

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 134

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 135

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 136

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 138

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 139

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 140

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 141

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 142

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 143

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 144

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 145

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 146

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 147

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 148

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 149

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 150

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 151

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 152

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 153

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 154

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 155

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 156

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 157

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 158

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 159

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 160

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 161

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

- Greedy by end-time picks the most non-overlapping intervals.

## entry 163

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 165

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 166

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 167

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 168

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

- Splay tree: every access splays to the root; amortized O(log n).

## entry 170

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 171

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 172

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 174

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 175

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 176

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 177

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 178

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 179

- LIS via patience: each pile holds the smallest tail of length k.

## entry 180

- Splay tree: every access splays to the root; amortized O(log n).

## entry 181

- StringBuilder: amortize allocation by doubling on grow.

## entry 182

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 183

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 184

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 186

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 187

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 188

- LIS via patience: each pile holds the smallest tail of length k.

## entry 189

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 190

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 191

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 192

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 193

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 194

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 195

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 196

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 197

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 198

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 199

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 200

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 201

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 202

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 203

- Stable sort matters when a secondary key was set in a prior pass.

## entry 204

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 205

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 206

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 207

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 208

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 209

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 210

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 211

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 212

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 213

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 214

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 215

- Monotonic stack pops while the new element violates the invariant.

## entry 216

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 217

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 218

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 219

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 220

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 221

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 222

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 223

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 224

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 225

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 226

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- Monotonic stack pops while the new element violates the invariant.

## entry 229

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 230

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 231

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 232

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 233

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 234

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 235

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 236

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 237

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 238

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 239

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 240

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 241

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 242

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 243

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 244

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 245

- Splay tree: every access splays to the root; amortized O(log n).

## entry 246

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 247

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 248

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 249

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 250

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 251

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 252

- Greedy by end-time picks the most non-overlapping intervals.

## entry 253

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 254

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 255

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 256

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 257

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 258

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 259

- StringBuilder: amortize allocation by doubling on grow.

## entry 260

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 261

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 262

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 263

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 264

- StringBuilder: amortize allocation by doubling on grow.

## entry 265

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 266

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 267

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 268

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 269

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 270

- Euler tour flattens a tree into an array for range-query LCA.

## entry 271

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 272

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 273

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 274

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 275

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 276

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 277

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 278

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 279

- Heap when you only need top-k; full sort is wasted work.

## entry 280

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 281

- Splay tree: every access splays to the root; amortized O(log n).

## entry 282

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 283

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 284

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 285

- Greedy by end-time picks the most non-overlapping intervals.

## entry 286

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 287

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 288

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 289

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 290

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 291

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 292

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 293

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 294

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 295

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 296

- Stable sort matters when a secondary key was set in a prior pass.

## entry 297

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 298

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 299

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 300

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 301

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 302

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 303

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 304

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 305

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 306

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 307

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 308

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 309

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 310

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 312

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 313

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 314

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 315

- Greedy by end-time picks the most non-overlapping intervals.

## entry 316

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 317

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 318

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 319

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 320

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 321

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 322

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 323

- Monotonic stack pops while the new element violates the invariant.

## entry 324

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 325

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 326

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 327

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 328

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 329

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 330

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 331

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 332

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 333

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 334

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 335

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 336

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 337

- Splay tree: every access splays to the root; amortized O(log n).

## entry 338

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 339

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 340

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 341

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 342

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 343

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 344

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 345

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 346

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 347

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 349

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 351

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 352

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 353

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 354

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 355

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 356

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 357

- Heap when you only need top-k; full sort is wasted work.

## entry 358

- Walk both pointers from each end inward; advance the smaller side.

## entry 359

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 360

- StringBuilder: amortize allocation by doubling on grow.

## entry 361

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 362

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 363

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 364

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 365

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 366

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 367

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 368

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 369

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 370

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 371

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 372

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 373

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 374

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 375

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 376

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 377

- Stable sort matters when a secondary key was set in a prior pass.

## entry 378

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 379

- Euler tour flattens a tree into an array for range-query LCA.

## entry 380

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 381

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 382

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 383

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 384

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 385

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 386

- LIS via patience: each pile holds the smallest tail of length k.

## entry 387

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 388

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 389

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 390

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 391

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 392

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 393

- LIS via patience: each pile holds the smallest tail of length k.

## entry 394

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 395

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 396

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 397

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 398

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 399

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 400

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 401

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 402

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 403

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 404

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 405

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 406

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 407

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 408

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 409

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 410

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 411

- LIS via patience: each pile holds the smallest tail of length k.

## entry 412

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 413

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 414

- StringBuilder: amortize allocation by doubling on grow.

## entry 415

- StringBuilder: amortize allocation by doubling on grow.

## entry 416

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 417

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 418

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 419

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 420

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 421

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 422

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 423

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 424

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 425

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 426

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 427

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 428

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 429

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 430

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 431

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 432

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 433

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 434

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 435

- LIS via patience: each pile holds the smallest tail of length k.

## entry 436

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 437

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 438

- LIS via patience: each pile holds the smallest tail of length k.

## entry 439

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 441

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 442

- Stable sort matters when a secondary key was set in a prior pass.

## entry 443

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 444

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 445

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 446

- Walk both pointers from each end inward; advance the smaller side.

## entry 447

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 448

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 449

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 450

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 451

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 452

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 453

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 454

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 455

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 456

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 457

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 458

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 459

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 460

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 461

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 462

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 463

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 464

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 465

- Walk both pointers from each end inward; advance the smaller side.

## entry 466

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 467

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 468

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 469

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 470

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 471

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 472

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 473

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 475

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 476

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 477

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 478

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 479

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 480

- Monotonic stack pops while the new element violates the invariant.

## entry 481

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 482

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 483

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 484

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 485

- Greedy by end-time picks the most non-overlapping intervals.

## entry 486

- Monotonic stack pops while the new element violates the invariant.

## entry 487

- Heap when you only need top-k; full sort is wasted work.

## entry 488

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 489

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 490

- Heap when you only need top-k; full sort is wasted work.

## entry 491

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 492

- Heap when you only need top-k; full sort is wasted work.

## entry 493

- Splay tree: every access splays to the root; amortized O(log n).

## entry 494

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 495

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 496

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 497

- Stable sort matters when a secondary key was set in a prior pass.

## entry 498

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 499

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 500

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 501

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 502

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 503

- Stable sort matters when a secondary key was set in a prior pass.

## entry 504

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 505

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 506

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 507

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 508

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 509

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 510

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 511

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 512

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 513

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 514

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 515

- Walk both pointers from each end inward; advance the smaller side.

## entry 516

- Euler tour flattens a tree into an array for range-query LCA.

## entry 517

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 518

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 519

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 520

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 521

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 522

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 523

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 524

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 525

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 526

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 527

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 528

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 529

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 530

- Euler tour flattens a tree into an array for range-query LCA.

## entry 531

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 532

- Monotonic stack pops while the new element violates the invariant.

## entry 533

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 534

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 535

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 536

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 537

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 538

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 539

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 540

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 541

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 542

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 543

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 544

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 545

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 546

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 547

- StringBuilder: amortize allocation by doubling on grow.

## entry 548

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 549

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 550

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 551

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 552

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 553

- Stable sort matters when a secondary key was set in a prior pass.

## entry 554

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 555

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 556

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 557

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 558

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 559

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 560

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 561

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 562

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 563

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 564

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 565

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 566

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 567

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 568

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 569

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 570

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 571

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 572

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 573

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 574

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 575

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 576

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 577

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 578

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 579

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 580

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 581

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 582

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 583

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 584

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 585

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 586

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 587

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 588

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 589

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 590

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 591

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 592

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 593

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 594

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 595

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 596

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 597

- Euler tour flattens a tree into an array for range-query LCA.

## entry 598

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 599

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 600

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 601

- StringBuilder: amortize allocation by doubling on grow.

## entry 602

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 603

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 604

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 605

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 606

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 607

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 608

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 609

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 610

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 611

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 612

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 613

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 614

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 615

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 616

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 617

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 618

- Walk both pointers from each end inward; advance the smaller side.

## entry 619

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 620

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 621

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 622

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 623

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 624

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 625

- Graph DP on DAGs: topological order makes the dependency direction explicit.
