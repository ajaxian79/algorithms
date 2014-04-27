# articulation-points

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Walk both pointers from each end inward; advance the smaller side.

## entry 33

Walk both pointers from each end inward; advance the smaller side.

## entry 34

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 35

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

Articulation points: same DFS as bridges, with a slightly different test.

## entry 37

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 39

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 40

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 41

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 42

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 43

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 44

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 45

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 46

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

Euler tour flattens a tree into an array for range-query LCA.

## entry 48

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 50

Wavelet tree: range k-th element in O(log Σ) time.

## entry 51

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 52

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 59

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 60

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 61

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

Monotonic stack pops while the new element violates the invariant.

## entry 63

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 65

StringBuilder: amortize allocation by doubling on grow.

## entry 66

State compression: bitmask + integer encodes a small subset cheaply.

## entry 67

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 70

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 71

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 74

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 75

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 76

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 77

Euler tour flattens a tree into an array for range-query LCA.

## entry 78

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 79

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 81

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 87

Heap when you only need top-k; full sort is wasted work.

## entry 88

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

Walk both pointers from each end inward; advance the smaller side.

## entry 90

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 93

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 94

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 96

StringBuilder: amortize allocation by doubling on grow.

## entry 97

StringBuilder: amortize allocation by doubling on grow.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 100

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

Walk both pointers from each end inward; advance the smaller side.

## entry 102

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 104

Stable sort matters when a secondary key was set in a prior pass.

## entry 105

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 106

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 109

Articulation points: same DFS as bridges, with a slightly different test.

## entry 110

Greedy by end-time picks the most non-overlapping intervals.

## entry 111

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 112

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 113

LIS via patience: each pile holds the smallest tail of length k.

## entry 114

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 115

Heap when you only need top-k; full sort is wasted work.

## entry 116

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 117

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 118

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 119

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 120

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 121

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 122

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 124

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 125

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

Euler tour flattens a tree into an array for range-query LCA.

## entry 127

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 128

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 129

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 130

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 132

LIS via patience: each pile holds the smallest tail of length k.

## entry 133

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 134

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 137

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 140

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 141

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 142

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 143

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 144

StringBuilder: amortize allocation by doubling on grow.

## entry 145

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 146

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 147

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 148

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 149

Articulation points: same DFS as bridges, with a slightly different test.

## entry 150

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 151

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 152

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 153

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 154

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 155

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 156

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 158

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 159

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 160

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 161

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 163

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 164

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 165

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 166

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 169

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 170

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 171

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 173

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 174

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 175

Euler tour flattens a tree into an array for range-query LCA.

## entry 176

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 177

Walk both pointers from each end inward; advance the smaller side.

## entry 178

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 179

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 181

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 182

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 183

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 184

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 185

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 186

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 187

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 188

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 189

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 190

LIS via patience: each pile holds the smallest tail of length k.

## entry 191

Monotonic stack pops while the new element violates the invariant.

## entry 192

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 193

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 194

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 195

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 196

Union-Find with path compression amortizes to near-O(1) per op.

## entry 197

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 198

Heap when you only need top-k; full sort is wasted work.

## entry 199

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 200

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 201

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

Wavelet tree: range k-th element in O(log Σ) time.

## entry 203

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 204

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 205

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 206

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 207

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 208

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 209

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 210

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 211

Walk both pointers from each end inward; advance the smaller side.

## entry 212

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 213

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 214

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 215

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 216

Greedy by end-time picks the most non-overlapping intervals.

## entry 217

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 218

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 219

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 220

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 221

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 222

StringBuilder: amortize allocation by doubling on grow.

## entry 223

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 224

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 225

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 226

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 227

Splay tree: every access splays to the root; amortized O(log n).

## entry 228

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 229

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 230

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 231

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 232

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 233

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 234

Splay tree: every access splays to the root; amortized O(log n).

## entry 235

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 236

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 237

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 238

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 239

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 240

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 241

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 242

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 243

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 244

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 245

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 246

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 247

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 248

Splay tree: every access splays to the root; amortized O(log n).

## entry 249

LIS via patience: each pile holds the smallest tail of length k.

## entry 250

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 251

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 252

Articulation points: same DFS as bridges, with a slightly different test.

## entry 253

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 254

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 255

State compression: bitmask + integer encodes a small subset cheaply.

## entry 256

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 257

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 259

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 260

Euler tour flattens a tree into an array for range-query LCA.

## entry 261

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 262

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 263

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 264

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 265

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 266

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 267

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 268

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 269

Wavelet tree: range k-th element in O(log Σ) time.

## entry 270

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 271

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 272

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 273

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 274

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 275

Articulation points: same DFS as bridges, with a slightly different test.

