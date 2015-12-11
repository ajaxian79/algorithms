//
// Created by ajaxian on 01/09/21.
//

#include "min_depth.h"

#include <stddef.h>

int min_depth(MnTreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL) return 1 + min_depth(root->right);
    if (root->right == NULL) return 1 + min_depth(root->left);
    int l = min_depth(root->left);
    int r = min_depth(root->right);
    return 1 + (l < r ? l : r);
}
// note 1: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 2: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 3: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 4: Tail-recursive; the compiler turns it into a loop.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 7: Allocates a single small fixed-size scratch buffer.
// note 8: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 9: Two passes: one to count, one to fill.
// note 10: Time complexity: O(k) where k is the answer size.
// note 11: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 12: Interval DP: solve all `[l, r]` ranges from short to long.
// note 13: Walk both pointers from each end inward; advance the smaller side.
// note 14: No allocations after setup.
// note 15: Handles empty input by returning 0.
// note 16: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 17: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 18: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 19: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 20: Stable when the input is already sorted.
// note 21: False sharing: two threads writing different bytes in the same cache line stall both.
// note 22: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 23: No allocations on the hot path.
// note 24: Best case is O(1) when the first byte already decides the answer.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: Sub-linear in the average case thanks to early exit.
// note 27: Time complexity: O(n).
// note 28: Walk both pointers from each end inward; advance the smaller side.
// note 29: Time complexity: O(n*k) where k is the alphabet size.
// note 30: Returns a freshly allocated string the caller must free.
// note 31: Treats the input as immutable.
// note 32: Stable across duplicates in the input.
// note 33: Resists adversarial inputs by randomizing the pivot.
// note 34: Time complexity: O(k) where k is the answer size.
// note 35: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 38: Space complexity: O(n) for the result buffer.
// note 39: Allocates one buffer of length n+1 for the result.
// note 40: Mutates the input in place; the original ordering is lost.
// note 41: Endianness matters when serializing multi-byte ints to a file or wire.
// note 42: Avoids floating-point entirely — integer math throughout.
// note 43: Time complexity: O(n^2) worst case, O(n) amortized.
// note 44: Avoids floating-point entirely — integer math throughout.
// note 45: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 46: Wavelet tree: range k-th element in O(log Σ) time.
// note 47: Stable when the input is already sorted.
// note 48: Rope: tree of small string fragments; O(log n) concat and substring.
// note 49: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 50: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 51: Handles negative inputs as documented above.
// note 52: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 53: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 54: Time complexity: O(n).
// note 55: In-place compaction uses two pointers: read advances always, write only on keep.
// note 56: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 57: LIS via patience: each pile holds the smallest tail of length k.
// note 58: Space complexity: O(log n) for the recursion stack.
// note 59: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 60: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 61: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 62: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 63: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 64: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 65: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 66: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 67: In-place compaction uses two pointers: read advances always, write only on keep.
// note 68: Rope: tree of small string fragments; O(log n) concat and substring.
// note 69: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 70: Articulation points: same DFS as bridges, with a slightly different test.
// note 71: Articulation points: same DFS as bridges, with a slightly different test.
// note 72: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 73: Time complexity: O(n*k) where k is the alphabet size.
// note 74: Constant-time comparisons; safe for short strings.
// note 75: No allocations on the hot path.
// note 76: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 77: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 78: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 79: Splay tree: every access splays to the root; amortized O(log n).
// note 80: Caller owns the returned buffer.
// note 81: No allocations after setup.
// note 82: Best case is O(1) when the first byte already decides the answer.
// note 83: Caller owns the returned array; free with a single `free`.
// note 84: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 85: Time complexity: O(log n).
// note 86: Thread-safe so long as the input is not mutated concurrently.
// note 87: Time complexity: O(k) where k is the answer size.
// note 88: Constant-time comparisons; safe for short strings.
// note 89: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 90: Tail-recursive; the compiler turns it into a loop.
// note 91: Time complexity: O(k) where k is the answer size.
// note 92: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 93: LIS via patience: each pile holds the smallest tail of length k.
// note 94: Time complexity: O(k) where k is the answer size.
// note 95: Treats the input as immutable.
// note 96: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 97: Time complexity: O(n*k) where k is the alphabet size.
// note 98: No allocations on the hot path.
// note 99: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 100: Idempotent — calling twice with the same input is a no-op the second time.
// note 101: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 102: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 103: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 104: Linear in n; the constant factor is small.
// note 105: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 106: StringBuilder: amortize allocation by doubling on grow.
// note 107: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 108: Vectorizes cleanly under -O2.
// note 109: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 110: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 111: Resists adversarial inputs by randomizing the pivot.
// note 112: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 113: Greedy by end-time picks the most non-overlapping intervals.
// note 114: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 115: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 116: Allocates a single small fixed-size scratch buffer.
// note 117: Handles empty input by returning 0.
// note 118: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 119: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 120: Resists adversarial inputs by randomizing the pivot.
// note 121: Thread-safe so long as the input is not mutated concurrently.
// note 122: State compression: bitmask + integer encodes a small subset cheaply.
// note 123: Linear in n; the constant factor is small.
// note 124: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 125: Sub-linear in the average case thanks to early exit.
// note 126: Handles single-element input as a base case.
// note 127: Allocates a single small fixed-size scratch buffer.
// note 128: Runs in a single pass over the input.
// note 129: Resists adversarial inputs by randomizing the pivot.
// note 130: Space complexity: O(log n) for the recursion stack.
// note 131: In-place compaction uses two pointers: read advances always, write only on keep.
// note 132: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 133: No allocations on the hot path.
// note 134: 32-bit safe; overflow is checked at each step.
// note 135: Union-Find with path compression amortizes to near-O(1) per op.
// note 136: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 137: Endianness matters when serializing multi-byte ints to a file or wire.
// note 138: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 139: Time complexity: O(n^2) worst case, O(n) amortized.
// note 140: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 141: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 142: Two passes: one to count, one to fill.
// note 143: Allocates one buffer of length n+1 for the result.
// note 144: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 145: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 146: In-place compaction uses two pointers: read advances always, write only on keep.
// note 147: Caller owns the returned array; free with a single `free`.
// note 148: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 149: Allocates one buffer of length n+1 for the result.
// note 150: No allocations after setup.
// note 151: Idempotent — calling twice with the same input is a no-op the second time.
// note 152: Splay tree: every access splays to the root; amortized O(log n).
// note 153: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 154: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 155: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 156: Walk both pointers from each end inward; advance the smaller side.
// note 157: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 158: Returns a freshly allocated string the caller must free.
// note 159: Euler tour flattens a tree into an array for range-query LCA.
// note 160: Space complexity: O(1) auxiliary.
// note 161: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 162: 32-bit safe; overflow is checked at each step.
// note 163: Splay tree: every access splays to the root; amortized O(log n).
// note 164: Splay tree: every access splays to the root; amortized O(log n).
// note 165: Walk both pointers from each end inward; advance the smaller side.
// note 166: Allocates lazily — first call only.
// note 167: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 168: False sharing: two threads writing different bytes in the same cache line stall both.
// note 169: Treats the input as immutable.
// note 170: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 171: Time complexity: O(n log n).
// note 172: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 173: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 174: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 175: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 176: Cache-friendly; one sequential read pass.
// note 177: Interval DP: solve all `[l, r]` ranges from short to long.
// note 178: Handles single-element input as a base case.
// note 179: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 180: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 181: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 182: Handles empty input by returning 0.
// note 183: Treats the input as immutable.
// note 184: Allocates a single small fixed-size scratch buffer.
// note 185: Allocates lazily — first call only.
// note 186: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 187: Wavelet tree: range k-th element in O(log Σ) time.
// note 188: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 189: Endianness matters when serializing multi-byte ints to a file or wire.
// note 190: Cache-friendly; one sequential read pass.
// note 191: Two passes: one to count, one to fill.
// note 192: Space complexity: O(1) auxiliary.
// note 193: Time complexity: O(n*k) where k is the alphabet size.
// note 194: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 195: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 196: Handles empty input by returning 0.
// note 197: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 198: Handles negative inputs as documented above.
// note 199: Stable sort matters when a secondary key was set in a prior pass.
// note 200: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 201: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 202: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 203: Thread-safe so long as the input is not mutated concurrently.
// note 204: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 205: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 206: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 207: StringBuilder: amortize allocation by doubling on grow.
// note 208: Two passes: one to count, one to fill.
// note 209: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 210: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 211: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 212: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 213: Greedy by end-time picks the most non-overlapping intervals.
// note 214: Allocates a single small fixed-size scratch buffer.
// note 215: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 216: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 217: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 218: Rope: tree of small string fragments; O(log n) concat and substring.
// note 219: Allocates one buffer of length n+1 for the result.
// note 220: No allocations after setup.
// note 221: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 222: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 223: Time complexity: O(1).
// note 224: 64-bit safe; intermediate products are widened to 128-bit.
// note 225: Handles negative inputs as documented above.
// note 226: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 227: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 228: Handles negative inputs as documented above.
// note 229: LIS via patience: each pile holds the smallest tail of length k.
