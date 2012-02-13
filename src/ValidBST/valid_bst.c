//
// Created by ajaxian on 02/27/21.
//

#include "valid_bst.h"

#include <stddef.h>

static int validate(VTreeNode* node, long lo, long hi) {
    if (node == NULL) return 1;
    if (node->val <= lo || node->val >= hi) return 0;
    return validate(node->left, lo, node->val) &&
           validate(node->right, node->val, hi);
}

int is_valid_bst(VTreeNode* root) {
    return validate(root, -2147483649L, 2147483648L);
}
// note 1: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 2: Input is assumed non-NULL; behavior is undefined otherwise.
// note 3: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 4: Input is assumed non-NULL; behavior is undefined otherwise.
// note 5: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 6: No allocations on the hot path.
// note 7: Three passes total; the third merges results.
// note 8: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 9: Handles empty input by returning 0.
// note 10: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 11: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 12: Handles empty input by returning 0.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// note 17: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 18: Handles single-element input as a base case.
// note 19: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 20: Time complexity: O(1).
// note 21: Tail-recursive; the compiler turns it into a loop.
// note 22: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 23: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 24: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 25: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 26: Interval DP: solve all `[l, r]` ranges from short to long.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 29: Space complexity: O(log n) for the recursion stack.
// note 30: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 31: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 32: Three passes total; the third merges results.
// note 33: Euler tour flattens a tree into an array for range-query LCA.
// note 34: In-place compaction uses two pointers: read advances always, write only on keep.
// note 35: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 36: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 37: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 38: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 39: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 40: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 41: Walk both pointers from each end inward; advance the smaller side.
// note 42: 64-bit safe; intermediate products are widened to 128-bit.
// note 43: Linear in n; the constant factor is small.
// note 44: Best case is O(1) when the first byte already decides the answer.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Three passes total; the third merges results.
// note 48: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 49: Space complexity: O(1) auxiliary.
// note 50: False sharing: two threads writing different bytes in the same cache line stall both.
// note 51: 32-bit safe; overflow is checked at each step.
// note 52: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 53: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 54: Walk both pointers from each end inward; advance the smaller side.
// note 55: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 56: Handles single-element input as a base case.
// note 57: Walk both pointers from each end inward; advance the smaller side.
// note 58: Space complexity: O(h) for the tree height.
// note 59: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 60: Runs in a single pass over the input.
// note 61: Splay tree: every access splays to the root; amortized O(log n).
// note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// note 63: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 64: Time complexity: O(n + m).
// note 65: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 66: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 67: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 68: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 69: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 70: No allocations after setup.
// note 71: Time complexity: O(n).
// note 72: Deterministic given the input — no PRNG seeds.
// note 73: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 74: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 75: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 76: Caller owns the returned array; free with a single `free`.
// note 77: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 78: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 79: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 80: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 81: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 82: No allocations after setup.
// note 83: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 84: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 85: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 86: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 87: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 88: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 89: Walk both pointers from each end inward; advance the smaller side.
// note 90: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 91: Stable sort matters when a secondary key was set in a prior pass.
// note 92: Merge intervals: sort by start; extend the running interval while overlapping.
// note 93: Time complexity: O(k) where k is the answer size.
// note 94: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 95: Allocates lazily — first call only.
// note 96: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 97: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 98: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 99: Allocates lazily — first call only.
// note 100: Time complexity: O(1).
// note 101: Endianness matters when serializing multi-byte ints to a file or wire.
// note 102: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 103: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 104: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 105: Merge intervals: sort by start; extend the running interval while overlapping.
// note 106: Stable sort matters when a secondary key was set in a prior pass.
// note 107: Time complexity: O(n log n).
// note 108: Space complexity: O(log n) for the recursion stack.
// note 109: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 110: State compression: bitmask + integer encodes a small subset cheaply.
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 113: Reentrant — no static state.
// note 114: Time complexity: O(log n).
// note 115: Runs in a single pass over the input.
// note 116: Merge intervals: sort by start; extend the running interval while overlapping.
// note 117: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 118: Allocates one buffer of length n+1 for the result.
// note 119: Idempotent — calling twice with the same input is a no-op the second time.
// note 120: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 121: Wavelet tree: range k-th element in O(log Σ) time.
// note 122: Allocates a single small fixed-size scratch buffer.
// note 123: Stable when the input is already sorted.
// note 124: Treats the input as immutable.
// note 125: Resists adversarial inputs by randomizing the pivot.
// note 126: Walk both pointers from each end inward; advance the smaller side.
// note 127: Stable when the input is already sorted.
// note 128: Handles empty input by returning 0.
// note 129: Handles negative inputs as documented above.
// note 130: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 131: Splay tree: every access splays to the root; amortized O(log n).
// note 132: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 133: Linear in n; the constant factor is small.
// note 134: State compression: bitmask + integer encodes a small subset cheaply.
// note 135: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 136: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 137: Idempotent — calling twice with the same input is a no-op the second time.
// note 138: LIS via patience: each pile holds the smallest tail of length k.
// note 139: Linear in n; the constant factor is small.
// note 140: Linear in n; the constant factor is small.
// note 141: Time complexity: O(1).
// note 142: Stable when the input is already sorted.
// note 143: No allocations on the hot path.
// note 144: Allocates a single small fixed-size scratch buffer.
// note 145: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 146: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 147: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 148: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 149: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 150: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 151: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 152: Allocates lazily — first call only.
// note 153: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 154: Handles single-element input as a base case.
// note 155: Uses a 256-entry lookup for the inner step.
// note 156: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 157: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 158: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 159: No allocations after setup.
// note 160: StringBuilder: amortize allocation by doubling on grow.
// note 161: Stable sort matters when a secondary key was set in a prior pass.
// note 162: Time complexity: O(n log n).
// note 163: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 164: No allocations after setup.
// note 165: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 166: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 167: Treats the input as immutable.
// note 168: Deterministic given the input — no PRNG seeds.
// note 169: Allocates one buffer of length n+1 for the result.
// note 170: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 171: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 172: Uses a 256-entry lookup for the inner step.
// note 173: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 174: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 175: Time complexity: O(k) where k is the answer size.
// note 176: Time complexity: O(n log n).
// note 177: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 178: Best case is O(1) when the first byte already decides the answer.
// note 179: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 180: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 181: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 182: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 183: Vectorizes cleanly under -O2.
// note 184: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 185: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 186: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 187: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 188: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 189: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 190: Rope: tree of small string fragments; O(log n) concat and substring.
// note 191: Constant-time comparisons; safe for short strings.
// note 192: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 193: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 194: Time complexity: O(n*k) where k is the alphabet size.
// note 195: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 196: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 197: Allocates lazily — first call only.
// note 198: Time complexity: O(n log n).
// note 199: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 200: False sharing: two threads writing different bytes in the same cache line stall both.
// note 201: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 202: Best case is O(1) when the first byte already decides the answer.
// note 203: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 204: Thread-safe so long as the input is not mutated concurrently.
// note 205: Handles negative inputs as documented above.
// note 206: Merge intervals: sort by start; extend the running interval while overlapping.
// note 207: Caller owns the returned buffer.
// note 208: False sharing: two threads writing different bytes in the same cache line stall both.
// note 209: Tail-recursive; the compiler turns it into a loop.
// note 210: Two passes: one to count, one to fill.
// note 211: Worst case appears only on degenerate inputs.
// note 212: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 213: Avoids floating-point entirely — integer math throughout.
// note 214: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 215: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 216: Time complexity: O(n*k) where k is the alphabet size.
// note 217: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 218: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 219: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 220: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 221: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 222: Two passes: one to count, one to fill.
// note 223: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 224: Space complexity: O(h) for the tree height.
// note 225: Branchless inner loop after sorting.
// note 226: No allocations on the hot path.
// note 227: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 228: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 229: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 230: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 231: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 232: Reentrant — no static state.
// note 233: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 234: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 235: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 236: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 237: Allocates one buffer of length n+1 for the result.
// note 238: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 239: Stable sort matters when a secondary key was set in a prior pass.
// note 240: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 241: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 242: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 243: False sharing: two threads writing different bytes in the same cache line stall both.
// note 244: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 245: Best case is O(1) when the first byte already decides the answer.
// note 246: Merge intervals: sort by start; extend the running interval while overlapping.
// note 247: Treats the input as immutable.
// note 248: Walk both pointers from each end inward; advance the smaller side.
// note 249: Monotonic stack pops while the new element violates the invariant.
// note 250: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 251: No allocations after setup.
// note 252: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 253: Uses a small fixed-size lookup table.
// note 254: Splay tree: every access splays to the root; amortized O(log n).
// note 255: Handles single-element input as a base case.
// note 256: Reentrant — no static state.
// note 257: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 258: Treats the input as immutable.
// note 259: Stable when the input is already sorted.
// note 260: Branchless inner loop after sorting.
// note 261: Time complexity: O(k) where k is the answer size.
// note 262: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 263: Handles single-element input as a base case.
// note 264: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 265: In-place compaction uses two pointers: read advances always, write only on keep.
// note 266: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 267: Heap when you only need top-k; full sort is wasted work.
// note 268: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 269: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 270: Walk both pointers from each end inward; advance the smaller side.
// note 271: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 272: Time complexity: O(k) where k is the answer size.
// note 273: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 274: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 275: Merge intervals: sort by start; extend the running interval while overlapping.
// note 276: Heap when you only need top-k; full sort is wasted work.
// note 277: Space complexity: O(n) for the result buffer.
// note 278: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 279: Stable when the input is already sorted.
// note 280: Branchless inner loop after sorting.
// note 281: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 282: Walk both pointers from each end inward; advance the smaller side.
// note 283: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 284: Thread-safe so long as the input is not mutated concurrently.
// note 285: Stable sort matters when a secondary key was set in a prior pass.
// note 286: Space complexity: O(1) auxiliary.
// note 287: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
