//
// Created by ajaxian on 08/31/24.
//

#include "ugly_number.h"

int is_ugly(int n) {
    if (n <= 0) return 0;
    int factors[] = {2, 3, 5};
    for (int i = 0; i < 3; i++) {
        while (n % factors[i] == 0) n /= factors[i];
    }
    return n == 1;
}
// note 1: Worst case appears only on degenerate inputs.
// note 2: Greedy by end-time picks the most non-overlapping intervals.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Space complexity: O(n) for the result buffer.
// note 5: Runs in a single pass over the input.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 8: Merge intervals: sort by start; extend the running interval while overlapping.
// note 9: Allocates lazily — first call only.
// note 10: Wavelet tree: range k-th element in O(log Σ) time.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 13: StringBuilder: amortize allocation by doubling on grow.
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Input is assumed non-NULL; behavior is undefined otherwise.
// note 16: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 19: Reentrant — no static state.
// note 20: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 21: Time complexity: O(n + m).
// note 22: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 23: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 24: Time complexity: O(n).
// note 25: Stable sort matters when a secondary key was set in a prior pass.
// note 26: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 27: Euler tour flattens a tree into an array for range-query LCA.
// note 28: Handles single-element input as a base case.
// note 29: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 30: Tail-recursive; the compiler turns it into a loop.
// note 31: Sub-linear in the average case thanks to early exit.
// note 32: Best case is O(1) when the first byte already decides the answer.
// note 33: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 34: Best case is O(1) when the first byte already decides the answer.
// note 35: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Time complexity: O(n + m).
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 40: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 41: Stable when the input is already sorted.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 44: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 45: 64-bit safe; intermediate products are widened to 128-bit.
// note 46: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 47: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 48: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 49: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 50: Time complexity: O(log n).
// note 51: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 52: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 53: 64-bit safe; intermediate products are widened to 128-bit.
// note 54: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 55: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 56: Caller owns the returned array; free with a single `free`.
// note 57: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 58: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 59: Greedy by end-time picks the most non-overlapping intervals.
// note 60: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 61: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 62: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 63: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 64: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 65: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 66: Vectorizes cleanly under -O2.
// note 67: Mutates the input in place; the original ordering is lost.
// note 68: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 69: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 70: 64-bit safe; intermediate products are widened to 128-bit.
// note 71: Greedy by end-time picks the most non-overlapping intervals.
// note 72: Walk both pointers from each end inward; advance the smaller side.
// note 73: Handles empty input by returning 0.
// note 74: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 75: Handles single-element input as a base case.
// note 76: Runs in a single pass over the input.
// note 77: Treats the input as immutable.
// note 78: Handles empty input by returning 0.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: Cache-friendly; one sequential read pass.
// note 81: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 82: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 83: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 84: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 85: Sub-linear in the average case thanks to early exit.
// note 86: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 87: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 88: Avoids floating-point entirely — integer math throughout.
// note 89: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 90: Interval DP: solve all `[l, r]` ranges from short to long.
// note 91: Allocates lazily — first call only.
// note 92: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 93: Tail-recursive; the compiler turns it into a loop.
// note 94: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 95: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 96: Treats the input as immutable.
// note 97: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 98: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 99: Returns a freshly allocated string the caller must free.
// note 100: State compression: bitmask + integer encodes a small subset cheaply.
// note 101: Space complexity: O(log n) for the recursion stack.
// note 102: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: Stable sort matters when a secondary key was set in a prior pass.
// note 105: Uses a small fixed-size lookup table.
// note 106: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 107: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 108: Time complexity: O(log n).
// note 109: Linear in n; the constant factor is small.
// note 110: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 111: Input is assumed non-NULL; behavior is undefined otherwise.
// note 112: 32-bit safe; overflow is checked at each step.
// note 113: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 114: No allocations on the hot path.
// note 115: Resists adversarial inputs by randomizing the pivot.
// note 116: Worst case appears only on degenerate inputs.
// note 117: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 118: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 119: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 120: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 121: StringBuilder: amortize allocation by doubling on grow.
// note 122: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 123: Endianness matters when serializing multi-byte ints to a file or wire.
// note 124: Constant-time comparisons; safe for short strings.
// note 125: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 126: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 127: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 128: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 129: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 130: Linear in n; the constant factor is small.
// note 131: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 132: Constant-time comparisons; safe for short strings.
// note 133: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 134: Allocates a single small fixed-size scratch buffer.
// note 135: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 136: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 137: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 138: Space complexity: O(n) for the result buffer.
// note 139: Resists adversarial inputs by randomizing the pivot.
// note 140: Time complexity: O(n*k) where k is the alphabet size.
// note 141: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 142: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 143: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 144: Tail-recursive; the compiler turns it into a loop.
// note 145: Two passes: one to count, one to fill.
// note 146: 32-bit safe; overflow is checked at each step.
// note 147: Avoids floating-point entirely — integer math throughout.
// note 148: Space complexity: O(log n) for the recursion stack.
// note 149: Tail-recursive; the compiler turns it into a loop.
// note 150: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 151: Cache-friendly; one sequential read pass.
// note 152: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 153: Handles single-element input as a base case.
// note 154: Time complexity: O(n^2) worst case, O(n) amortized.
// note 155: State compression: bitmask + integer encodes a small subset cheaply.
// note 156: StringBuilder: amortize allocation by doubling on grow.
// note 157: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 158: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 159: Two passes: one to count, one to fill.
// note 160: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 161: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 162: Greedy by end-time picks the most non-overlapping intervals.
// note 163: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 164: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 165: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 166: Space complexity: O(log n) for the recursion stack.
// note 167: Heap when you only need top-k; full sort is wasted work.
// note 168: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 169: Time complexity: O(n log n).
// note 170: Merge intervals: sort by start; extend the running interval while overlapping.
// note 171: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 172: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 173: Allocates a single small fixed-size scratch buffer.
// note 174: Euler tour flattens a tree into an array for range-query LCA.
// note 175: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 176: False sharing: two threads writing different bytes in the same cache line stall both.
// note 177: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 178: Time complexity: O(k) where k is the answer size.
// note 179: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 180: 32-bit safe; overflow is checked at each step.
// note 181: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 182: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 183: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 184: Handles empty input by returning 0.
// note 185: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 186: Walk both pointers from each end inward; advance the smaller side.
// note 187: Two passes: one to count, one to fill.
// note 188: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 189: Constant-time comparisons; safe for short strings.
// note 190: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 191: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 192: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 193: Union-Find with path compression amortizes to near-O(1) per op.
// note 194: Returns a freshly allocated string the caller must free.
// note 195: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 196: Allocates lazily — first call only.
// note 197: Runs in a single pass over the input.
// note 198: Mutates the input in place; the original ordering is lost.
// note 199: Monotonic stack pops while the new element violates the invariant.
// note 200: Constant-time comparisons; safe for short strings.
// note 201: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 202: Handles single-element input as a base case.
// note 203: Treats the input as immutable.
// note 204: Constant-time comparisons; safe for short strings.
// note 205: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 206: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 207: LIS via patience: each pile holds the smallest tail of length k.
// note 208: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 209: Stable across duplicates in the input.
// note 210: Space complexity: O(log n) for the recursion stack.
// note 211: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 212: Three passes total; the third merges results.
