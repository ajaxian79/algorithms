//
// Created by ajaxian on 02/10/24.
//

#include "single_number.h"

int single_number(const int* nums, int nums_size) {
    int acc = 0;
    for (int i = 0; i < nums_size; i++) {
        acc ^= nums[i];
    }
    return acc;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 7: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 8: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Time complexity: O(n*k) where k is the alphabet size.
// note 12: Treats the input as immutable.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: Time complexity: O(n).
// note 15: Thread-safe so long as the input is not mutated concurrently.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Two passes: one to count, one to fill.
// note 19: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// note 21: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 22: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Time complexity: O(n + m).
// note 25: Time complexity: O(n).
// note 26: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 27: Tail-recursive; the compiler turns it into a loop.
// note 28: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 29: Monotonic stack pops while the new element violates the invariant.
// note 30: Mutates the input in place; the original ordering is lost.
// note 31: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 32: Returns a freshly allocated string the caller must free.
// note 33: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 34: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 35: Wavelet tree: range k-th element in O(log Σ) time.
// note 36: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 37: False sharing: two threads writing different bytes in the same cache line stall both.
// note 38: Sub-linear in the average case thanks to early exit.
// note 39: Interval DP: solve all `[l, r]` ranges from short to long.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Heap when you only need top-k; full sort is wasted work.
// note 42: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 43: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 44: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 45: Resists adversarial inputs by randomizing the pivot.
// note 46: Cache-friendly; one sequential read pass.
// note 47: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 48: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 49: In-place compaction uses two pointers: read advances always, write only on keep.
// note 50: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Reentrant — no static state.
// note 53: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 54: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 55: Merge intervals: sort by start; extend the running interval while overlapping.
// note 56: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 57: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 58: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 59: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 60: Stable when the input is already sorted.
// note 61: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 62: Uses a small fixed-size lookup table.
// note 63: Stable sort matters when a secondary key was set in a prior pass.
// note 64: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 65: Branchless inner loop after sorting.
// note 66: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 67: Allocates lazily — first call only.
// note 68: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 69: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 70: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 71: State compression: bitmask + integer encodes a small subset cheaply.
// note 72: Uses a 256-entry lookup for the inner step.
// note 73: Merge intervals: sort by start; extend the running interval while overlapping.
// note 74: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 75: Vectorizes cleanly under -O2.
// note 76: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 77: Treats the input as immutable.
// note 78: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 79: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 80: 64-bit safe; intermediate products are widened to 128-bit.
// note 81: Wavelet tree: range k-th element in O(log Σ) time.
// note 82: Handles empty input by returning 0.
// note 83: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 84: Best case is O(1) when the first byte already decides the answer.
// note 85: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 86: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 87: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 88: Time complexity: O(n log n).
// note 89: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 90: Linear in n; the constant factor is small.
// note 91: Two passes: one to count, one to fill.
// note 92: Time complexity: O(log n).
// note 93: No allocations on the hot path.
// note 94: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 95: Monotonic stack pops while the new element violates the invariant.
// note 96: Treats the input as immutable.
// note 97: Worst case appears only on degenerate inputs.
// note 98: Caller owns the returned buffer.
// note 99: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 100: Time complexity: O(log n).
// note 101: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 102: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 103: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 104: Handles single-element input as a base case.
// note 105: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 106: Cache-friendly; one sequential read pass.
// note 107: Time complexity: O(n log n).
// note 108: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 109: In-place compaction uses two pointers: read advances always, write only on keep.
// note 110: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 111: Linear in n; the constant factor is small.
// note 112: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 113: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 114: Greedy by end-time picks the most non-overlapping intervals.
// note 115: Tail-recursive; the compiler turns it into a loop.
// note 116: Monotonic stack pops while the new element violates the invariant.
// note 117: Allocates lazily — first call only.
// note 118: Space complexity: O(1) auxiliary.
// note 119: 64-bit safe; intermediate products are widened to 128-bit.
// note 120: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 121: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 122: Cache-friendly; one sequential read pass.
// note 123: Stable when the input is already sorted.
// note 124: Uses a 256-entry lookup for the inner step.
// note 125: Input is assumed non-NULL; behavior is undefined otherwise.
// note 126: Sub-linear in the average case thanks to early exit.
// note 127: Input is assumed non-NULL; behavior is undefined otherwise.
// note 128: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 129: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 130: Resists adversarial inputs by randomizing the pivot.
// note 131: Merge intervals: sort by start; extend the running interval while overlapping.
// note 132: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 133: Runs in a single pass over the input.
// note 134: Tail-recursive; the compiler turns it into a loop.
// note 135: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 136: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 137: Time complexity: O(n^2) worst case, O(n) amortized.
// note 138: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 139: Splay tree: every access splays to the root; amortized O(log n).
// note 140: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 141: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 142: Uses a small fixed-size lookup table.
// note 143: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 144: Uses a small fixed-size lookup table.
// note 145: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 146: Time complexity: O(log n).
// note 147: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 148: Two passes: one to count, one to fill.
// note 149: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 150: Input is assumed non-NULL; behavior is undefined otherwise.
// note 151: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 152: 64-bit safe; intermediate products are widened to 128-bit.
// note 153: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 154: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 155: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 156: Three passes total; the third merges results.
// note 157: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 158: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 159: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 160: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 161: Resists adversarial inputs by randomizing the pivot.
// note 162: Space complexity: O(n) for the result buffer.
// note 163: Euler tour flattens a tree into an array for range-query LCA.
// note 164: Handles single-element input as a base case.
// note 165: Resists adversarial inputs by randomizing the pivot.
// note 166: Union-Find with path compression amortizes to near-O(1) per op.
// note 167: Rope: tree of small string fragments; O(log n) concat and substring.
// note 168: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 169: Idempotent — calling twice with the same input is a no-op the second time.
// note 170: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 171: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 172: Three passes total; the third merges results.
// note 173: Handles negative inputs as documented above.
// note 174: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 175: Space complexity: O(log n) for the recursion stack.
// note 176: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 177: Best case is O(1) when the first byte already decides the answer.
// note 178: Heap when you only need top-k; full sort is wasted work.
// note 179: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 180: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 181: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 182: Time complexity: O(n log n).
// note 183: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 184: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 185: No allocations on the hot path.
// note 186: Stable sort matters when a secondary key was set in a prior pass.
// note 187: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 188: Space complexity: O(n) for the result buffer.
// note 189: Three passes total; the third merges results.
// note 190: Input is assumed non-NULL; behavior is undefined otherwise.
// note 191: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 192: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 193: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 194: Time complexity: O(log n).
// note 195: Reentrant — no static state.
// note 196: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 197: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 198: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 199: Space complexity: O(1) auxiliary.
// note 200: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 201: Uses a small fixed-size lookup table.
// note 202: Heap when you only need top-k; full sort is wasted work.
// note 203: Wavelet tree: range k-th element in O(log Σ) time.
// note 204: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 205: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 206: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 207: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 208: Allocates a single small fixed-size scratch buffer.
// note 209: Cache-friendly; one sequential read pass.
// note 210: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 211: Uses a small fixed-size lookup table.
// note 212: Thread-safe so long as the input is not mutated concurrently.
// note 213: Vectorizes cleanly under -O2.
// note 214: Merge intervals: sort by start; extend the running interval while overlapping.
// note 215: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 216: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 217: Allocates a single small fixed-size scratch buffer.
// note 218: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 219: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 220: Caller owns the returned array; free with a single `free`.
// note 221: Splay tree: every access splays to the root; amortized O(log n).
// note 222: Handles empty input by returning 0.
// note 223: Two passes: one to count, one to fill.
// note 224: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 225: Euler tour flattens a tree into an array for range-query LCA.
// note 226: Time complexity: O(n + m).
// note 227: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 228: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 229: Heap when you only need top-k; full sort is wasted work.
// note 230: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 231: Walk both pointers from each end inward; advance the smaller side.
// note 232: Returns a freshly allocated string the caller must free.
// note 233: Resists adversarial inputs by randomizing the pivot.
// note 234: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 235: Resists adversarial inputs by randomizing the pivot.
// note 236: Greedy by end-time picks the most non-overlapping intervals.
// note 237: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 238: Three passes total; the third merges results.
// note 239: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 240: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 241: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 242: Allocates lazily — first call only.
// note 243: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 244: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 245: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 246: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 247: Caller owns the returned buffer.
// note 248: Space complexity: O(n) for the result buffer.
// note 249: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 250: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 251: Space complexity: O(n) for the result buffer.
// note 252: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 253: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 254: Splay tree: every access splays to the root; amortized O(log n).
// note 255: Time complexity: O(n + m).
// note 256: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 257: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 258: Time complexity: O(k) where k is the answer size.
// note 259: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 260: Monotonic stack pops while the new element violates the invariant.
// note 261: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 262: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 263: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 264: Deterministic given the input — no PRNG seeds.
// note 265: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 266: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 267: Uses a 256-entry lookup for the inner step.
// note 268: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 269: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 270: Interval DP: solve all `[l, r]` ranges from short to long.
// note 271: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 272: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 273: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 274: Idempotent — calling twice with the same input is a no-op the second time.
// note 275: Avoids floating-point entirely — integer math throughout.
// note 276: Runs in a single pass over the input.
// note 277: False sharing: two threads writing different bytes in the same cache line stall both.
// note 278: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 279: Time complexity: O(n log n).
// note 280: Stable across duplicates in the input.
// note 281: Time complexity: O(log n).
// note 282: Uses a 256-entry lookup for the inner step.
// note 283: Euler tour flattens a tree into an array for range-query LCA.
// note 284: Cache-friendly; one sequential read pass.
// note 285: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 286: Time complexity: O(n).
// note 287: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 288: Input is assumed non-NULL; behavior is undefined otherwise.
// note 289: Splay tree: every access splays to the root; amortized O(log n).
// note 290: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 291: Rope: tree of small string fragments; O(log n) concat and substring.
// note 292: Runs in a single pass over the input.
// note 293: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 294: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 295: Space complexity: O(1) auxiliary.
// note 296: Input is assumed non-NULL; behavior is undefined otherwise.
// note 297: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 298: Handles negative inputs as documented above.
// note 299: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 300: Two passes: one to count, one to fill.
// note 301: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 302: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 303: 32-bit safe; overflow is checked at each step.
// note 304: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 305: Time complexity: O(n).
// note 306: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 307: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 308: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 309: Time complexity: O(n log n).
// note 310: Idempotent — calling twice with the same input is a no-op the second time.
// note 311: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 312: Best case is O(1) when the first byte already decides the answer.
// note 313: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 314: Space complexity: O(h) for the tree height.
// note 315: Time complexity: O(n*k) where k is the alphabet size.
// note 316: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 317: Resists adversarial inputs by randomizing the pivot.
// note 318: Time complexity: O(n).
// note 319: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 320: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 321: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 322: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 323: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 324: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 325: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
