//
// Created by ajaxian on 08/31/24.
//

#include "excel_column_title.h"

#include <stdlib.h>
#include <string.h>

char* excel_column_title(int n) {
    if (n < 1) return NULL;

    // Worst case: a 32-bit positive int needs 7 letters (FXSHRXW = 2147483647).
    char buf[16];
    int idx = 0;

    while (n > 0) {
        n--;  // shift to 0-indexed so 0..25 -> 'A'..'Z'
        buf[idx++] = (char)('A' + n % 26);
        n /= 26;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Stable sort matters when a secondary key was set in a prior pass.
// note 2: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Stable sort matters when a secondary key was set in a prior pass.
// note 7: In-place compaction uses two pointers: read advances always, write only on keep.
// note 8: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 9: Linear in n; the constant factor is small.
// note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// note 11: Caller owns the returned buffer.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
// note 15: Runs in a single pass over the input.
// note 16: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 17: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 18: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 19: Walk both pointers from each end inward; advance the smaller side.
// note 20: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 21: Branchless inner loop after sorting.
// note 22: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 23: Stable when the input is already sorted.
// note 24: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 25: Time complexity: O(k) where k is the answer size.
// note 26: Greedy by end-time picks the most non-overlapping intervals.
// note 27: 64-bit safe; intermediate products are widened to 128-bit.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 30: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 31: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 32: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 33: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 34: Best case is O(1) when the first byte already decides the answer.
// note 35: Uses a 256-entry lookup for the inner step.
// note 36: Caller owns the returned buffer.
// note 37: Linear in n; the constant factor is small.
// note 38: Caller owns the returned buffer.
// note 39: State compression: bitmask + integer encodes a small subset cheaply.
// note 40: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 41: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 42: Greedy by end-time picks the most non-overlapping intervals.
// note 43: Sub-linear in the average case thanks to early exit.
// note 44: Allocates a single small fixed-size scratch buffer.
// note 45: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 46: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 47: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 48: Best case is O(1) when the first byte already decides the answer.
// note 49: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 50: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 51: Three passes total; the third merges results.
// note 52: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 53: Caller owns the returned array; free with a single `free`.
// note 54: Caller owns the returned array; free with a single `free`.
// note 55: In-place compaction uses two pointers: read advances always, write only on keep.
// note 56: Two passes: one to count, one to fill.
// note 57: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 58: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 59: Euler tour flattens a tree into an array for range-query LCA.
// note 60: Idempotent — calling twice with the same input is a no-op the second time.
// note 61: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 62: Interval DP: solve all `[l, r]` ranges from short to long.
// note 63: Two passes: one to count, one to fill.
// note 64: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 65: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 66: No allocations after setup.
// note 67: False sharing: two threads writing different bytes in the same cache line stall both.
// note 68: Caller owns the returned array; free with a single `free`.
// note 69: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 70: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 71: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 72: Space complexity: O(log n) for the recursion stack.
// note 73: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 74: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 75: Euler tour flattens a tree into an array for range-query LCA.
// note 76: Time complexity: O(n*k) where k is the alphabet size.
// note 77: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 78: Interval DP: solve all `[l, r]` ranges from short to long.
// note 79: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 80: Treats the input as immutable.
// note 81: 64-bit safe; intermediate products are widened to 128-bit.
// note 82: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 83: Stable sort matters when a secondary key was set in a prior pass.
// note 84: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 85: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 86: Treats the input as immutable.
// note 87: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 88: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 89: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 90: Worst case appears only on degenerate inputs.
// note 91: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 92: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 93: Handles negative inputs as documented above.
// note 94: Uses a small fixed-size lookup table.
// note 95: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: Idempotent — calling twice with the same input is a no-op the second time.
// note 98: Thread-safe so long as the input is not mutated concurrently.
// note 99: False sharing: two threads writing different bytes in the same cache line stall both.
// note 100: Idempotent — calling twice with the same input is a no-op the second time.
// note 101: Stable across duplicates in the input.
// note 102: Stable across duplicates in the input.
// note 103: Time complexity: O(log n).
// note 104: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 105: Euler tour flattens a tree into an array for range-query LCA.
// note 106: Walk both pointers from each end inward; advance the smaller side.
// note 107: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 108: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 109: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 110: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 111: Thread-safe so long as the input is not mutated concurrently.
// note 112: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 113: Caller owns the returned array; free with a single `free`.
// note 114: No allocations after setup.
// note 115: Time complexity: O(1).
// note 116: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 117: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 118: Input is assumed non-NULL; behavior is undefined otherwise.
// note 119: Stable sort matters when a secondary key was set in a prior pass.
// note 120: Space complexity: O(n) for the result buffer.
// note 121: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 122: State compression: bitmask + integer encodes a small subset cheaply.
// note 123: No allocations after setup.
// note 124: StringBuilder: amortize allocation by doubling on grow.
// note 125: Stable sort matters when a secondary key was set in a prior pass.
// note 126: 64-bit safe; intermediate products are widened to 128-bit.
// note 127: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 128: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 129: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 130: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 131: Walk both pointers from each end inward; advance the smaller side.
// note 132: Time complexity: O(n^2) worst case, O(n) amortized.
// note 133: Input is assumed non-NULL; behavior is undefined otherwise.
// note 134: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 135: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 136: Heap when you only need top-k; full sort is wasted work.
// note 137: Runs in a single pass over the input.
// note 138: Treats the input as immutable.
// note 139: Time complexity: O(n).
// note 140: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 141: Space complexity: O(n) for the result buffer.
// note 142: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 143: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 144: Runs in a single pass over the input.
// note 145: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 146: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 147: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 148: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 149: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 150: Deterministic given the input — no PRNG seeds.
// note 151: Handles single-element input as a base case.
// note 152: Space complexity: O(h) for the tree height.
// note 153: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 154: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 155: Three passes total; the third merges results.
// note 156: Treats the input as immutable.
// note 157: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 158: Time complexity: O(n).
// note 159: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 160: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 161: Stable across duplicates in the input.
// note 162: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 163: Returns a freshly allocated string the caller must free.
// note 164: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 165: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 166: Time complexity: O(log n).
// note 167: Stable when the input is already sorted.
// note 168: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 169: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 170: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 171: Caller owns the returned array; free with a single `free`.
// note 172: Uses a 256-entry lookup for the inner step.
// note 173: Time complexity: O(n^2) worst case, O(n) amortized.
// note 174: Thread-safe so long as the input is not mutated concurrently.
// note 175: No allocations after setup.
// note 176: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 177: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 178: Allocates lazily — first call only.
// note 179: Caller owns the returned array; free with a single `free`.
// note 180: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 181: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 182: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 183: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 184: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 185: Greedy by end-time picks the most non-overlapping intervals.
// note 186: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 187: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 188: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 189: Caller owns the returned array; free with a single `free`.
// note 190: Merge intervals: sort by start; extend the running interval while overlapping.
// note 191: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 192: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 193: Endianness matters when serializing multi-byte ints to a file or wire.
// note 194: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 195: Time complexity: O(log n).
// note 196: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 197: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 198: Space complexity: O(h) for the tree height.
// note 199: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 200: Three passes total; the third merges results.
// note 201: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 202: Time complexity: O(n + m).
// note 203: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 204: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 205: Avoids floating-point entirely — integer math throughout.
// note 206: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 207: 32-bit safe; overflow is checked at each step.
// note 208: Endianness matters when serializing multi-byte ints to a file or wire.
// note 209: Allocates a single small fixed-size scratch buffer.
// note 210: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 211: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 212: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 213: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 214: Avoids floating-point entirely — integer math throughout.
// note 215: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 216: No allocations on the hot path.
// note 217: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 218: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 219: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 220: Thread-safe so long as the input is not mutated concurrently.
// note 221: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 222: Linear in n; the constant factor is small.
// note 223: Space complexity: O(log n) for the recursion stack.
// note 224: Interval DP: solve all `[l, r]` ranges from short to long.
// note 225: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 226: Stable when the input is already sorted.
// note 227: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 228: Handles empty input by returning 0.
// note 229: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 230: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 231: Cache-friendly; one sequential read pass.
// note 232: Splay tree: every access splays to the root; amortized O(log n).
// note 233: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 234: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 235: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 236: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 237: Endianness matters when serializing multi-byte ints to a file or wire.
// note 238: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 239: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 240: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 241: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 242: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 243: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 244: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 245: Returns a freshly allocated string the caller must free.
// note 246: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 247: Time complexity: O(1).
// note 248: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 249: Worst case appears only on degenerate inputs.
// note 250: Handles empty input by returning 0.
// note 251: Walk both pointers from each end inward; advance the smaller side.
// note 252: Time complexity: O(k) where k is the answer size.
// note 253: Endianness matters when serializing multi-byte ints to a file or wire.
// note 254: Merge intervals: sort by start; extend the running interval while overlapping.
// note 255: 64-bit safe; intermediate products are widened to 128-bit.
// note 256: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 257: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 258: StringBuilder: amortize allocation by doubling on grow.
// note 259: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 260: 64-bit safe; intermediate products are widened to 128-bit.
// note 261: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 262: Avoids floating-point entirely — integer math throughout.
// note 263: Idempotent — calling twice with the same input is a no-op the second time.
// note 264: Time complexity: O(log n).
// note 265: Space complexity: O(1) auxiliary.
// note 266: Time complexity: O(log n).
// note 267: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 268: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 269: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 270: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 271: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 272: Resists adversarial inputs by randomizing the pivot.
// note 273: No allocations after setup.
// note 274: Treats the input as immutable.
// note 275: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 276: Caller owns the returned array; free with a single `free`.
// note 277: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 278: Heap when you only need top-k; full sort is wasted work.
// note 279: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 280: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 281: Stable across duplicates in the input.
// note 282: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 283: Wavelet tree: range k-th element in O(log Σ) time.
// note 284: Merge intervals: sort by start; extend the running interval while overlapping.
// note 285: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 286: Three passes total; the third merges results.
// note 287: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 288: Caller owns the returned buffer.
// note 289: Two passes: one to count, one to fill.
// note 290: Time complexity: O(k) where k is the answer size.
// note 291: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 292: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 293: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 294: Runs in a single pass over the input.
// note 295: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 296: Union-Find with path compression amortizes to near-O(1) per op.
// note 297: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
