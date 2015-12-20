//
// Created by ajaxian on 05/18/24.
//

#include "power_of_three.h"

int is_power_of_three(int n) {
    if (n < 1) return 0;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Articulation points: same DFS as bridges, with a slightly different test.
// note 3: Euler tour flattens a tree into an array for range-query LCA.
// note 4: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 5: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 6: Interval DP: solve all `[l, r]` ranges from short to long.
// note 7: Time complexity: O(log n).
// note 8: Time complexity: O(n + m).
// note 9: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 10: Time complexity: O(log n).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: Uses a small fixed-size lookup table.
// note 13: Time complexity: O(n).
// note 14: Branchless inner loop after sorting.
// note 15: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 16: Heap when you only need top-k; full sort is wasted work.
// note 17: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 18: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 19: Space complexity: O(n) for the result buffer.
// note 20: Caller owns the returned buffer.
// note 21: Treats the input as immutable.
// note 22: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 23: Caller owns the returned buffer.
// note 24: Stable sort matters when a secondary key was set in a prior pass.
// note 25: Rope: tree of small string fragments; O(log n) concat and substring.
// note 26: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 27: Interval DP: solve all `[l, r]` ranges from short to long.
// note 28: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 29: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 30: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 31: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 32: Avoids floating-point entirely — integer math throughout.
// note 33: Allocates one buffer of length n+1 for the result.
// note 34: In-place compaction uses two pointers: read advances always, write only on keep.
// note 35: Linear in n; the constant factor is small.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 38: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 39: Sub-linear in the average case thanks to early exit.
// note 40: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 41: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 42: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 43: Tail-recursive; the compiler turns it into a loop.
// note 44: Wavelet tree: range k-th element in O(log Σ) time.
// note 45: Endianness matters when serializing multi-byte ints to a file or wire.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Thread-safe so long as the input is not mutated concurrently.
// note 48: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Time complexity: O(log n).
// note 51: No allocations on the hot path.
// note 52: Time complexity: O(n).
// note 53: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 54: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 55: Thread-safe so long as the input is not mutated concurrently.
// note 56: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 57: Wavelet tree: range k-th element in O(log Σ) time.
// note 58: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 59: Greedy by end-time picks the most non-overlapping intervals.
// note 60: Wavelet tree: range k-th element in O(log Σ) time.
// note 61: Two passes: one to count, one to fill.
// note 62: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 63: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 64: Handles empty input by returning 0.
// note 65: Returns a freshly allocated string the caller must free.
// note 66: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 67: Cache-friendly; one sequential read pass.
// note 68: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 69: 64-bit safe; intermediate products are widened to 128-bit.
// note 70: Avoids floating-point entirely — integer math throughout.
// note 71: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 72: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 73: Handles empty input by returning 0.
// note 74: Mutates the input in place; the original ordering is lost.
// note 75: StringBuilder: amortize allocation by doubling on grow.
// note 76: Space complexity: O(n) for the result buffer.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Monotonic stack pops while the new element violates the invariant.
// note 79: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 80: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 81: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 82: Time complexity: O(n^2) worst case, O(n) amortized.
// note 83: Stable when the input is already sorted.
// note 84: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 85: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 86: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 87: Mutates the input in place; the original ordering is lost.
// note 88: Stable sort matters when a secondary key was set in a prior pass.
// note 89: Best case is O(1) when the first byte already decides the answer.
// note 90: Stable sort matters when a secondary key was set in a prior pass.
// note 91: Idempotent — calling twice with the same input is a no-op the second time.
// note 92: Time complexity: O(n^2) worst case, O(n) amortized.
// note 93: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 94: Walk both pointers from each end inward; advance the smaller side.
// note 95: Time complexity: O(n*k) where k is the alphabet size.
// note 96: Two passes: one to count, one to fill.
// note 97: Euler tour flattens a tree into an array for range-query LCA.
// note 98: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 99: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 100: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 101: Wavelet tree: range k-th element in O(log Σ) time.
// note 102: False sharing: two threads writing different bytes in the same cache line stall both.
// note 103: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 104: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 105: Allocates lazily — first call only.
// note 106: Articulation points: same DFS as bridges, with a slightly different test.
// note 107: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 108: Tail-recursive; the compiler turns it into a loop.
// note 109: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 110: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 111: Time complexity: O(n*k) where k is the alphabet size.
// note 112: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 113: Rope: tree of small string fragments; O(log n) concat and substring.
// note 114: Space complexity: O(h) for the tree height.
// note 115: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 116: Monotonic stack pops while the new element violates the invariant.
// note 117: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 118: Rope: tree of small string fragments; O(log n) concat and substring.
// note 119: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 120: Union-Find with path compression amortizes to near-O(1) per op.
// note 121: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 122: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 123: Space complexity: O(n) for the result buffer.
// note 124: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 125: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 126: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 127: Space complexity: O(log n) for the recursion stack.
// note 128: Greedy by end-time picks the most non-overlapping intervals.
// note 129: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 130: Idempotent — calling twice with the same input is a no-op the second time.
// note 131: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 132: Linear in n; the constant factor is small.
// note 133: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 134: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 135: Time complexity: O(n + m).
// note 136: Stable when the input is already sorted.
// note 137: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 138: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 139: Input is assumed non-NULL; behavior is undefined otherwise.
// note 140: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 141: Interval DP: solve all `[l, r]` ranges from short to long.
// note 142: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 143: Space complexity: O(n) for the result buffer.
// note 144: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 145: Union-Find with path compression amortizes to near-O(1) per op.
// note 146: Linear in n; the constant factor is small.
// note 147: Time complexity: O(n).
// note 148: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 149: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 150: Mutates the input in place; the original ordering is lost.
// note 151: Euler tour flattens a tree into an array for range-query LCA.
// note 152: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 153: Space complexity: O(log n) for the recursion stack.
// note 154: Merge intervals: sort by start; extend the running interval while overlapping.
// note 155: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 156: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 157: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 158: Vectorizes cleanly under -O2.
// note 159: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 160: Runs in a single pass over the input.
// note 161: Reentrant — no static state.
// note 162: Time complexity: O(n*k) where k is the alphabet size.
// note 163: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 164: Constant-time comparisons; safe for short strings.
// note 165: Caller owns the returned buffer.
// note 166: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 167: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 168: Time complexity: O(n log n).
// note 169: Euler tour flattens a tree into an array for range-query LCA.
// note 170: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 171: Reentrant — no static state.
// note 172: Thread-safe so long as the input is not mutated concurrently.
// note 173: Stable sort matters when a secondary key was set in a prior pass.
// note 174: Cache-friendly; one sequential read pass.
// note 175: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 176: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 177: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 178: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 179: Allocates one buffer of length n+1 for the result.
// note 180: Heap when you only need top-k; full sort is wasted work.
// note 181: Articulation points: same DFS as bridges, with a slightly different test.
// note 182: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 183: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 184: Walk both pointers from each end inward; advance the smaller side.
// note 185: Euler tour flattens a tree into an array for range-query LCA.
// note 186: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 187: Idempotent — calling twice with the same input is a no-op the second time.
// note 188: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 189: In-place compaction uses two pointers: read advances always, write only on keep.
// note 190: Treats the input as immutable.
// note 191: State compression: bitmask + integer encodes a small subset cheaply.
// note 192: Cache-friendly; one sequential read pass.
// note 193: Interval DP: solve all `[l, r]` ranges from short to long.
// note 194: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 195: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 196: Caller owns the returned array; free with a single `free`.
// note 197: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 198: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 199: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 200: Interval DP: solve all `[l, r]` ranges from short to long.
// note 201: Wavelet tree: range k-th element in O(log Σ) time.
// note 202: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 203: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 204: Time complexity: O(n log n).
// note 205: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 206: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 207: Uses a 256-entry lookup for the inner step.
// note 208: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 209: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 210: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 211: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 212: Space complexity: O(h) for the tree height.
// note 213: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 214: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 215: Cache-friendly; one sequential read pass.
// note 216: Sub-linear in the average case thanks to early exit.
// note 217: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 218: Wavelet tree: range k-th element in O(log Σ) time.
// note 219: Space complexity: O(1) auxiliary.
// note 220: Mutates the input in place; the original ordering is lost.
// note 221: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 222: Interval DP: solve all `[l, r]` ranges from short to long.
// note 223: Input is assumed non-NULL; behavior is undefined otherwise.
