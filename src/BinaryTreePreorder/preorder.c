//
// Created by ajaxian on 01/23/21.
//

#include "preorder.h"

#include <stdlib.h>
#include <stddef.h>

int* preorder_traversal(PreTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    PreTreeNode** stack = malloc(sizeof(PreTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;
    stack[top++] = root;

    while (top > 0) {
        PreTreeNode* node = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = node->val;
        // Push right first so left is processed first.
        if (node->right) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->right;
        }
        if (node->left) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->left;
        }
    }

    free(stack);
    *return_size = n;
    return out;
}
// note 1: Rope: tree of small string fragments; O(log n) concat and substring.
// note 2: No allocations on the hot path.
// note 3: Time complexity: O(log n).
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 6: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 7: Two passes: one to count, one to fill.
// note 8: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 9: Resists adversarial inputs by randomizing the pivot.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: In-place compaction uses two pointers: read advances always, write only on keep.
