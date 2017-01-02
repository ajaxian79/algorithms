# quickselect

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Euler tour flattens a tree into an array for range-query LCA.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 27

- Splay tree: every access splays to the root; amortized O(log n).

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 34

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 40

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 41

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 42

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 43

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 45

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 52

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 54

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 58

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 59

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 60

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 63

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 67

- Monotonic stack pops while the new element violates the invariant.

## entry 68

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 69

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

- StringBuilder: amortize allocation by doubling on grow.

## entry 71

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 72

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 77

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 78

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 79

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 80

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 86

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 87

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 88

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 91

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 92

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 95

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 96

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 97

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Splay tree: every access splays to the root; amortized O(log n).

## entry 101

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 102

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 103

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

- Stable sort matters when a secondary key was set in a prior pass.

## entry 105

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 106

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 108

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

- Monotonic stack pops while the new element violates the invariant.

## entry 111

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 112

- StringBuilder: amortize allocation by doubling on grow.

## entry 113

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 114

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 115

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 116

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 118

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 119

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 120

- Greedy by end-time picks the most non-overlapping intervals.

## entry 121

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 122

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 123

- Monotonic stack pops while the new element violates the invariant.

## entry 124

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 126

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 127

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 128

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 129

- Splay tree: every access splays to the root; amortized O(log n).

## entry 130

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 131

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 132

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 133

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 134

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 135

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 136

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 137

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 138

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

- Splay tree: every access splays to the root; amortized O(log n).

## entry 140

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 141

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 142

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 143

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 144

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 145

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 146

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 147

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 148

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 149

- Splay tree: every access splays to the root; amortized O(log n).

## entry 150

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 151

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 152

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 153

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 154

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 155

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 156

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 157

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 158

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 159

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 160

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 161

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 162

- Splay tree: every access splays to the root; amortized O(log n).

## entry 163

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 164

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 165

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 166

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 167

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 168

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 169

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 170

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 171

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 172

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 173

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 174

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 175

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 176

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 177

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 178

- Stable sort matters when a secondary key was set in a prior pass.

## entry 179

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 180

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 181

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 182

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 183

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 184

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 185

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 186

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 187

- Heap when you only need top-k; full sort is wasted work.

## entry 188

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 189

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 190

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 191

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 192

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 193

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 194

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 195

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 196

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 197

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 198

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 199

- Splay tree: every access splays to the root; amortized O(log n).

## entry 200

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 201

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 202

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 203

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 204

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 207

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 208

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 209

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 211

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 212

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 213

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 214

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 215

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 216

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 217

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 218

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 219

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 220

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

- Stable sort matters when a secondary key was set in a prior pass.

## entry 222

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 223

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 224

- Splay tree: every access splays to the root; amortized O(log n).

## entry 225

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 226

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 227

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 229

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 230

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 231

- Stable sort matters when a secondary key was set in a prior pass.

## entry 232

- Stable sort matters when a secondary key was set in a prior pass.

## entry 233

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 234

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 235

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 236

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 237

- Heap when you only need top-k; full sort is wasted work.

## entry 238

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 239

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 240

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 241

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 242

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 243

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 244

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 245

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 246

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 247

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 248

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 249

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 250

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 251

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 252

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 253

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 254

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 255

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 256

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 258

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 259

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 260

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 261

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 262

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 263

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 264

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 265

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 266

- Greedy by end-time picks the most non-overlapping intervals.

## entry 267

- Walk both pointers from each end inward; advance the smaller side.

## entry 268

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 269

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 270

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 271

- Heap when you only need top-k; full sort is wasted work.

## entry 272

- Walk both pointers from each end inward; advance the smaller side.

## entry 273

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 274

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 275

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 276

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 277

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 278

- LIS via patience: each pile holds the smallest tail of length k.

## entry 279

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 280

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 281

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 282

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 283

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 284

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 285

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 286

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 287

- Splay tree: every access splays to the root; amortized O(log n).

## entry 288

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 289

- Walk both pointers from each end inward; advance the smaller side.

## entry 290

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 291

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 292

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 293

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 294

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 295

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 296

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 297

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 298

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 299

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 300

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 301

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 303

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 304

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 305

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 306

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 307

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 308

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 310

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 311

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 312

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 313

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 314

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 315

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 316

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 317

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 318

- Heap when you only need top-k; full sort is wasted work.

## entry 319

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 320

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 321

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 322

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 323

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 324

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 325

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 328

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 329

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 331

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 332

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 333

- Greedy by end-time picks the most non-overlapping intervals.

## entry 334

- Heap when you only need top-k; full sort is wasted work.

## entry 335

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 336

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 337

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 338

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 339

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 340

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 341

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 342

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 343

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 344

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 345

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 346

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 347

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 348

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 349

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 350

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 351

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 352

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 353

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 354

- Heap when you only need top-k; full sort is wasted work.

## entry 355

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 356

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 357

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 358

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 359

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 360

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 361

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 362

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 363

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 364

- Euler tour flattens a tree into an array for range-query LCA.

## entry 365

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 366

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 367

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 368

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 369

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 370

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 371

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 372

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 373

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 374

- Stable sort matters when a secondary key was set in a prior pass.

## entry 375

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 376

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 377

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 378

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 379

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 380

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 381

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 382

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 383

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 384

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 385

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 386

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 387

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 388

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 389

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 390

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 391

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 392

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 393

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 394

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 395

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 396

- StringBuilder: amortize allocation by doubling on grow.

## entry 397

- Stable sort matters when a secondary key was set in a prior pass.

## entry 398

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 399

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 400

- Heap when you only need top-k; full sort is wasted work.

## entry 401

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 402

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 403

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 404

- Monotonic stack pops while the new element violates the invariant.

## entry 405

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 406

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 407

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 408

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 409

- Greedy by end-time picks the most non-overlapping intervals.

## entry 410

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 411

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 412

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 413

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 414

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 415

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 416

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 417

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 418

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
