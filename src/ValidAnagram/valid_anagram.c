//
// Created by ajaxian on 02/10/24.
//

#include "valid_anagram.h"

#include <stddef.h>

int is_anagram(const char* s, const char* t) {
    if (s == NULL || t == NULL) return s == t;

    int counts[256] = {0};
    int s_len = 0;
    int t_len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char)s[i]]++;
        s_len++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        counts[(unsigned char)t[i]]--;
        t_len++;
    }
    if (s_len != t_len) return 0;
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) return 0;
    }
    return 1;
}
// note 1: Merge intervals: sort by start; extend the running interval while overlapping.
// note 2: Stable when the input is already sorted.
// note 3: No allocations on the hot path.
// note 4: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 5: State compression: bitmask + integer encodes a small subset cheaply.
// note 6: Monotonic stack pops while the new element violates the invariant.
// note 7: Time complexity: O(n^2) worst case, O(n) amortized.
// note 8: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 9: Stable when the input is already sorted.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 11: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 12: 64-bit safe; intermediate products are widened to 128-bit.
// note 13: Stable across duplicates in the input.
// note 14: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 15: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 16: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 17: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 18: Space complexity: O(h) for the tree height.
// note 19: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 20: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 21: Two passes: one to count, one to fill.
// note 22: LIS via patience: each pile holds the smallest tail of length k.
// note 23: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 24: Time complexity: O(k) where k is the answer size.
// note 25: Space complexity: O(log n) for the recursion stack.
// note 26: Sub-linear in the average case thanks to early exit.
// note 27: Space complexity: O(1) auxiliary.
// note 28: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 29: Uses a small fixed-size lookup table.
// note 30: State compression: bitmask + integer encodes a small subset cheaply.
// note 31: Articulation points: same DFS as bridges, with a slightly different test.
// note 32: Interval DP: solve all `[l, r]` ranges from short to long.
// note 33: Time complexity: O(log n).
// note 34: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 35: Stable when the input is already sorted.
// note 36: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 37: Best case is O(1) when the first byte already decides the answer.
// note 38: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 39: Time complexity: O(k) where k is the answer size.
// note 40: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 45: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 46: Wavelet tree: range k-th element in O(log Σ) time.
// note 47: Merge intervals: sort by start; extend the running interval while overlapping.
// note 48: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Interval DP: solve all `[l, r]` ranges from short to long.
// note 51: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 52: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 53: Wavelet tree: range k-th element in O(log Σ) time.
// note 54: Runs in a single pass over the input.
// note 55: Space complexity: O(log n) for the recursion stack.
// note 56: Interval DP: solve all `[l, r]` ranges from short to long.
// note 57: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 58: Linear in n; the constant factor is small.
// note 59: Time complexity: O(1).
// note 60: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 61: Heap when you only need top-k; full sort is wasted work.
// note 62: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 63: Caller owns the returned buffer.
// note 64: Resists adversarial inputs by randomizing the pivot.
// note 65: Time complexity: O(log n).
// note 66: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 67: Allocates one buffer of length n+1 for the result.
// note 68: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 69: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 70: Caller owns the returned buffer.
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 73: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 74: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 75: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 76: Sub-linear in the average case thanks to early exit.
// note 77: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 78: Constant-time comparisons; safe for short strings.
// note 79: Time complexity: O(n^2) worst case, O(n) amortized.
// note 80: StringBuilder: amortize allocation by doubling on grow.
// note 81: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 82: Monotonic stack pops while the new element violates the invariant.
// note 83: Thread-safe so long as the input is not mutated concurrently.
// note 84: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 85: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 86: Space complexity: O(n) for the result buffer.
// note 87: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 88: Time complexity: O(1).
// note 89: Time complexity: O(n + m).
// note 90: Constant-time comparisons; safe for short strings.
// note 91: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 92: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 93: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 94: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 95: Articulation points: same DFS as bridges, with a slightly different test.
// note 96: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 97: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 98: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 99: Treats the input as immutable.
// note 100: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 101: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 102: Reentrant — no static state.
// note 103: Runs in a single pass over the input.
// note 104: Merge intervals: sort by start; extend the running interval while overlapping.
// note 105: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 106: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 107: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 108: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 109: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 110: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 111: Rope: tree of small string fragments; O(log n) concat and substring.
// note 112: Monotonic stack pops while the new element violates the invariant.
// note 113: No allocations on the hot path.
// note 114: Interval DP: solve all `[l, r]` ranges from short to long.
// note 115: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 116: Branchless inner loop after sorting.
// note 117: Endianness matters when serializing multi-byte ints to a file or wire.
// note 118: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 119: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 120: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 121: Rope: tree of small string fragments; O(log n) concat and substring.
// note 122: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 123: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 124: Monotonic stack pops while the new element violates the invariant.
// note 125: 32-bit safe; overflow is checked at each step.
// note 126: Linear in n; the constant factor is small.
// note 127: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 128: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 129: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 130: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 131: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 132: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 133: 32-bit safe; overflow is checked at each step.
// note 134: Idempotent — calling twice with the same input is a no-op the second time.
// note 135: In-place compaction uses two pointers: read advances always, write only on keep.
// note 136: Vectorizes cleanly under -O2.
// note 137: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 138: Space complexity: O(1) auxiliary.
// note 139: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 140: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 141: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 142: Deterministic given the input — no PRNG seeds.
// note 143: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 144: Avoids floating-point entirely — integer math throughout.
// note 145: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 146: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 147: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 148: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 149: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 150: No allocations on the hot path.
// note 151: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 152: Union-Find with path compression amortizes to near-O(1) per op.
// note 153: LIS via patience: each pile holds the smallest tail of length k.
// note 154: Walk both pointers from each end inward; advance the smaller side.
// note 155: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 156: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 157: Allocates one buffer of length n+1 for the result.
// note 158: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 159: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 160: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 161: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 162: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 163: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 164: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 165: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 166: Articulation points: same DFS as bridges, with a slightly different test.
// note 167: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 168: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 169: Time complexity: O(k) where k is the answer size.
// note 170: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 171: Handles empty input by returning 0.
// note 172: Time complexity: O(k) where k is the answer size.
// note 173: Space complexity: O(n) for the result buffer.
// note 174: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 175: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 176: Rope: tree of small string fragments; O(log n) concat and substring.
// note 177: Caller owns the returned buffer.
// note 178: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 179: Two passes: one to count, one to fill.
// note 180: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 181: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 182: StringBuilder: amortize allocation by doubling on grow.
// note 183: Articulation points: same DFS as bridges, with a slightly different test.
// note 184: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 185: State compression: bitmask + integer encodes a small subset cheaply.
// note 186: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 187: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 188: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 189: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 190: Uses a small fixed-size lookup table.
// note 191: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 192: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 193: Articulation points: same DFS as bridges, with a slightly different test.
// note 194: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 195: Returns a freshly allocated string the caller must free.
// note 196: Best case is O(1) when the first byte already decides the answer.
// note 197: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 198: Allocates lazily — first call only.
// note 199: Time complexity: O(k) where k is the answer size.
// note 200: Avoids floating-point entirely — integer math throughout.
// note 201: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 202: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 203: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 204: Best case is O(1) when the first byte already decides the answer.
// note 205: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 206: Allocates a single small fixed-size scratch buffer.
// note 207: Walk both pointers from each end inward; advance the smaller side.
// note 208: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 209: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 210: Allocates one buffer of length n+1 for the result.
// note 211: Rope: tree of small string fragments; O(log n) concat and substring.
// note 212: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 213: Treats the input as immutable.
// note 214: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 215: Time complexity: O(n).
// note 216: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 217: Rope: tree of small string fragments; O(log n) concat and substring.
// note 218: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 219: Allocates lazily — first call only.
// note 220: State compression: bitmask + integer encodes a small subset cheaply.
// note 221: Stable across duplicates in the input.
// note 222: Greedy by end-time picks the most non-overlapping intervals.
// note 223: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 224: Cache-friendly; one sequential read pass.
// note 225: Allocates a single small fixed-size scratch buffer.
// note 226: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 227: Vectorizes cleanly under -O2.
// note 228: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 229: Time complexity: O(n*k) where k is the alphabet size.
// note 230: Euler tour flattens a tree into an array for range-query LCA.
// note 231: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 232: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 233: Time complexity: O(n + m).
// note 234: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 235: Monotonic stack pops while the new element violates the invariant.
// note 236: Endianness matters when serializing multi-byte ints to a file or wire.
// note 237: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 238: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 239: Allocates lazily — first call only.
// note 240: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 241: Time complexity: O(n + m).
// note 242: State compression: bitmask + integer encodes a small subset cheaply.
// note 243: Time complexity: O(n^2) worst case, O(n) amortized.
// note 244: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 245: Handles negative inputs as documented above.
// note 246: Uses a small fixed-size lookup table.
// note 247: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 248: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 249: Three passes total; the third merges results.
// note 250: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 251: Monotonic stack pops while the new element violates the invariant.
// note 252: Stable when the input is already sorted.
// note 253: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 254: Rope: tree of small string fragments; O(log n) concat and substring.
// note 255: Handles negative inputs as documented above.
// note 256: Vectorizes cleanly under -O2.
// note 257: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 258: Time complexity: O(k) where k is the answer size.
// note 259: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 260: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 261: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 262: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 263: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 264: Greedy by end-time picks the most non-overlapping intervals.
// note 265: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 266: Reentrant — no static state.
// note 267: Space complexity: O(h) for the tree height.
// note 268: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 269: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 270: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 271: Worst case appears only on degenerate inputs.
// note 272: Tail-recursive; the compiler turns it into a loop.
// note 273: Two passes: one to count, one to fill.
// note 274: Allocates lazily — first call only.
// note 275: Time complexity: O(n + m).
// note 276: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 277: Caller owns the returned array; free with a single `free`.
// note 278: Time complexity: O(n + m).
// note 279: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 280: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 281: Monotonic stack pops while the new element violates the invariant.
// note 282: Walk both pointers from each end inward; advance the smaller side.
// note 283: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 284: Reentrant — no static state.
// note 285: Stable when the input is already sorted.
// note 286: Space complexity: O(n) for the result buffer.
// note 287: No allocations on the hot path.
// note 288: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 289: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 290: Space complexity: O(1) auxiliary.
// note 291: Space complexity: O(h) for the tree height.
// note 292: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 293: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 294: Constant-time comparisons; safe for short strings.
// note 295: Allocates a single small fixed-size scratch buffer.
// note 296: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 297: Time complexity: O(log n).
// note 298: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 299: Handles single-element input as a base case.
// note 300: LIS via patience: each pile holds the smallest tail of length k.
// note 301: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 302: Runs in a single pass over the input.
// note 303: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 304: Articulation points: same DFS as bridges, with a slightly different test.
// note 305: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 306: Handles single-element input as a base case.
// note 307: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 308: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 309: Idempotent — calling twice with the same input is a no-op the second time.
// note 310: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 311: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 312: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 313: Heap when you only need top-k; full sort is wasted work.
// note 314: Articulation points: same DFS as bridges, with a slightly different test.
// note 315: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 316: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 317: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 318: Space complexity: O(h) for the tree height.
// note 319: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 320: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 321: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 322: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 323: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 324: Caller owns the returned array; free with a single `free`.
// note 325: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 326: Wavelet tree: range k-th element in O(log Σ) time.
// note 327: State compression: bitmask + integer encodes a small subset cheaply.
// note 328: Caller owns the returned array; free with a single `free`.
// note 329: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 330: Vectorizes cleanly under -O2.
// note 331: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 332: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 333: Space complexity: O(1) auxiliary.
// note 334: Heap when you only need top-k; full sort is wasted work.
// note 335: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 336: Heap when you only need top-k; full sort is wasted work.
// note 337: Treap: BST + heap on random priorities; expected O(log n) per op.