## entry 276

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 277

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 278

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 279

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 280

Wavelet tree: range k-th element in O(log Σ) time.

## entry 281

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 282

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 283

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 284

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 285

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 286

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 287

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 288

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 289

State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

Heap when you only need top-k; full sort is wasted work.

## entry 291

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 292

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 294

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 295

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 296

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 297

Wavelet tree: range k-th element in O(log Σ) time.

## entry 298

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 299

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 301

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 302

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 303

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 304

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 305

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 309

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 310

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 311

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 312

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 313

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 314

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 315

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 317

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 318

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 319

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 320

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 321

StringBuilder: amortize allocation by doubling on grow.

## entry 322

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 323

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 324

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 325

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 326

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 327

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 328

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 329

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 330

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 331

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 332

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 333

Heap when you only need top-k; full sort is wasted work.

## entry 334

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 335

Articulation points: same DFS as bridges, with a slightly different test.

## entry 336

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 337

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 338

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 339

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 340

Wavelet tree: range k-th element in O(log Σ) time.

## entry 341

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 342

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 343

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 344

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 345

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 346

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 347

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 348

Walk both pointers from each end inward; advance the smaller side.

## entry 349

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 350

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 351

Stable sort matters when a secondary key was set in a prior pass.

## entry 352

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 353

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 354

State compression: bitmask + integer encodes a small subset cheaply.

## entry 355

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 356

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 357

Union-Find with path compression amortizes to near-O(1) per op.

## entry 358

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 359

Splay tree: every access splays to the root; amortized O(log n).

## entry 360

Walk both pointers from each end inward; advance the smaller side.

## entry 361

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 362

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 363

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 364

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 365

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 366

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 367

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 368

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 369

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 370

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 371

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 372

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 373

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 374

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 375

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 376

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 377

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 378

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 379

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 380

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 381

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 382

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 383

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 384

Articulation points: same DFS as bridges, with a slightly different test.

## entry 385

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 386

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 387

StringBuilder: amortize allocation by doubling on grow.

## entry 388

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 389

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 390

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

State compression: bitmask + integer encodes a small subset cheaply.

## entry 392

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 393

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 394

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 395

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 396

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 397

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 398

Articulation points: same DFS as bridges, with a slightly different test.

## entry 399

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 400

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 401

Monotonic stack pops while the new element violates the invariant.

## entry 402

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 403

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 404

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 406

Splay tree: every access splays to the root; amortized O(log n).

## entry 407

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 408

Euler tour flattens a tree into an array for range-query LCA.

## entry 409

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 410

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 411

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 412

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 413

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 414

Heap when you only need top-k; full sort is wasted work.

## entry 415

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 416

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 417

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 418

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 419

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 420

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 421

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 422

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 423

Heap when you only need top-k; full sort is wasted work.

## entry 424

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 425

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 426

StringBuilder: amortize allocation by doubling on grow.

## entry 427

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 428

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 429

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 430

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 431

Walk both pointers from each end inward; advance the smaller side.

## entry 432

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 433

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 434

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 435

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 436

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 437

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 438

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 439

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 440

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 441

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 442

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 443

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 444

Walk both pointers from each end inward; advance the smaller side.

## entry 445

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 446

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 447

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 448

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 449

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 450

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 452

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 453

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 454

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 455

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 456

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 457

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 458

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 459

Union-Find with path compression amortizes to near-O(1) per op.

## entry 460

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 461

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 462

Union-Find with path compression amortizes to near-O(1) per op.

## entry 463

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 464

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 465

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 466

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 467

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 468

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 469

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 470

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 471

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 472

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 473

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 474

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 475

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 476

Splay tree: every access splays to the root; amortized O(log n).

## entry 477

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 478

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 479

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 480

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 481

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 482

Splay tree: every access splays to the root; amortized O(log n).

## entry 483

Heap when you only need top-k; full sort is wasted work.

## entry 484

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 485

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 486

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 487

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 488

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 489

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 490

Wavelet tree: range k-th element in O(log Σ) time.

## entry 491

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 492

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 493

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 494

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 497

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 498

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 499

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 500

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 501

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 502

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 503

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 504

Greedy by end-time picks the most non-overlapping intervals.

## entry 505

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 506

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 507

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 508

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 509

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 510

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 511

Walk both pointers from each end inward; advance the smaller side.

## entry 512

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 513

Euler tour flattens a tree into an array for range-query LCA.

## entry 514

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 515

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 516

Monotonic stack pops while the new element violates the invariant.

## entry 517

Articulation points: same DFS as bridges, with a slightly different test.

## entry 518

StringBuilder: amortize allocation by doubling on grow.

## entry 519

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 520

Stable sort matters when a secondary key was set in a prior pass.
