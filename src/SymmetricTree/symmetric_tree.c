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
