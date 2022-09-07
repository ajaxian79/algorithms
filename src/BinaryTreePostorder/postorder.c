//
// Created by ajaxian on 02/06/21.
//

#include "postorder.h"

#include <stdlib.h>
#include <stddef.h>

int* postorder_traversal(PostTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    // Trick: do a "rev-preorder" (root, right, left) into a buffer, then
    // reverse the buffer to get postorder (left, right, root).
    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    PostTreeNode** stack = malloc(sizeof(PostTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;
    stack[top++] = root;

    while (top > 0) {
        PostTreeNode* node = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = node->val;
        if (node->left) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PostTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->left;
        }
        if (node->right) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PostTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->right;
        }
    }
    free(stack);

    // Reverse out in place.
    for (int lo = 0, hi = n - 1; lo < hi; lo++, hi--) {
        int t = out[lo]; out[lo] = out[hi]; out[hi] = t;
    }

    *return_size = n;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 3: Cache-friendly; one sequential read pass.
// note 4: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Deterministic given the input — no PRNG seeds.
// note 7: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 8: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 9: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 10: Handles empty input by returning 0.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 13: Union-Find with path compression amortizes to near-O(1) per op.
// note 14: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 15: Idempotent — calling twice with the same input is a no-op the second time.
