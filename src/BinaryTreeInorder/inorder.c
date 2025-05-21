//
// Created by ajaxian on 01/30/21.
//

#include "inorder.h"

#include <stdlib.h>
#include <stddef.h>

int* inorder_traversal(InTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    InTreeNode** stack = malloc(sizeof(InTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;

    InTreeNode* curr = root;
    while (curr != NULL || top > 0) {
        while (curr != NULL) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(InTreeNode*) * (size_t)stack_cap); }
            stack[top++] = curr;
            curr = curr->left;
        }
        curr = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = curr->val;
        curr = curr->right;
    }

    free(stack);
    *return_size = n;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
