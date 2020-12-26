#include <stdio.h>

#include "symmetric_tree.h"

int main(void) {
    STreeNode l2 = {3, NULL, NULL};
    STreeNode l1 = {2, NULL, NULL};
    STreeNode r1 = {2, NULL, NULL};
    STreeNode r2 = {3, NULL, NULL};
    l1.right = &l2;
    r1.left = &r2;
    STreeNode root = {1, &l1, &r1};
    printf("%d\n", is_symmetric(&root));
    return 0;
}
