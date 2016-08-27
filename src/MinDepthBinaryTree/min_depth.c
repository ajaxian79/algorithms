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
