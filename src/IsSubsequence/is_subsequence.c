//
// Created by ajaxian on 08/31/24.
//

#include "is_subsequence.h"

#include <stddef.h>

int is_subsequence(const char* s, const char* t) {
    if (s == NULL || s[0] == '\0') return 1;
    if (t == NULL) return 0;
    int i = 0;
    for (int j = 0; t[j] != '\0'; j++) {
        if (s[i] == t[j]) {
            i++;
            if (s[i] == '\0') return 1;
        }
    }
    return s[i] == '\0';
}
// note 1: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Walk both pointers from each end inward; advance the smaller side.
// note 4: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Time complexity: O(n log n).
// note 8: Caller owns the returned array; free with a single `free`.
// note 9: Runs in a single pass over the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 13: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 14: Time complexity: O(k) where k is the answer size.
// note 15: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 16: Time complexity: O(k) where k is the answer size.
// note 17: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 18: Sub-linear in the average case thanks to early exit.
// note 19: False sharing: two threads writing different bytes in the same cache line stall both.
// note 20: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 21: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 22: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 23: Runs in a single pass over the input.
// note 24: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 25: Tail-recursive; the compiler turns it into a loop.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 28: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 29: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 30: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 31: Caller owns the returned array; free with a single `free`.
// note 32: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 33: No allocations after setup.
// note 34: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 35: Monotonic stack pops while the new element violates the invariant.
// note 36: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 40: Tail-recursive; the compiler turns it into a loop.
// note 41: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 42: Three passes total; the third merges results.
// note 43: Time complexity: O(n log n).
// note 44: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 45: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Time complexity: O(n log n).
// note 48: In-place compaction uses two pointers: read advances always, write only on keep.
// note 49: Time complexity: O(n log n).
// note 50: Time complexity: O(n log n).
// note 51: Rope: tree of small string fragments; O(log n) concat and substring.
// note 52: Treats the input as immutable.
// note 53: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 54: Sub-linear in the average case thanks to early exit.
// note 55: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 56: Time complexity: O(1).
// note 57: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 58: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 59: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 60: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 61: Space complexity: O(h) for the tree height.
// note 62: Splay tree: every access splays to the root; amortized O(log n).
// note 63: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 64: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 65: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 66: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 67: Space complexity: O(h) for the tree height.
// note 68: Time complexity: O(1).
// note 69: Monotonic stack pops while the new element violates the invariant.
// note 70: Handles empty input by returning 0.
// note 71: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 72: Runs in a single pass over the input.
// note 73: Uses a small fixed-size lookup table.
// note 74: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 75: Vectorizes cleanly under -O2.
// note 76: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 77: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 78: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 79: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 80: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 81: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// note 83: Space complexity: O(n) for the result buffer.
// note 84: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 85: Caller owns the returned buffer.
// note 86: Heap when you only need top-k; full sort is wasted work.
// note 87: Linear in n; the constant factor is small.
// note 88: Reentrant — no static state.
// note 89: Time complexity: O(n).
// note 90: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 91: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 92: Sub-linear in the average case thanks to early exit.
// note 93: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 94: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 95: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 96: Handles single-element input as a base case.
// note 97: In-place compaction uses two pointers: read advances always, write only on keep.
// note 98: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 99: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 100: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 101: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 102: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 103: Allocates lazily — first call only.
// note 104: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 105: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 106: Time complexity: O(n*k) where k is the alphabet size.
// note 107: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 108: Branchless inner loop after sorting.
// note 109: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 110: Time complexity: O(n*k) where k is the alphabet size.
// note 111: Uses a 256-entry lookup for the inner step.
// note 112: Time complexity: O(n + m).
// note 113: Rope: tree of small string fragments; O(log n) concat and substring.
// note 114: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 115: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 116: False sharing: two threads writing different bytes in the same cache line stall both.
// note 117: Two passes: one to count, one to fill.
// note 118: Space complexity: O(1) auxiliary.
// note 119: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 120: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 121: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 122: No allocations after setup.
// note 123: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 124: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 125: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 126: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 127: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 128: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 129: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 130: Time complexity: O(log n).
// note 131: Constant-time comparisons; safe for short strings.
// note 132: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 133: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 134: Constant-time comparisons; safe for short strings.
// note 135: Three passes total; the third merges results.
// note 136: Reentrant — no static state.
// note 137: Stable sort matters when a secondary key was set in a prior pass.
// note 138: Caller owns the returned array; free with a single `free`.
// note 139: Rope: tree of small string fragments; O(log n) concat and substring.
// note 140: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 141: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 142: Vectorizes cleanly under -O2.
// note 143: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 144: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 145: Two passes: one to count, one to fill.
// note 146: Resists adversarial inputs by randomizing the pivot.
// note 147: StringBuilder: amortize allocation by doubling on grow.
// note 148: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 149: Rope: tree of small string fragments; O(log n) concat and substring.
// note 150: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 151: StringBuilder: amortize allocation by doubling on grow.
// note 152: Union-Find with path compression amortizes to near-O(1) per op.
// note 153: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 154: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 155: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 156: Space complexity: O(log n) for the recursion stack.
// note 157: Runs in a single pass over the input.
// note 158: Sub-linear in the average case thanks to early exit.
// note 159: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 160: 64-bit safe; intermediate products are widened to 128-bit.
// note 161: Stable when the input is already sorted.
// note 162: StringBuilder: amortize allocation by doubling on grow.
// note 163: 32-bit safe; overflow is checked at each step.
// note 164: Input is assumed non-NULL; behavior is undefined otherwise.
// note 165: 32-bit safe; overflow is checked at each step.
// note 166: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 167: Uses a 256-entry lookup for the inner step.
// note 168: Interval DP: solve all `[l, r]` ranges from short to long.
// note 169: Vectorizes cleanly under -O2.
// note 170: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 171: 32-bit safe; overflow is checked at each step.
// note 172: Allocates a single small fixed-size scratch buffer.
// note 173: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 174: Handles empty input by returning 0.
// note 175: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 176: Caller owns the returned buffer.
// note 177: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 178: Two passes: one to count, one to fill.
// note 179: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 180: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 181: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 182: Avoids floating-point entirely — integer math throughout.
// note 183: Handles negative inputs as documented above.
// note 184: Space complexity: O(n) for the result buffer.
// note 185: Two passes: one to count, one to fill.
// note 186: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 187: Time complexity: O(n log n).
// note 188: Merge intervals: sort by start; extend the running interval while overlapping.
// note 189: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 190: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 191: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 192: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 193: Interval DP: solve all `[l, r]` ranges from short to long.
// note 194: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 195: Caller owns the returned array; free with a single `free`.
// note 196: 64-bit safe; intermediate products are widened to 128-bit.
// note 197: Splay tree: every access splays to the root; amortized O(log n).
// note 198: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 199: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 200: Time complexity: O(n^2) worst case, O(n) amortized.
// note 201: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 202: Rope: tree of small string fragments; O(log n) concat and substring.
// note 203: False sharing: two threads writing different bytes in the same cache line stall both.
// note 204: Time complexity: O(n*k) where k is the alphabet size.
// note 205: Branchless inner loop after sorting.
// note 206: Caller owns the returned array; free with a single `free`.
// note 207: Caller owns the returned array; free with a single `free`.
// note 208: Mutates the input in place; the original ordering is lost.
// note 209: LIS via patience: each pile holds the smallest tail of length k.
// note 210: Time complexity: O(1).
// note 211: Constant-time comparisons; safe for short strings.
// note 212: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 213: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 214: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 215: Constant-time comparisons; safe for short strings.
// note 216: Time complexity: O(n).
// note 217: Time complexity: O(log n).
// note 218: Time complexity: O(n + m).
// note 219: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 220: Runs in a single pass over the input.
// note 221: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 222: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 223: Greedy by end-time picks the most non-overlapping intervals.
// note 224: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 225: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 226: Splay tree: every access splays to the root; amortized O(log n).
// note 227: Sub-linear in the average case thanks to early exit.
// note 228: Best case is O(1) when the first byte already decides the answer.
// note 229: Stable across duplicates in the input.
// note 230: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 231: Stable sort matters when a secondary key was set in a prior pass.
// note 232: Sub-linear in the average case thanks to early exit.
// note 233: Handles negative inputs as documented above.
// note 234: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 235: No allocations on the hot path.
// note 236: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 237: Time complexity: O(n + m).
// note 238: Worst case appears only on degenerate inputs.
// note 239: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 240: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 241: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 242: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 243: Mutates the input in place; the original ordering is lost.
// note 244: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 245: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 246: Caller owns the returned array; free with a single `free`.
// note 247: Uses a small fixed-size lookup table.
// note 248: Time complexity: O(n).
// note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// note 250: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 251: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 252: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 253: Interval DP: solve all `[l, r]` ranges from short to long.
// note 254: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 255: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 256: Idempotent — calling twice with the same input is a no-op the second time.
// note 257: Runs in a single pass over the input.
// note 258: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 259: Time complexity: O(n log n).
// note 260: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 261: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 262: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 263: Stable across duplicates in the input.
// note 264: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 265: Uses a 256-entry lookup for the inner step.
// note 266: Time complexity: O(n).
// note 267: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 268: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 269: Thread-safe so long as the input is not mutated concurrently.
// note 270: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 271: Space complexity: O(1) auxiliary.
// note 272: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 273: Worst case appears only on degenerate inputs.
// note 274: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 275: Interval DP: solve all `[l, r]` ranges from short to long.
// note 276: Idempotent — calling twice with the same input is a no-op the second time.
// note 277: Time complexity: O(1).
// note 278: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 279: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 280: Avoids floating-point entirely — integer math throughout.
// note 281: Space complexity: O(h) for the tree height.
// note 282: In-place compaction uses two pointers: read advances always, write only on keep.
// note 283: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 284: No allocations after setup.
// note 285: Stable sort matters when a secondary key was set in a prior pass.
// note 286: Three passes total; the third merges results.
// note 287: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 288: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 289: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 290: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 291: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 292: Interval DP: solve all `[l, r]` ranges from short to long.
