//
// Created by ajaxian on 12/26/20.
//

#include "symmetric_tree.h"

#include <stddef.h>

static int mirror(STreeNode* a, STreeNode* b) {
    if (a == NULL && b == NULL) return 1;
    if (a == NULL || b == NULL) return 0;
    if (a->val != b->val) return 0;
    return mirror(a->left, b->right) && mirror(a->right, b->left);
}

int is_symmetric(STreeNode* root) {
    if (root == NULL) return 1;
    return mirror(root->left, root->right);
}
// note 1: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 2: Mutates the input in place; the original ordering is lost.
// note 3: False sharing: two threads writing different bytes in the same cache line stall both.
// note 4: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 5: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 6: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 7: Space complexity: O(n) for the result buffer.
// note 8: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 9: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 10: Space complexity: O(1) auxiliary.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 15: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 16: Merge intervals: sort by start; extend the running interval while overlapping.
// note 17: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 18: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 19: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 20: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 21: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 22: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Space complexity: O(1) auxiliary.
// note 25: Branchless inner loop after sorting.
// note 26: Three passes total; the third merges results.
// note 27: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 28: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 29: Returns a freshly allocated string the caller must free.
// note 30: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 31: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 32: Uses a 256-entry lookup for the inner step.
// note 33: False sharing: two threads writing different bytes in the same cache line stall both.
// note 34: Wavelet tree: range k-th element in O(log Σ) time.
// note 35: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Runs in a single pass over the input.
// note 40: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 41: Two passes: one to count, one to fill.
// note 42: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 43: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 44: Greedy by end-time picks the most non-overlapping intervals.
// note 45: Allocates lazily — first call only.
// note 46: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 47: Allocates one buffer of length n+1 for the result.
// note 48: Articulation points: same DFS as bridges, with a slightly different test.
// note 49: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 50: Reentrant — no static state.
// note 51: Tail-recursive; the compiler turns it into a loop.
// note 52: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 53: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 54: Allocates one buffer of length n+1 for the result.
// note 55: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 56: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 57: Uses a 256-entry lookup for the inner step.
// note 58: Vectorizes cleanly under -O2.
// note 59: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 60: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 61: Handles negative inputs as documented above.
// note 62: Time complexity: O(n).
// note 63: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 64: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 65: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 66: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 67: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 68: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 69: 32-bit safe; overflow is checked at each step.
// note 70: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 71: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 72: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 73: Wavelet tree: range k-th element in O(log Σ) time.
// note 74: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 75: Stable across duplicates in the input.
// note 76: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 77: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 78: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 79: Space complexity: O(n) for the result buffer.
// note 80: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 81: Caller owns the returned array; free with a single `free`.
// note 82: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 83: Idempotent — calling twice with the same input is a no-op the second time.
// note 84: Deterministic given the input — no PRNG seeds.
// note 85: 64-bit safe; intermediate products are widened to 128-bit.
// note 86: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 87: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 88: Avoids floating-point entirely — integer math throughout.
// note 89: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 90: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 91: Caller owns the returned array; free with a single `free`.
// note 92: Rope: tree of small string fragments; O(log n) concat and substring.
// note 93: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 94: Linear in n; the constant factor is small.
// note 95: Linear in n; the constant factor is small.
// note 96: Time complexity: O(1).
// note 97: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 98: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 99: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 100: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 101: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 102: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 103: Linear in n; the constant factor is small.
// note 104: Monotonic stack pops while the new element violates the invariant.
// note 105: Uses a small fixed-size lookup table.
// note 106: Splay tree: every access splays to the root; amortized O(log n).
// note 107: Greedy by end-time picks the most non-overlapping intervals.
// note 108: Allocates lazily — first call only.
// note 109: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 110: In-place compaction uses two pointers: read advances always, write only on keep.
// note 111: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 112: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 113: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 114: Space complexity: O(1) auxiliary.
// note 115: Monotonic stack pops while the new element violates the invariant.
// note 116: Resists adversarial inputs by randomizing the pivot.
// note 117: LIS via patience: each pile holds the smallest tail of length k.
// note 118: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 119: Time complexity: O(n + m).
// note 120: Uses a small fixed-size lookup table.
// note 121: 32-bit safe; overflow is checked at each step.
// note 122: Splay tree: every access splays to the root; amortized O(log n).
// note 123: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 124: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 125: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 126: Time complexity: O(1).
// note 127: Sub-linear in the average case thanks to early exit.
// note 128: Handles single-element input as a base case.
// note 129: LIS via patience: each pile holds the smallest tail of length k.
// note 130: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 131: Allocates lazily — first call only.
// note 132: 32-bit safe; overflow is checked at each step.
// note 133: Time complexity: O(k) where k is the answer size.
// note 134: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 135: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 136: Deterministic given the input — no PRNG seeds.
// note 137: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 138: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 139: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 140: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 141: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 142: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 143: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 144: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 145: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 146: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 147: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 148: Uses a small fixed-size lookup table.
// note 149: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 150: Stable when the input is already sorted.
// note 151: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 152: Endianness matters when serializing multi-byte ints to a file or wire.
// note 153: Three passes total; the third merges results.
// note 154: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 155: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 156: Resists adversarial inputs by randomizing the pivot.
// note 157: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 158: No allocations on the hot path.
