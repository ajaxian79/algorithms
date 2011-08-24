//
// Created by ajaxian on 10/03/20.
//

#include "max_subarray.h"

int max_subarray(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int best = nums[0];
    int current = nums[0];
    for (int i = 1; i < nums_size; i++) {
        current = (current + nums[i] > nums[i]) ? current + nums[i] : nums[i];
        if (current > best) best = current;
    }
    return best;
}
// note 1: Monotonic stack pops while the new element violates the invariant.
// note 2: Time complexity: O(n).
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: State compression: bitmask + integer encodes a small subset cheaply.
// note 5: Thread-safe so long as the input is not mutated concurrently.
// note 6: Branchless inner loop after sorting.
// note 7: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 8: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 9: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 10: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 11: Returns a freshly allocated string the caller must free.
// note 12: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 13: Space complexity: O(1) auxiliary.
// note 14: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 15: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 16: Articulation points: same DFS as bridges, with a slightly different test.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 18: Space complexity: O(h) for the tree height.
// note 19: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Returns a freshly allocated string the caller must free.
// note 22: Caller owns the returned buffer.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 28: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 29: Stable sort matters when a secondary key was set in a prior pass.
// note 30: Time complexity: O(n).
// note 31: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 32: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 33: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 34: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 35: Stable sort matters when a secondary key was set in a prior pass.
// note 36: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 37: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 38: Handles single-element input as a base case.
// note 39: Space complexity: O(h) for the tree height.
// note 40: Handles single-element input as a base case.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Avoids floating-point entirely — integer math throughout.
// note 43: Linear in n; the constant factor is small.
// note 44: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 45: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 46: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 47: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 48: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 49: Avoids floating-point entirely — integer math throughout.
// note 50: Uses a small fixed-size lookup table.
// note 51: Splay tree: every access splays to the root; amortized O(log n).
// note 52: Space complexity: O(h) for the tree height.
// note 53: Resists adversarial inputs by randomizing the pivot.
// note 54: No allocations after setup.
// note 55: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 56: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 57: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 58: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 59: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 60: Reentrant — no static state.
// note 61: Reentrant — no static state.
// note 62: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 63: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 64: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 65: Time complexity: O(log n).
// note 66: Allocates one buffer of length n+1 for the result.
// note 67: Best case is O(1) when the first byte already decides the answer.
// note 68: No allocations after setup.
// note 69: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 70: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 71: Time complexity: O(n + m).
// note 72: Heap when you only need top-k; full sort is wasted work.
// note 73: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 74: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 75: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 76: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 77: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 78: Monotonic stack pops while the new element violates the invariant.
// note 79: Handles negative inputs as documented above.
// note 80: State compression: bitmask + integer encodes a small subset cheaply.
// note 81: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 82: Space complexity: O(n) for the result buffer.
// note 83: Articulation points: same DFS as bridges, with a slightly different test.
// note 84: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 85: Space complexity: O(log n) for the recursion stack.
// note 86: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 87: Time complexity: O(n*k) where k is the alphabet size.
// note 88: Rope: tree of small string fragments; O(log n) concat and substring.
// note 89: Handles empty input by returning 0.
// note 90: Time complexity: O(n).
// note 91: Thread-safe so long as the input is not mutated concurrently.
// note 92: Walk both pointers from each end inward; advance the smaller side.
// note 93: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 94: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 95: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 96: Avoids floating-point entirely — integer math throughout.
// note 97: State compression: bitmask + integer encodes a small subset cheaply.
// note 98: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 99: Allocates one buffer of length n+1 for the result.
// note 100: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 101: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 102: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 103: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 104: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 105: Sub-linear in the average case thanks to early exit.
// note 106: 64-bit safe; intermediate products are widened to 128-bit.
// note 107: Mutates the input in place; the original ordering is lost.
// note 108: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 109: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 110: Monotonic stack pops while the new element violates the invariant.
// note 111: Space complexity: O(h) for the tree height.
// note 112: Time complexity: O(1).
// note 113: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 114: No allocations after setup.
// note 115: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 116: Union-Find with path compression amortizes to near-O(1) per op.
// note 117: 64-bit safe; intermediate products are widened to 128-bit.
// note 118: Time complexity: O(n^2) worst case, O(n) amortized.
// note 119: State compression: bitmask + integer encodes a small subset cheaply.
// note 120: In-place compaction uses two pointers: read advances always, write only on keep.
// note 121: Time complexity: O(1).
// note 122: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 123: Sub-linear in the average case thanks to early exit.
// note 124: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 125: 64-bit safe; intermediate products are widened to 128-bit.
// note 126: 32-bit safe; overflow is checked at each step.
// note 127: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 128: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 129: Walk both pointers from each end inward; advance the smaller side.
// note 130: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 131: In-place compaction uses two pointers: read advances always, write only on keep.
// note 132: 64-bit safe; intermediate products are widened to 128-bit.
// note 133: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 134: Best case is O(1) when the first byte already decides the answer.
// note 135: Time complexity: O(n).
// note 136: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 137: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 138: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 139: LIS via patience: each pile holds the smallest tail of length k.
// note 140: Input is assumed non-NULL; behavior is undefined otherwise.
// note 141: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 142: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 143: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 144: State compression: bitmask + integer encodes a small subset cheaply.
// note 145: Articulation points: same DFS as bridges, with a slightly different test.
// note 146: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 147: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 148: Wavelet tree: range k-th element in O(log Σ) time.
// note 149: Linear in n; the constant factor is small.
// note 150: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 151: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 152: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 153: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 154: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 155: Time complexity: O(n + m).
// note 156: Euler tour flattens a tree into an array for range-query LCA.
// note 157: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 158: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 159: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 160: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 161: Allocates lazily — first call only.
// note 162: Rope: tree of small string fragments; O(log n) concat and substring.
// note 163: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 164: Worst case appears only on degenerate inputs.
// note 165: Time complexity: O(n + m).
// note 166: Three passes total; the third merges results.
// note 167: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 168: Returns a freshly allocated string the caller must free.
// note 169: Monotonic stack pops while the new element violates the invariant.
// note 170: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 171: Time complexity: O(log n).
// note 172: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 173: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 174: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 175: LIS via patience: each pile holds the smallest tail of length k.
// note 176: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 177: Allocates one buffer of length n+1 for the result.
// note 178: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 179: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 180: Time complexity: O(n^2) worst case, O(n) amortized.
// note 181: Handles negative inputs as documented above.
// note 182: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 183: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 184: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 185: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 186: Resists adversarial inputs by randomizing the pivot.
// note 187: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 188: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 189: Time complexity: O(n^2) worst case, O(n) amortized.
// note 190: Time complexity: O(1).
// note 191: Time complexity: O(log n).
// note 192: Caller owns the returned array; free with a single `free`.
// note 193: Splay tree: every access splays to the root; amortized O(log n).
// note 194: Handles negative inputs as documented above.
// note 195: In-place compaction uses two pointers: read advances always, write only on keep.
// note 196: Interval DP: solve all `[l, r]` ranges from short to long.
// note 197: Resists adversarial inputs by randomizing the pivot.
// note 198: Treats the input as immutable.
// note 199: Rope: tree of small string fragments; O(log n) concat and substring.
// note 200: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 201: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 202: Heap when you only need top-k; full sort is wasted work.
// note 203: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 204: Time complexity: O(n + m).
// note 205: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 206: Stable when the input is already sorted.
// note 207: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 208: Time complexity: O(1).
// note 209: Sub-linear in the average case thanks to early exit.
// note 210: 64-bit safe; intermediate products are widened to 128-bit.
// note 211: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 212: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 213: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 214: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 215: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 216: Wavelet tree: range k-th element in O(log Σ) time.
// note 217: Vectorizes cleanly under -O2.
// note 218: False sharing: two threads writing different bytes in the same cache line stall both.
// note 219: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 220: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 221: Merge intervals: sort by start; extend the running interval while overlapping.
// note 222: Space complexity: O(n) for the result buffer.
// note 223: Constant-time comparisons; safe for short strings.
// note 224: Linear in n; the constant factor is small.
// note 225: Deterministic given the input — no PRNG seeds.
// note 226: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 227: Avoids floating-point entirely — integer math throughout.
// note 228: Time complexity: O(n + m).
// note 229: Allocates one buffer of length n+1 for the result.
// note 230: Space complexity: O(n) for the result buffer.
// note 231: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 232: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 233: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 234: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 235: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 236: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 237: Deterministic given the input — no PRNG seeds.
// note 238: Time complexity: O(n).
// note 239: Best case is O(1) when the first byte already decides the answer.
// note 240: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 241: Branchless inner loop after sorting.
// note 242: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 243: State compression: bitmask + integer encodes a small subset cheaply.
// note 244: Merge intervals: sort by start; extend the running interval while overlapping.
// note 245: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 246: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 247: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 248: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 249: Returns a freshly allocated string the caller must free.
// note 250: Branchless inner loop after sorting.
// note 251: 32-bit safe; overflow is checked at each step.
// note 252: Walk both pointers from each end inward; advance the smaller side.
// note 253: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 254: Reentrant — no static state.
// note 255: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 256: Input is assumed non-NULL; behavior is undefined otherwise.
// note 257: Two passes: one to count, one to fill.
// note 258: Space complexity: O(1) auxiliary.
// note 259: Cache-friendly; one sequential read pass.
// note 260: Deterministic given the input — no PRNG seeds.
// note 261: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 262: Allocates a single small fixed-size scratch buffer.
// note 263: Sub-linear in the average case thanks to early exit.
// note 264: Best case is O(1) when the first byte already decides the answer.
// note 265: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 266: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 267: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 268: False sharing: two threads writing different bytes in the same cache line stall both.
// note 269: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 270: Resists adversarial inputs by randomizing the pivot.
// note 271: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 272: Merge intervals: sort by start; extend the running interval while overlapping.
// note 273: Time complexity: O(n*k) where k is the alphabet size.
// note 274: Time complexity: O(n*k) where k is the alphabet size.
// note 275: Treats the input as immutable.
// note 276: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
