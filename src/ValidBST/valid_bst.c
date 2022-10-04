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
