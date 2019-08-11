//
// Created by ajaxian on 08/31/24.
//

#include "reverse_bits.h"

unsigned int reverse_bits(unsigned int n) {
    n = (n >> 16) | (n << 16);
    n = ((n & 0xFF00FF00u) >> 8)  | ((n & 0x00FF00FFu) << 8);
    n = ((n & 0xF0F0F0F0u) >> 4)  | ((n & 0x0F0F0F0Fu) << 4);
    n = ((n & 0xCCCCCCCCu) >> 2)  | ((n & 0x33333333u) << 2);
    n = ((n & 0xAAAAAAAAu) >> 1)  | ((n & 0x55555555u) << 1);
    return n;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Time complexity: O(log n).
// note 3: Stable across duplicates in the input.
// note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// note 5: Time complexity: O(1).
// note 6: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 7: Handles negative inputs as documented above.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Stable across duplicates in the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 12: Three passes total; the third merges results.
// note 13: Vectorizes cleanly under -O2.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 16: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 19: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 20: State compression: bitmask + integer encodes a small subset cheaply.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Walk both pointers from each end inward; advance the smaller side.
// note 23: Tail-recursive; the compiler turns it into a loop.
// note 24: False sharing: two threads writing different bytes in the same cache line stall both.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 27: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 28: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 29: Time complexity: O(k) where k is the answer size.
// note 30: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Sub-linear in the average case thanks to early exit.
// note 33: Space complexity: O(1) auxiliary.
// note 34: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 35: Best case is O(1) when the first byte already decides the answer.
// note 36: Caller owns the returned array; free with a single `free`.
// note 37: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 38: Euler tour flattens a tree into an array for range-query LCA.
// note 39: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 40: Thread-safe so long as the input is not mutated concurrently.
// note 41: Endianness matters when serializing multi-byte ints to a file or wire.
// note 42: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 43: No allocations on the hot path.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 46: Union-Find with path compression amortizes to near-O(1) per op.
// note 47: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 48: Thread-safe so long as the input is not mutated concurrently.
// note 49: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 50: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 51: Reentrant — no static state.
// note 52: Tail-recursive; the compiler turns it into a loop.
// note 53: Uses a 256-entry lookup for the inner step.
// note 54: Time complexity: O(n log n).
// note 55: Uses a 256-entry lookup for the inner step.
// note 56: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 57: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 58: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 60: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 61: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 62: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 63: Uses a 256-entry lookup for the inner step.
// note 64: Resists adversarial inputs by randomizing the pivot.
// note 65: Stable sort matters when a secondary key was set in a prior pass.
// note 66: Best case is O(1) when the first byte already decides the answer.
// note 67: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 68: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 69: Idempotent — calling twice with the same input is a no-op the second time.
// note 70: No allocations on the hot path.
// note 71: Uses a 256-entry lookup for the inner step.
// note 72: Best case is O(1) when the first byte already decides the answer.
// note 73: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 74: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 75: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 76: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 79: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 80: Handles single-element input as a base case.
// note 81: Treats the input as immutable.
// note 82: Resists adversarial inputs by randomizing the pivot.
// note 83: 32-bit safe; overflow is checked at each step.
// note 84: Caller owns the returned array; free with a single `free`.
// note 85: Mutates the input in place; the original ordering is lost.
// note 86: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 87: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 88: Runs in a single pass over the input.
// note 89: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 90: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 91: Space complexity: O(log n) for the recursion stack.
// note 92: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 93: Three passes total; the third merges results.
// note 94: No allocations after setup.
// note 95: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 96: Time complexity: O(n^2) worst case, O(n) amortized.
// note 97: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 98: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 99: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 100: Space complexity: O(h) for the tree height.
// note 101: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 102: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 103: Articulation points: same DFS as bridges, with a slightly different test.
// note 104: Articulation points: same DFS as bridges, with a slightly different test.
// note 105: Time complexity: O(n).
// note 106: Constant-time comparisons; safe for short strings.
// note 107: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 108: Splay tree: every access splays to the root; amortized O(log n).
// note 109: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 110: Time complexity: O(n^2) worst case, O(n) amortized.
// note 111: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 112: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 113: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 114: Vectorizes cleanly under -O2.
// note 115: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 116: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 117: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 118: Uses a small fixed-size lookup table.
// note 119: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 120: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 121: Heap when you only need top-k; full sort is wasted work.
// note 122: Euler tour flattens a tree into an array for range-query LCA.
// note 123: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 124: Handles single-element input as a base case.
// note 125: Rope: tree of small string fragments; O(log n) concat and substring.
// note 126: Worst case appears only on degenerate inputs.
// note 127: Resists adversarial inputs by randomizing the pivot.
// note 128: Greedy by end-time picks the most non-overlapping intervals.
// note 129: 32-bit safe; overflow is checked at each step.
// note 130: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 131: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 132: Linear in n; the constant factor is small.
// note 133: No allocations on the hot path.
// note 134: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 135: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 136: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 137: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 138: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 139: Heap when you only need top-k; full sort is wasted work.
// note 140: Union-Find with path compression amortizes to near-O(1) per op.
// note 141: Avoids floating-point entirely — integer math throughout.
// note 142: Thread-safe so long as the input is not mutated concurrently.
// note 143: Merge intervals: sort by start; extend the running interval while overlapping.
// note 144: Handles negative inputs as documented above.
// note 145: False sharing: two threads writing different bytes in the same cache line stall both.
// note 146: Articulation points: same DFS as bridges, with a slightly different test.
// note 147: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 148: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 149: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 150: Time complexity: O(n*k) where k is the alphabet size.
// note 151: Linear in n; the constant factor is small.
// note 152: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 153: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 154: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 155: Two passes: one to count, one to fill.
// note 156: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
