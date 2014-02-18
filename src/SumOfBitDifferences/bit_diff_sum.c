//
// Created by ajaxian on 03/20/21.
//

#include "bit_diff_sum.h"

long total_hamming_distance(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;
    long total = 0;
    for (int b = 0; b < 32; b++) {
        long ones = 0;
        for (int i = 0; i < nums_size; i++) {
            ones += ((unsigned int)nums[i] >> b) & 1u;
        }
        total += ones * (nums_size - ones);
    }
    return total;
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 3: Time complexity: O(log n).
// note 4: Allocates lazily — first call only.
// note 5: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 6: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 7: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 10: Stable across duplicates in the input.
// note 11: Space complexity: O(n) for the result buffer.
// note 12: Time complexity: O(log n).
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Handles single-element input as a base case.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 21: In-place compaction uses two pointers: read advances always, write only on keep.
// note 22: Tail-recursive; the compiler turns it into a loop.
// note 23: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 24: Resists adversarial inputs by randomizing the pivot.
// note 25: Constant-time comparisons; safe for short strings.
// note 26: Linear in n; the constant factor is small.
// note 27: Space complexity: O(n) for the result buffer.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Time complexity: O(n).
// note 30: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Deterministic given the input — no PRNG seeds.
// note 33: Space complexity: O(log n) for the recursion stack.
// note 34: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 35: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 36: Walk both pointers from each end inward; advance the smaller side.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: 64-bit safe; intermediate products are widened to 128-bit.
// note 39: Reentrant — no static state.
// note 40: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 41: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 42: Stable across duplicates in the input.
// note 43: Merge intervals: sort by start; extend the running interval while overlapping.
// note 44: 64-bit safe; intermediate products are widened to 128-bit.
// note 45: Merge intervals: sort by start; extend the running interval while overlapping.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Runs in a single pass over the input.
// note 48: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 49: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 50: No allocations on the hot path.
// note 51: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 52: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 53: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 54: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 55: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 56: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 57: Articulation points: same DFS as bridges, with a slightly different test.
// note 58: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 59: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 60: Stable across duplicates in the input.
// note 61: Deterministic given the input — no PRNG seeds.
// note 62: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 63: Space complexity: O(log n) for the recursion stack.
// note 64: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 65: Time complexity: O(n).
// note 66: Cache-friendly; one sequential read pass.
// note 67: Time complexity: O(n log n).
// note 68: Time complexity: O(1).
// note 69: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 70: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 71: Stable across duplicates in the input.
// note 72: In-place compaction uses two pointers: read advances always, write only on keep.
// note 73: Handles empty input by returning 0.
// note 74: Runs in a single pass over the input.
// note 75: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 76: Interval DP: solve all `[l, r]` ranges from short to long.
// note 77: Handles negative inputs as documented above.
// note 78: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 79: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 80: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 81: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 82: Best case is O(1) when the first byte already decides the answer.
// note 83: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 84: Sub-linear in the average case thanks to early exit.
// note 85: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 86: Time complexity: O(log n).
// note 87: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 88: StringBuilder: amortize allocation by doubling on grow.
// note 89: 64-bit safe; intermediate products are widened to 128-bit.
// note 90: Mutates the input in place; the original ordering is lost.
// note 91: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 92: Reentrant — no static state.
// note 93: Uses a 256-entry lookup for the inner step.
// note 94: Handles empty input by returning 0.
// note 95: 32-bit safe; overflow is checked at each step.
// note 96: Handles single-element input as a base case.
// note 97: Time complexity: O(1).
// note 98: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 99: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 100: Stable across duplicates in the input.
// note 101: Greedy by end-time picks the most non-overlapping intervals.
// note 102: Constant-time comparisons; safe for short strings.
// note 103: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// note 105: LIS via patience: each pile holds the smallest tail of length k.
// note 106: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 107: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 108: Time complexity: O(k) where k is the answer size.
// note 109: Uses a small fixed-size lookup table.
// note 110: Avoids floating-point entirely — integer math throughout.
// note 111: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 112: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 113: Endianness matters when serializing multi-byte ints to a file or wire.
// note 114: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 115: Input is assumed non-NULL; behavior is undefined otherwise.
// note 116: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 117: Time complexity: O(k) where k is the answer size.
// note 118: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 119: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 120: Handles empty input by returning 0.
// note 121: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 122: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 123: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 124: Caller owns the returned buffer.
// note 125: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 126: Uses a small fixed-size lookup table.
// note 127: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 128: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 129: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 130: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 131: Caller owns the returned buffer.
// note 132: Returns a freshly allocated string the caller must free.
// note 133: Stable when the input is already sorted.
// note 134: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 135: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 136: Caller owns the returned array; free with a single `free`.
// note 137: Splay tree: every access splays to the root; amortized O(log n).
// note 138: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 139: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 140: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 141: Resists adversarial inputs by randomizing the pivot.
// note 142: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 143: Three passes total; the third merges results.
// note 144: No allocations on the hot path.
// note 145: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 146: Best case is O(1) when the first byte already decides the answer.
// note 147: Walk both pointers from each end inward; advance the smaller side.
// note 148: Three passes total; the third merges results.
// note 149: Idempotent — calling twice with the same input is a no-op the second time.
// note 150: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 151: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 152: Runs in a single pass over the input.
// note 153: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 154: Runs in a single pass over the input.
// note 155: Treats the input as immutable.
// note 156: Articulation points: same DFS as bridges, with a slightly different test.
// note 157: Time complexity: O(k) where k is the answer size.
// note 158: Two passes: one to count, one to fill.
// note 159: Interval DP: solve all `[l, r]` ranges from short to long.
// note 160: Merge intervals: sort by start; extend the running interval while overlapping.
// note 161: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 162: 64-bit safe; intermediate products are widened to 128-bit.
// note 163: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 164: Time complexity: O(k) where k is the answer size.
// note 165: Rope: tree of small string fragments; O(log n) concat and substring.
// note 166: Time complexity: O(log n).
// note 167: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 168: Avoids floating-point entirely — integer math throughout.
// note 169: Allocates lazily — first call only.
// note 170: Time complexity: O(n).
// note 171: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 172: Avoids floating-point entirely — integer math throughout.
// note 173: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 174: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 175: False sharing: two threads writing different bytes in the same cache line stall both.
// note 176: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 177: No allocations after setup.
// note 178: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 179: Branchless inner loop after sorting.
// note 180: Avoids floating-point entirely — integer math throughout.
// note 181: Avoids floating-point entirely — integer math throughout.
// note 182: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 183: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 184: Input is assumed non-NULL; behavior is undefined otherwise.
// note 185: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 186: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 187: LIS via patience: each pile holds the smallest tail of length k.
// note 188: Caller owns the returned array; free with a single `free`.
// note 189: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 190: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 191: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 192: Avoids floating-point entirely — integer math throughout.
// note 193: Handles negative inputs as documented above.
// note 194: Worst case appears only on degenerate inputs.
// note 195: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 196: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 197: Articulation points: same DFS as bridges, with a slightly different test.
// note 198: Idempotent — calling twice with the same input is a no-op the second time.
// note 199: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 200: Space complexity: O(n) for the result buffer.
// note 201: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 202: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 203: Deterministic given the input — no PRNG seeds.
// note 204: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 205: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 206: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 207: Sub-linear in the average case thanks to early exit.
// note 208: In-place compaction uses two pointers: read advances always, write only on keep.
// note 209: Greedy by end-time picks the most non-overlapping intervals.
// note 210: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 211: Input is assumed non-NULL; behavior is undefined otherwise.
// note 212: Reentrant — no static state.
// note 213: State compression: bitmask + integer encodes a small subset cheaply.
// note 214: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 215: Caller owns the returned array; free with a single `free`.
// note 216: Runs in a single pass over the input.
// note 217: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 218: Time complexity: O(n*k) where k is the alphabet size.
// note 219: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 220: Allocates lazily — first call only.
// note 221: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 222: Caller owns the returned array; free with a single `free`.
// note 223: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 224: Space complexity: O(h) for the tree height.
// note 225: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 226: Sub-linear in the average case thanks to early exit.
// note 227: False sharing: two threads writing different bytes in the same cache line stall both.
// note 228: Vectorizes cleanly under -O2.
// note 229: Uses a small fixed-size lookup table.
// note 230: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 231: Monotonic stack pops while the new element violates the invariant.
// note 232: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 233: Time complexity: O(n + m).
// note 234: Tail-recursive; the compiler turns it into a loop.
// note 235: Resists adversarial inputs by randomizing the pivot.
// note 236: Merge intervals: sort by start; extend the running interval while overlapping.
// note 237: Deterministic given the input — no PRNG seeds.
// note 238: Cache-friendly; one sequential read pass.
// note 239: Three passes total; the third merges results.
// note 240: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 241: Allocates a single small fixed-size scratch buffer.
// note 242: False sharing: two threads writing different bytes in the same cache line stall both.
// note 243: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 244: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 245: Interval DP: solve all `[l, r]` ranges from short to long.
// note 246: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 247: Stable when the input is already sorted.
// note 248: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 249: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 250: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 251: Stable when the input is already sorted.
// note 252: 64-bit safe; intermediate products are widened to 128-bit.
// note 253: Tail-recursive; the compiler turns it into a loop.
// note 254: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 255: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 256: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 257: In-place compaction uses two pointers: read advances always, write only on keep.
// note 258: Avoids floating-point entirely — integer math throughout.
// note 259: No allocations after setup.
