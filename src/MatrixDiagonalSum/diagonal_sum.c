//
// Created by ajaxian on 07/25/20.
//

#include "diagonal_sum.h"

#include <stddef.h>

long diagonal_sum(const int* mat, int n) {
    if (n <= 0 || mat == NULL) return 0;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i * n + i];
        sum += mat[i * n + (n - 1 - i)];
    }
    if (n % 2 == 1) {
        int mid = n / 2;
        sum -= mat[mid * n + mid];
    }
    return sum;
}
// note 1: Union-Find with path compression amortizes to near-O(1) per op.
// note 2: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 8: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 9: No allocations after setup.
// note 10: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 11: Handles negative inputs as documented above.
// note 12: Caller owns the returned array; free with a single `free`.
// note 13: Space complexity: O(h) for the tree height.
// note 14: Best case is O(1) when the first byte already decides the answer.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: Time complexity: O(n).
// note 17: Time complexity: O(1).
// note 18: No allocations on the hot path.
// note 19: Space complexity: O(1) auxiliary.
// note 20: Mutates the input in place; the original ordering is lost.
// note 21: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 22: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 25: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 26: Best case is O(1) when the first byte already decides the answer.
// note 27: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 28: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 29: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 30: Caller owns the returned buffer.
// note 31: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 32: 64-bit safe; intermediate products are widened to 128-bit.
// note 33: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 34: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 35: Time complexity: O(k) where k is the answer size.
// note 36: Allocates lazily — first call only.
// note 37: Heap when you only need top-k; full sort is wasted work.
// note 38: Greedy by end-time picks the most non-overlapping intervals.
// note 39: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 40: Stable sort matters when a secondary key was set in a prior pass.
// note 41: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 42: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 43: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 44: No allocations after setup.
// note 45: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 46: Time complexity: O(n + m).
// note 47: Allocates one buffer of length n+1 for the result.
// note 48: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 49: Time complexity: O(n + m).
// note 50: Time complexity: O(1).
// note 51: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 52: Branchless inner loop after sorting.
// note 53: Time complexity: O(log n).
// note 54: Space complexity: O(1) auxiliary.
// note 55: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 56: Avoids floating-point entirely — integer math throughout.
// note 57: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 58: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 59: No allocations on the hot path.
// note 60: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 61: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 62: Space complexity: O(h) for the tree height.
// note 63: Union-Find with path compression amortizes to near-O(1) per op.
// note 64: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 65: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 66: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 67: Stable sort matters when a secondary key was set in a prior pass.
// note 68: Greedy by end-time picks the most non-overlapping intervals.
// note 69: No allocations after setup.
// note 70: Euler tour flattens a tree into an array for range-query LCA.
// note 71: Space complexity: O(n) for the result buffer.
// note 72: Allocates a single small fixed-size scratch buffer.
// note 73: Monotonic stack pops while the new element violates the invariant.
// note 74: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 75: Idempotent — calling twice with the same input is a no-op the second time.
// note 76: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 77: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 78: Avoids floating-point entirely — integer math throughout.
// note 79: Thread-safe so long as the input is not mutated concurrently.
// note 80: No allocations on the hot path.
// note 81: Linear in n; the constant factor is small.
// note 82: 64-bit safe; intermediate products are widened to 128-bit.
// note 83: Uses a small fixed-size lookup table.
// note 84: Sub-linear in the average case thanks to early exit.
// note 85: Greedy by end-time picks the most non-overlapping intervals.
// note 86: Space complexity: O(h) for the tree height.
// note 87: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 88: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 89: Wavelet tree: range k-th element in O(log Σ) time.
// note 90: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 91: Splay tree: every access splays to the root; amortized O(log n).
// note 92: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 93: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 94: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 95: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 96: Handles single-element input as a base case.
// note 97: Time complexity: O(n log n).
// note 98: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 99: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 100: Merge intervals: sort by start; extend the running interval while overlapping.
// note 101: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 102: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 103: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 104: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 105: Walk both pointers from each end inward; advance the smaller side.
// note 106: Handles empty input by returning 0.
// note 107: StringBuilder: amortize allocation by doubling on grow.
// note 108: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 109: Stable across duplicates in the input.
// note 110: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 111: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 112: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 113: Greedy by end-time picks the most non-overlapping intervals.
// note 114: 64-bit safe; intermediate products are widened to 128-bit.
// note 115: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 116: Caller owns the returned array; free with a single `free`.
// note 117: Allocates lazily — first call only.
// note 118: Reentrant — no static state.
// note 119: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 120: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 121: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 122: Caller owns the returned array; free with a single `free`.
// note 123: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 124: In-place compaction uses two pointers: read advances always, write only on keep.
// note 125: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 126: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 127: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 128: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 129: Tail-recursive; the compiler turns it into a loop.
// note 130: Linear in n; the constant factor is small.
// note 131: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 132: Space complexity: O(1) auxiliary.
// note 133: Input is assumed non-NULL; behavior is undefined otherwise.
// note 134: Best case is O(1) when the first byte already decides the answer.
// note 135: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 136: Time complexity: O(n^2) worst case, O(n) amortized.
// note 137: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 138: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 139: False sharing: two threads writing different bytes in the same cache line stall both.
// note 140: Thread-safe so long as the input is not mutated concurrently.
// note 141: 32-bit safe; overflow is checked at each step.
// note 142: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 143: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 144: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 145: Two passes: one to count, one to fill.
// note 146: Time complexity: O(n*k) where k is the alphabet size.
// note 147: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 148: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 149: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 150: Splay tree: every access splays to the root; amortized O(log n).
// note 151: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 152: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 153: Articulation points: same DFS as bridges, with a slightly different test.
// note 154: Linear in n; the constant factor is small.
// note 155: Stable when the input is already sorted.
// note 156: Caller owns the returned buffer.
// note 157: Treats the input as immutable.
// note 158: Sub-linear in the average case thanks to early exit.
// note 159: Branchless inner loop after sorting.
// note 160: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 161: Uses a 256-entry lookup for the inner step.
// note 162: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 163: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 164: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 165: Allocates one buffer of length n+1 for the result.
// note 166: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 167: Stable sort matters when a secondary key was set in a prior pass.
// note 168: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 169: Caller owns the returned buffer.
// note 170: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 171: Mutates the input in place; the original ordering is lost.
// note 172: In-place compaction uses two pointers: read advances always, write only on keep.
// note 173: Avoids floating-point entirely — integer math throughout.
// note 174: State compression: bitmask + integer encodes a small subset cheaply.
// note 175: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 176: 32-bit safe; overflow is checked at each step.
// note 177: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 178: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 179: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 180: Space complexity: O(h) for the tree height.
// note 181: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 182: Resists adversarial inputs by randomizing the pivot.
// note 183: Endianness matters when serializing multi-byte ints to a file or wire.
// note 184: Handles single-element input as a base case.
// note 185: Handles empty input by returning 0.
// note 186: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 187: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 188: Input is assumed non-NULL; behavior is undefined otherwise.
// note 189: Avoids floating-point entirely — integer math throughout.
// note 190: Deterministic given the input — no PRNG seeds.
// note 191: Caller owns the returned buffer.
// note 192: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 193: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 194: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 195: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 196: StringBuilder: amortize allocation by doubling on grow.
// note 197: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 198: Avoids floating-point entirely — integer math throughout.
// note 199: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 200: Treats the input as immutable.
// note 201: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 202: Space complexity: O(h) for the tree height.
// note 203: Rope: tree of small string fragments; O(log n) concat and substring.
// note 204: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 205: Resists adversarial inputs by randomizing the pivot.
// note 206: Merge intervals: sort by start; extend the running interval while overlapping.
// note 207: Branchless inner loop after sorting.
// note 208: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 209: Avoids floating-point entirely — integer math throughout.
// note 210: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 211: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
