# edit-distance

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Heap when you only need top-k; full sort is wasted work.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Greedy by end-time picks the most non-overlapping intervals.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Walk both pointers from each end inward; advance the smaller side.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic stack pops while the new element violates the invariant.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 9

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 10

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 14

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 17

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Walk both pointers from each end inward; advance the smaller side.

## entry 20

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 25

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 28

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 29

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 33

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 34

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 35

- Euler tour flattens a tree into an array for range-query LCA.

## entry 36

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 39

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 43

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 44

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 46

- Monotonic stack pops while the new element violates the invariant.

## entry 47

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 51

- Heap when you only need top-k; full sort is wasted work.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

- Splay tree: every access splays to the root; amortized O(log n).

## entry 59

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 60

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 61

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 62

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 63

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 67

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

- Splay tree: every access splays to the root; amortized O(log n).

## entry 69

- Monotonic stack pops while the new element violates the invariant.

## entry 70

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 71

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 72

- LIS via patience: each pile holds the smallest tail of length k.

## entry 73

- Greedy by end-time picks the most non-overlapping intervals.

## entry 74

- Monotonic stack pops while the new element violates the invariant.

## entry 75

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 76

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 77

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 78

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 79

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 80

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

- Greedy by end-time picks the most non-overlapping intervals.

## entry 82

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 83

- Heap when you only need top-k; full sort is wasted work.

## entry 84

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 85

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 86

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 87

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 88

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

- Monotonic stack pops while the new element violates the invariant.

## entry 92

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 95

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Monotonic stack pops while the new element violates the invariant.

## entry 98

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 99

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 100

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 102

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 103

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 104

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 105

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 108

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 109

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 111

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 112

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 113

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 115

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 116

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 117

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 118

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 119

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 120

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 123

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 125

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 126

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 127

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 128

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 129

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 130

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 131

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 132

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 133

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 134

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 136

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 137

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 138

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 139

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 140

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 141

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 142

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 143

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 144

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 145

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 146

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 149

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 150

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 151

- Euler tour flattens a tree into an array for range-query LCA.

## entry 152

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 153

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 154

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 155

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 156

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 157

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 158

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 159

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 160

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 161

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 162

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 163

- LIS via patience: each pile holds the smallest tail of length k.

## entry 164

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 165

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 166

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 167

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 168

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 169

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 170

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 172

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 173

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 174

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 175

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 176

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 177

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 178

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 181

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 182

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 184

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 186

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 187

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 188

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 189

- Splay tree: every access splays to the root; amortized O(log n).

## entry 190

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 191

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 192

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 193

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 194

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 196

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 197

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 198

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 199

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 200

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 201

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 202

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 203

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 204

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 205

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 206

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 207

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 208

- Greedy by end-time picks the most non-overlapping intervals.

## entry 209

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 210

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 211

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 212

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 213

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 216

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 217

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 218

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 219

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 220

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 221

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 222

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 223

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 224

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 225

- Walk both pointers from each end inward; advance the smaller side.

## entry 226

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 227

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 228

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 229

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 230

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 231

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 232

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 233

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 234

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 235

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 236

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 237

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 238

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 239

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 240

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 241

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 242

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 243

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 244

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 245

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 246

- Stable sort matters when a secondary key was set in a prior pass.

## entry 247

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 248

- Stable sort matters when a secondary key was set in a prior pass.

## entry 249

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 250

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 251

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 252

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 253

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 254

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 255

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 256

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 257

- Monotonic stack pops while the new element violates the invariant.

## entry 258

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 259

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 260

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 261

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 262

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 263

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 264

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 265

- LIS via patience: each pile holds the smallest tail of length k.

## entry 266

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 267

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 268

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 269

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 270

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 271

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 272

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 273

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 274

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 275

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 276

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 277

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 278

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 279

- Greedy by end-time picks the most non-overlapping intervals.

## entry 280

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 281

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 282

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 283

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 284

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 285

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 286

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 287

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 288

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 289

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 290

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 291

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 292

- Greedy by end-time picks the most non-overlapping intervals.

## entry 293

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 294

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 295

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 296

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 297

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 298

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 299

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 300

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 301

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 302

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 303

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 304

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 305

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 306

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 307

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 308

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 309

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 310

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 311

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 312

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 313

- Stable sort matters when a secondary key was set in a prior pass.

## entry 314

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 315

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 316

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 317

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 318

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 319

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 320

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 321

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 322

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 323

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 324

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 325

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 326

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 327

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 328

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 330

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 331

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 332

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 333

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 334

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 335

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 336

- Heap when you only need top-k; full sort is wasted work.

## entry 337

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 338

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 339

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 340

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 341

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 342

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 343

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 344

- Euler tour flattens a tree into an array for range-query LCA.

## entry 345

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 346

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 347

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 348

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 349

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 350

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 352

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 353

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 354

- Splay tree: every access splays to the root; amortized O(log n).

## entry 355

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 356

- Greedy by end-time picks the most non-overlapping intervals.

## entry 357

- LIS via patience: each pile holds the smallest tail of length k.

## entry 358

- Heap when you only need top-k; full sort is wasted work.

## entry 359

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 360

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 361

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 362

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 363

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 364

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 365

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 366

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 367

- LIS via patience: each pile holds the smallest tail of length k.

## entry 368

- Greedy by end-time picks the most non-overlapping intervals.

## entry 369

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 370

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 371

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 372

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 373

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 374

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 375

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 376

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 377

- LIS via patience: each pile holds the smallest tail of length k.

## entry 378

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 379

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 380

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 381

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 382

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 383

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 384

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 385

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 386

- Heap when you only need top-k; full sort is wasted work.

## entry 387

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 388

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 389

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 390

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 391

- Greedy by end-time picks the most non-overlapping intervals.

## entry 392

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 393

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 394

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 395

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 396

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 397

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 398

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 399

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 400

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 401

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 402

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 403

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 404

- Splay tree: every access splays to the root; amortized O(log n).

## entry 405

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 406

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 407

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 408

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 409

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 410

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 411

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 412

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 413

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 414

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 415

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 416

- StringBuilder: amortize allocation by doubling on grow.

## entry 417

- Walk both pointers from each end inward; advance the smaller side.

## entry 418

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 419

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 420

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 421

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 422

- Monotonic stack pops while the new element violates the invariant.

## entry 423

- Splay tree: every access splays to the root; amortized O(log n).

## entry 424

- LIS via patience: each pile holds the smallest tail of length k.

## entry 425

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 426

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 427

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 428

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 429

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 430

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 431

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 432

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 433

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 434

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 435

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 436

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 437

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 438

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 439

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 440

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 441

- Walk both pointers from each end inward; advance the smaller side.

## entry 442

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 443

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 444

- LIS via patience: each pile holds the smallest tail of length k.

## entry 445

- Greedy by end-time picks the most non-overlapping intervals.

## entry 446

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 447

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 448

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 449

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 450

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 451

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 452

- Monotonic stack pops while the new element violates the invariant.

## entry 453

- Interval DP: solve all `[l, r]` ranges from short to long.
