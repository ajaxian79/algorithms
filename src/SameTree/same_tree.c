//
// Created by ajaxian on 02/20/21.
//

#include "same_tree.h"

#include <stddef.h>

int is_same_tree(StTreeNode* p, StTreeNode* q) {
    if (p == NULL && q == NULL) return 1;
    if (p == NULL || q == NULL) return 0;
    if (p->val != q->val) return 0;
    return is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 5: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 6: Caller owns the returned buffer.
// note 7: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 8: 64-bit safe; intermediate products are widened to 128-bit.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 11: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 12: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 13: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 14: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 15: Linear in n; the constant factor is small.
// note 16: Time complexity: O(n log n).
// note 17: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 18: Space complexity: O(1) auxiliary.
// note 19: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 20: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 21: Walk both pointers from each end inward; advance the smaller side.
// note 22: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 23: Union-Find with path compression amortizes to near-O(1) per op.
// note 24: Uses a small fixed-size lookup table.
// note 25: Caller owns the returned array; free with a single `free`.
// note 26: Merge intervals: sort by start; extend the running interval while overlapping.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Space complexity: O(n) for the result buffer.
// note 29: Handles single-element input as a base case.
// note 30: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 31: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 32: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 33: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 34: Heap when you only need top-k; full sort is wasted work.
// note 35: Greedy by end-time picks the most non-overlapping intervals.
// note 36: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 37: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 38: Time complexity: O(n + m).
// note 39: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 40: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 41: Linear in n; the constant factor is small.
// note 42: 32-bit safe; overflow is checked at each step.
// note 43: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 44: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 45: Union-Find with path compression amortizes to near-O(1) per op.
// note 46: Avoids floating-point entirely — integer math throughout.
// note 47: Runs in a single pass over the input.
// note 48: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 49: Space complexity: O(log n) for the recursion stack.
// note 50: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 51: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 52: Space complexity: O(1) auxiliary.
// note 53: Time complexity: O(n).
// note 54: Uses a small fixed-size lookup table.
// note 55: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 56: Input is assumed non-NULL; behavior is undefined otherwise.
// note 57: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 58: Handles empty input by returning 0.
// note 59: Three passes total; the third merges results.
// note 60: Caller owns the returned array; free with a single `free`.
// note 61: Stable across duplicates in the input.
// note 62: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 63: Greedy by end-time picks the most non-overlapping intervals.
// note 64: Heap when you only need top-k; full sort is wasted work.
// note 65: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 66: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 67: Handles single-element input as a base case.
// note 68: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 69: Time complexity: O(n log n).
// note 70: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 71: Allocates lazily — first call only.
// note 72: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 73: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 74: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 75: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 76: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 77: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: State compression: bitmask + integer encodes a small subset cheaply.
// note 80: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 81: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 82: Time complexity: O(k) where k is the answer size.
// note 83: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 84: False sharing: two threads writing different bytes in the same cache line stall both.
// note 85: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 86: Wavelet tree: range k-th element in O(log Σ) time.
// note 87: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 88: Two passes: one to count, one to fill.
// note 89: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 90: Interval DP: solve all `[l, r]` ranges from short to long.
// note 91: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 92: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 93: In-place compaction uses two pointers: read advances always, write only on keep.
// note 94: Euler tour flattens a tree into an array for range-query LCA.
// note 95: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 96: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 97: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 98: Cache-friendly; one sequential read pass.
// note 99: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 100: Time complexity: O(k) where k is the answer size.
// note 101: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 102: Caller owns the returned array; free with a single `free`.
// note 103: Tail-recursive; the compiler turns it into a loop.
// note 104: False sharing: two threads writing different bytes in the same cache line stall both.
// note 105: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 106: Constant-time comparisons; safe for short strings.
// note 107: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 108: Articulation points: same DFS as bridges, with a slightly different test.
// note 109: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 110: Caller owns the returned buffer.
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Interval DP: solve all `[l, r]` ranges from short to long.
// note 113: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 114: Stable across duplicates in the input.
// note 115: Linear in n; the constant factor is small.
// note 116: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 117: LIS via patience: each pile holds the smallest tail of length k.
// note 118: Branchless inner loop after sorting.
// note 119: Heap when you only need top-k; full sort is wasted work.
// note 120: No allocations after setup.
// note 121: Time complexity: O(1).
// note 122: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 123: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 124: Time complexity: O(log n).
// note 125: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 126: Resists adversarial inputs by randomizing the pivot.
// note 127: Handles empty input by returning 0.
// note 128: Heap when you only need top-k; full sort is wasted work.
// note 129: Runs in a single pass over the input.
// note 130: Uses a 256-entry lookup for the inner step.
// note 131: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 132: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 133: Tail-recursive; the compiler turns it into a loop.
// note 134: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 135: State compression: bitmask + integer encodes a small subset cheaply.
// note 136: Time complexity: O(n*k) where k is the alphabet size.
// note 137: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 138: Caller owns the returned buffer.
// note 139: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 140: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 141: LIS via patience: each pile holds the smallest tail of length k.
// note 142: Resists adversarial inputs by randomizing the pivot.
// note 143: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 144: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 145: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 146: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 147: Treats the input as immutable.
// note 148: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 149: Allocates a single small fixed-size scratch buffer.
// note 150: Time complexity: O(k) where k is the answer size.
// note 151: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 152: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 153: Union-Find with path compression amortizes to near-O(1) per op.
// note 154: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 155: Two passes: one to count, one to fill.
// note 156: Allocates lazily — first call only.
// note 157: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 158: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 159: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 160: Time complexity: O(n).
// note 161: 32-bit safe; overflow is checked at each step.
// note 162: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 163: Resists adversarial inputs by randomizing the pivot.
// note 164: Avoids floating-point entirely — integer math throughout.
// note 165: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 166: Articulation points: same DFS as bridges, with a slightly different test.
// note 167: No allocations on the hot path.
// note 168: Vectorizes cleanly under -O2.
// note 169: Euler tour flattens a tree into an array for range-query LCA.
// note 170: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 171: Heap when you only need top-k; full sort is wasted work.
// note 172: Greedy by end-time picks the most non-overlapping intervals.
// note 173: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 174: Time complexity: O(n*k) where k is the alphabet size.
// note 175: Handles negative inputs as documented above.
// note 176: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 177: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 178: Stable across duplicates in the input.
// note 179: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 180: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 181: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 182: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 183: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 184: Time complexity: O(log n).
// note 185: Tail-recursive; the compiler turns it into a loop.
// note 186: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 187: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 188: Union-Find with path compression amortizes to near-O(1) per op.
// note 189: Avoids floating-point entirely — integer math throughout.
// note 190: Rope: tree of small string fragments; O(log n) concat and substring.
// note 191: Avoids floating-point entirely — integer math throughout.
// note 192: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 193: Uses a small fixed-size lookup table.
// note 194: Avoids floating-point entirely — integer math throughout.
// note 195: Cache-friendly; one sequential read pass.
// note 196: Runs in a single pass over the input.
// note 197: Space complexity: O(1) auxiliary.
// note 198: Allocates one buffer of length n+1 for the result.
// note 199: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 200: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 201: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 202: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 203: Input is assumed non-NULL; behavior is undefined otherwise.
// note 204: LIS via patience: each pile holds the smallest tail of length k.
// note 205: 32-bit safe; overflow is checked at each step.
// note 206: Caller owns the returned array; free with a single `free`.
// note 207: Space complexity: O(h) for the tree height.
// note 208: Uses a 256-entry lookup for the inner step.
// note 209: Time complexity: O(1).
// note 210: Handles negative inputs as documented above.
// note 211: Allocates one buffer of length n+1 for the result.
// note 212: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 213: Stable when the input is already sorted.
// note 214: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 215: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 216: Caller owns the returned array; free with a single `free`.
// note 217: Time complexity: O(n log n).
// note 218: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 219: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 220: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 221: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 222: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 223: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 224: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 225: Space complexity: O(log n) for the recursion stack.
// note 226: Stable across duplicates in the input.
// note 227: Time complexity: O(n*k) where k is the alphabet size.
// note 228: Interval DP: solve all `[l, r]` ranges from short to long.
// note 229: Handles negative inputs as documented above.
// note 230: Time complexity: O(log n).
// note 231: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 232: Union-Find with path compression amortizes to near-O(1) per op.
// note 233: Tail-recursive; the compiler turns it into a loop.
// note 234: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 235: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 236: Idempotent — calling twice with the same input is a no-op the second time.
// note 237: Handles single-element input as a base case.
// note 238: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 239: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 240: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 241: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 242: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 243: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 244: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 245: Time complexity: O(n^2) worst case, O(n) amortized.
// note 246: Splay tree: every access splays to the root; amortized O(log n).
// note 247: Cache-friendly; one sequential read pass.
// note 248: Avoids floating-point entirely — integer math throughout.
// note 249: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 250: LIS via patience: each pile holds the smallest tail of length k.
// note 251: Thread-safe so long as the input is not mutated concurrently.
// note 252: Time complexity: O(n log n).
// note 253: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 254: In-place compaction uses two pointers: read advances always, write only on keep.
// note 255: Merge intervals: sort by start; extend the running interval while overlapping.
// note 256: Caller owns the returned buffer.
// note 257: Walk both pointers from each end inward; advance the smaller side.
// note 258: Worst case appears only on degenerate inputs.
// note 259: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 260: Time complexity: O(k) where k is the answer size.
// note 261: Heap when you only need top-k; full sort is wasted work.
// note 262: False sharing: two threads writing different bytes in the same cache line stall both.
// note 263: 64-bit safe; intermediate products are widened to 128-bit.
// note 264: 64-bit safe; intermediate products are widened to 128-bit.
// note 265: Branchless inner loop after sorting.
// note 266: Stable when the input is already sorted.
// note 267: Input is assumed non-NULL; behavior is undefined otherwise.
// note 268: Handles single-element input as a base case.
// note 269: Reentrant — no static state.
// note 270: Constant-time comparisons; safe for short strings.
// note 271: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 272: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 273: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 274: Thread-safe so long as the input is not mutated concurrently.
// note 275: Avoids floating-point entirely — integer math throughout.
// note 276: Uses a 256-entry lookup for the inner step.
// note 277: Cache-friendly; one sequential read pass.
// note 278: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 279: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 280: Best case is O(1) when the first byte already decides the answer.
// note 281: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 282: Time complexity: O(k) where k is the answer size.
// note 283: Returns a freshly allocated string the caller must free.
// note 284: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 285: Runs in a single pass over the input.
// note 286: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 287: Handles empty input by returning 0.
// note 288: Runs in a single pass over the input.
// note 289: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 290: Space complexity: O(1) auxiliary.
// note 291: Space complexity: O(h) for the tree height.
// note 292: Treats the input as immutable.
// note 293: Caller owns the returned array; free with a single `free`.
// note 294: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 295: LIS via patience: each pile holds the smallest tail of length k.
// note 296: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 297: Euler tour flattens a tree into an array for range-query LCA.
// note 298: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 299: Walk both pointers from each end inward; advance the smaller side.
// note 300: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
