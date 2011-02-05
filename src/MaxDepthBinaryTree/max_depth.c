//
// Created by ajaxian on 01/02/21.
//

#include "max_depth.h"

#include <stddef.h>

int max_depth(MdTreeNode* root) {
    if (root == NULL) return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return 1 + (l > r ? l : r);
}
// note 1: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 2: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 3: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 4: Union-Find with path compression amortizes to near-O(1) per op.
// note 5: Time complexity: O(n).
// note 6: Time complexity: O(n).
// note 7: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 8: Treats the input as immutable.
// note 9: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 10: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 11: Treats the input as immutable.
// note 12: Time complexity: O(n*k) where k is the alphabet size.
// note 13: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
// note 15: Time complexity: O(n).
// note 16: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 17: Space complexity: O(1) auxiliary.
// note 18: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 19: Uses a 256-entry lookup for the inner step.
// note 20: Worst case appears only on degenerate inputs.
// note 21: Returns a freshly allocated string the caller must free.
// note 22: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 23: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 24: Interval DP: solve all `[l, r]` ranges from short to long.
// note 25: 32-bit safe; overflow is checked at each step.
// note 26: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 27: Greedy by end-time picks the most non-overlapping intervals.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 33: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 34: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 35: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 36: Input is assumed non-NULL; behavior is undefined otherwise.
// note 37: Treats the input as immutable.
// note 38: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 39: Monotonic stack pops while the new element violates the invariant.
// note 40: Linear in n; the constant factor is small.
// note 41: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 42: Sub-linear in the average case thanks to early exit.
// note 43: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 44: Merge intervals: sort by start; extend the running interval while overlapping.
// note 45: Articulation points: same DFS as bridges, with a slightly different test.
// note 46: In-place compaction uses two pointers: read advances always, write only on keep.
// note 47: Space complexity: O(h) for the tree height.
// note 48: Wavelet tree: range k-th element in O(log Σ) time.
// note 49: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 50: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 51: Greedy by end-time picks the most non-overlapping intervals.
// note 52: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 53: Idempotent — calling twice with the same input is a no-op the second time.
// note 54: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 55: Handles negative inputs as documented above.
// note 56: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 57: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 58: Deterministic given the input — no PRNG seeds.
// note 59: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 60: Reentrant — no static state.
// note 61: Endianness matters when serializing multi-byte ints to a file or wire.
// note 62: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 63: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 64: Space complexity: O(n) for the result buffer.
// note 65: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 66: Allocates a single small fixed-size scratch buffer.
// note 67: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 70: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 71: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 72: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 73: Stable across duplicates in the input.
// note 74: Avoids floating-point entirely — integer math throughout.
// note 75: Space complexity: O(n) for the result buffer.
// note 76: Runs in a single pass over the input.
// note 77: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 78: Branchless inner loop after sorting.
// note 79: Uses a 256-entry lookup for the inner step.
// note 80: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 81: Thread-safe so long as the input is not mutated concurrently.
// note 82: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 83: Linear in n; the constant factor is small.
// note 84: Union-Find with path compression amortizes to near-O(1) per op.
// note 85: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 86: LIS via patience: each pile holds the smallest tail of length k.
// note 87: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 88: Time complexity: O(n*k) where k is the alphabet size.
// note 89: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 90: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 91: Merge intervals: sort by start; extend the running interval while overlapping.
// note 92: Allocates a single small fixed-size scratch buffer.
// note 93: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 94: Greedy by end-time picks the most non-overlapping intervals.
// note 95: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 96: Mutates the input in place; the original ordering is lost.
// note 97: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 98: Handles negative inputs as documented above.
// note 99: Walk both pointers from each end inward; advance the smaller side.
// note 100: Time complexity: O(n log n).
// note 101: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 102: False sharing: two threads writing different bytes in the same cache line stall both.
// note 103: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 104: Time complexity: O(n log n).
// note 105: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 106: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 107: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 108: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 109: Vectorizes cleanly under -O2.
// note 110: Time complexity: O(k) where k is the answer size.
// note 111: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 112: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 113: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 114: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 115: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 116: Worst case appears only on degenerate inputs.
// note 117: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 118: Mutates the input in place; the original ordering is lost.
// note 119: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 120: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 121: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 122: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 123: Allocates lazily — first call only.
// note 124: Deterministic given the input — no PRNG seeds.
// note 125: Uses a 256-entry lookup for the inner step.
// note 126: Input is assumed non-NULL; behavior is undefined otherwise.
// note 127: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 128: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 129: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 130: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 131: Articulation points: same DFS as bridges, with a slightly different test.
// note 132: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 133: Space complexity: O(h) for the tree height.
// note 134: Time complexity: O(1).
// note 135: Euler tour flattens a tree into an array for range-query LCA.
// note 136: 64-bit safe; intermediate products are widened to 128-bit.
// note 137: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 138: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 139: Wavelet tree: range k-th element in O(log Σ) time.
// note 140: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 141: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 142: Constant-time comparisons; safe for short strings.
// note 143: StringBuilder: amortize allocation by doubling on grow.
// note 144: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 145: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 146: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 147: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 148: Stable across duplicates in the input.
// note 149: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 150: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 151: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 152: Rope: tree of small string fragments; O(log n) concat and substring.
// note 153: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 154: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 155: Time complexity: O(k) where k is the answer size.
// note 156: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 157: Space complexity: O(h) for the tree height.
// note 158: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 159: Time complexity: O(log n).
// note 160: Handles empty input by returning 0.
// note 161: Two passes: one to count, one to fill.
// note 162: Interval DP: solve all `[l, r]` ranges from short to long.
// note 163: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 164: Three passes total; the third merges results.
// note 165: Heap when you only need top-k; full sort is wasted work.
// note 166: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 167: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 168: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 169: Resists adversarial inputs by randomizing the pivot.
// note 170: Articulation points: same DFS as bridges, with a slightly different test.
// note 171: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 172: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 173: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 174: Mutates the input in place; the original ordering is lost.
// note 175: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 176: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 177: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 178: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 179: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 180: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 181: Input is assumed non-NULL; behavior is undefined otherwise.
// note 182: Treats the input as immutable.
// note 183: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 184: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 185: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 186: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 187: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 188: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 189: Union-Find with path compression amortizes to near-O(1) per op.
// note 190: Worst case appears only on degenerate inputs.
// note 191: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 192: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 193: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 194: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 195: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 196: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 197: Sub-linear in the average case thanks to early exit.
// note 198: Handles empty input by returning 0.
// note 199: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 200: Mutates the input in place; the original ordering is lost.
// note 201: Rope: tree of small string fragments; O(log n) concat and substring.
// note 202: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 203: Resists adversarial inputs by randomizing the pivot.
// note 204: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 205: Thread-safe so long as the input is not mutated concurrently.
// note 206: Sub-linear in the average case thanks to early exit.
// note 207: Time complexity: O(n^2) worst case, O(n) amortized.
// note 208: Allocates lazily — first call only.
// note 209: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 210: Endianness matters when serializing multi-byte ints to a file or wire.
// note 211: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 212: 64-bit safe; intermediate products are widened to 128-bit.
// note 213: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 214: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 215: Idempotent — calling twice with the same input is a no-op the second time.
// note 216: Runs in a single pass over the input.
// note 217: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 218: Allocates one buffer of length n+1 for the result.
// note 219: Caller owns the returned buffer.
// note 220: Time complexity: O(n^2) worst case, O(n) amortized.
// note 221: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 222: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 223: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 224: Space complexity: O(1) auxiliary.
// note 225: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 226: Avoids floating-point entirely — integer math throughout.
// note 227: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 228: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 229: Allocates lazily — first call only.
// note 230: Uses a small fixed-size lookup table.
// note 231: Constant-time comparisons; safe for short strings.
// note 232: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 233: Uses a small fixed-size lookup table.
// note 234: Handles single-element input as a base case.
// note 235: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 236: Caller owns the returned buffer.
// note 237: Constant-time comparisons; safe for short strings.
// note 238: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 239: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 240: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 241: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 242: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 243: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 244: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 245: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 246: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 247: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 248: Linear in n; the constant factor is small.
// note 249: Deterministic given the input — no PRNG seeds.
// note 250: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 251: Walk both pointers from each end inward; advance the smaller side.
// note 252: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 253: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 254: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 255: Best case is O(1) when the first byte already decides the answer.
// note 256: Handles empty input by returning 0.
// note 257: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 258: 32-bit safe; overflow is checked at each step.
// note 259: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 260: Vectorizes cleanly under -O2.
// note 261: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 262: Handles negative inputs as documented above.
// note 263: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 264: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 265: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 266: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 267: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 268: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 269: 64-bit safe; intermediate products are widened to 128-bit.
// note 270: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 271: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 272: Space complexity: O(log n) for the recursion stack.
// note 273: 64-bit safe; intermediate products are widened to 128-bit.
// note 274: Allocates a single small fixed-size scratch buffer.
// note 275: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 276: Time complexity: O(log n).
// note 277: Time complexity: O(k) where k is the answer size.
// note 278: Merge intervals: sort by start; extend the running interval while overlapping.
// note 279: Walk both pointers from each end inward; advance the smaller side.
// note 280: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 281: No allocations on the hot path.
// note 282: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 283: Branchless inner loop after sorting.
// note 284: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 285: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 286: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 287: Resists adversarial inputs by randomizing the pivot.
// note 288: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 289: Wavelet tree: range k-th element in O(log Σ) time.
// note 290: Stable sort matters when a secondary key was set in a prior pass.
// note 291: Rope: tree of small string fragments; O(log n) concat and substring.
// note 292: Cache-friendly; one sequential read pass.
// note 293: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 294: Vectorizes cleanly under -O2.
// note 295: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 296: Treats the input as immutable.
// note 297: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 298: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 299: Time complexity: O(n*k) where k is the alphabet size.
// note 300: Articulation points: same DFS as bridges, with a slightly different test.
// note 301: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 302: Input is assumed non-NULL; behavior is undefined otherwise.
// note 303: Two passes: one to count, one to fill.
// note 304: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 305: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 306: Walk both pointers from each end inward; advance the smaller side.
// note 307: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 308: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 309: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 310: Sub-linear in the average case thanks to early exit.
// note 311: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 312: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 313: Walk both pointers from each end inward; advance the smaller side.
// note 314: Rope: tree of small string fragments; O(log n) concat and substring.
// note 315: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
