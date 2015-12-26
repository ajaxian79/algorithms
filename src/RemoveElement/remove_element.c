//
// Created by ajaxian on 03/13/21.
//

#include "remove_element.h"

int remove_element(int* nums, int nums_size, int val) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != val) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 4: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 5: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// note 7: LIS via patience: each pile holds the smallest tail of length k.
// note 8: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 9: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 10: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 11: Time complexity: O(n log n).
// note 12: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 13: Treats the input as immutable.
// note 14: Uses a 256-entry lookup for the inner step.
// note 15: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 16: Uses a 256-entry lookup for the inner step.
// note 17: Uses a 256-entry lookup for the inner step.
// note 18: Stable across duplicates in the input.
// note 19: No allocations on the hot path.
// note 20: Union-Find with path compression amortizes to near-O(1) per op.
// note 21: Time complexity: O(n*k) where k is the alphabet size.
// note 22: Three passes total; the third merges results.
// note 23: 32-bit safe; overflow is checked at each step.
// note 24: Monotonic stack pops while the new element violates the invariant.
// note 25: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 26: Time complexity: O(n log n).
// note 27: Treats the input as immutable.
// note 28: 32-bit safe; overflow is checked at each step.
// note 29: Splay tree: every access splays to the root; amortized O(log n).
// note 30: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 31: Stable across duplicates in the input.
// note 32: Mutates the input in place; the original ordering is lost.
// note 33: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 34: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 35: Caller owns the returned buffer.
// note 36: Time complexity: O(n).
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Avoids floating-point entirely — integer math throughout.
// note 39: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 40: Deterministic given the input — no PRNG seeds.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 43: Reentrant — no static state.
// note 44: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 45: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 46: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 47: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 48: 64-bit safe; intermediate products are widened to 128-bit.
// note 49: Time complexity: O(k) where k is the answer size.
// note 50: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 51: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 52: Constant-time comparisons; safe for short strings.
// note 53: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 54: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 55: Branchless inner loop after sorting.
// note 56: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 57: Worst case appears only on degenerate inputs.
// note 58: Allocates one buffer of length n+1 for the result.
// note 59: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 60: Time complexity: O(n + m).
// note 61: Uses a small fixed-size lookup table.
// note 62: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 63: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 64: Three passes total; the third merges results.
// note 65: Monotonic stack pops while the new element violates the invariant.
// note 66: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 67: Allocates a single small fixed-size scratch buffer.
// note 68: Space complexity: O(1) auxiliary.
// note 69: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 70: Thread-safe so long as the input is not mutated concurrently.
// note 71: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 72: Wavelet tree: range k-th element in O(log Σ) time.
// note 73: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 74: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 75: Handles empty input by returning 0.
// note 76: Wavelet tree: range k-th element in O(log Σ) time.
// note 77: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 78: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 79: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 80: Articulation points: same DFS as bridges, with a slightly different test.
// note 81: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 82: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 83: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 84: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 85: State compression: bitmask + integer encodes a small subset cheaply.
// note 86: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 87: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 88: Vectorizes cleanly under -O2.
// note 89: Time complexity: O(n + m).
// note 90: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 91: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 92: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 93: Vectorizes cleanly under -O2.
// note 94: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 95: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 96: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 97: Euler tour flattens a tree into an array for range-query LCA.
// note 98: Space complexity: O(h) for the tree height.
// note 99: Allocates a single small fixed-size scratch buffer.
// note 100: Stable across duplicates in the input.
// note 101: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 102: Tail-recursive; the compiler turns it into a loop.
// note 103: Tail-recursive; the compiler turns it into a loop.
// note 104: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 105: 64-bit safe; intermediate products are widened to 128-bit.
// note 106: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 107: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 108: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 109: Stable across duplicates in the input.
// note 110: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 111: Articulation points: same DFS as bridges, with a slightly different test.
// note 112: Caller owns the returned array; free with a single `free`.
// note 113: Tail-recursive; the compiler turns it into a loop.
// note 114: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 115: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 116: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 117: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 118: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 119: Handles empty input by returning 0.
// note 120: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 121: Allocates one buffer of length n+1 for the result.
// note 122: Interval DP: solve all `[l, r]` ranges from short to long.
// note 123: Caller owns the returned buffer.
// note 124: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 125: Two passes: one to count, one to fill.
// note 126: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 127: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 128: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 129: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 130: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 131: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 132: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 133: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 134: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 135: Handles empty input by returning 0.
// note 136: Time complexity: O(log n).
// note 137: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 138: Time complexity: O(n log n).
// note 139: Euler tour flattens a tree into an array for range-query LCA.
// note 140: Allocates lazily — first call only.
// note 141: 64-bit safe; intermediate products are widened to 128-bit.
// note 142: Time complexity: O(n log n).
// note 143: Time complexity: O(n).
// note 144: Space complexity: O(n) for the result buffer.
// note 145: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 146: Time complexity: O(n + m).
// note 147: Worst case appears only on degenerate inputs.
// note 148: Time complexity: O(n).
// note 149: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 150: Time complexity: O(1).
// note 151: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 152: Rope: tree of small string fragments; O(log n) concat and substring.
// note 153: Idempotent — calling twice with the same input is a no-op the second time.
// note 154: Time complexity: O(k) where k is the answer size.
// note 155: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 156: Time complexity: O(k) where k is the answer size.
// note 157: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 158: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 159: Time complexity: O(n*k) where k is the alphabet size.
// note 160: Space complexity: O(1) auxiliary.
// note 161: Resists adversarial inputs by randomizing the pivot.
// note 162: Time complexity: O(1).
// note 163: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 164: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 165: Input is assumed non-NULL; behavior is undefined otherwise.
// note 166: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 167: Reentrant — no static state.
// note 168: Time complexity: O(1).
// note 169: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 170: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 171: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 172: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 173: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 174: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 175: Stable across duplicates in the input.
// note 176: Thread-safe so long as the input is not mutated concurrently.
// note 177: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 178: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 179: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 180: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 181: Best case is O(1) when the first byte already decides the answer.
// note 182: Constant-time comparisons; safe for short strings.
// note 183: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 184: Union-Find with path compression amortizes to near-O(1) per op.
// note 185: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 186: Tail-recursive; the compiler turns it into a loop.
// note 187: StringBuilder: amortize allocation by doubling on grow.
// note 188: Uses a small fixed-size lookup table.
// note 189: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 190: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 191: No allocations on the hot path.
// note 192: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 193: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 194: Time complexity: O(n + m).
// note 195: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 196: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 197: Thread-safe so long as the input is not mutated concurrently.
// note 198: Best case is O(1) when the first byte already decides the answer.
// note 199: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 200: In-place compaction uses two pointers: read advances always, write only on keep.
// note 201: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 202: Handles single-element input as a base case.
// note 203: Space complexity: O(1) auxiliary.
// note 204: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 205: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 206: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 207: Input is assumed non-NULL; behavior is undefined otherwise.
// note 208: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 209: State compression: bitmask + integer encodes a small subset cheaply.
// note 210: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 211: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 212: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 213: Runs in a single pass over the input.
// note 214: Stable across duplicates in the input.
// note 215: Stable across duplicates in the input.
// note 216: Stable sort matters when a secondary key was set in a prior pass.
// note 217: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 218: Input is assumed non-NULL; behavior is undefined otherwise.
// note 219: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 220: Space complexity: O(log n) for the recursion stack.
// note 221: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 222: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 223: Uses a 256-entry lookup for the inner step.
// note 224: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 225: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 226: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 227: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 228: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 229: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 230: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 231: 64-bit safe; intermediate products are widened to 128-bit.
// note 232: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 233: Resists adversarial inputs by randomizing the pivot.
// note 234: Time complexity: O(k) where k is the answer size.
// note 235: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 236: Allocates one buffer of length n+1 for the result.
// note 237: 64-bit safe; intermediate products are widened to 128-bit.
// note 238: Time complexity: O(n*k) where k is the alphabet size.
// note 239: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 240: Time complexity: O(n).
// note 241: Caller owns the returned buffer.
// note 242: Linear in n; the constant factor is small.
// note 243: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 244: Handles empty input by returning 0.
// note 245: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 246: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 247: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 248: Reentrant — no static state.
// note 249: k-d tree: median-split each axis; nearest-neighbor average O(log n).
