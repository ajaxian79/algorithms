#include <stdio.h>

#include "invert_tree.h"

static void inorder(InvTreeNode* n) {
    if (!n) return;
    inorder(n->left);
    printf("%d ", n->val);
    inorder(n->right);
}

int main(void) {
    InvTreeNode g = {9, NULL, NULL};
    InvTreeNode f = {7, NULL, NULL};
    InvTreeNode e = {6, NULL, NULL};
    InvTreeNode d = {1, NULL, NULL};
    InvTreeNode c = {7, &f, &g};
    InvTreeNode b = {2, &d, &e};
    InvTreeNode root = {4, &b, &c};
    inorder(&root); printf("\n");
    invert_tree(&root);
    inorder(&root); printf("\n");
    return 0;
}
