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
