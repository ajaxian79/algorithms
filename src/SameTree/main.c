#include <stdio.h>

#include "same_tree.h"

int main(void) {
    StTreeNode l = {2, NULL, NULL};
    StTreeNode r = {3, NULL, NULL};
    StTreeNode a = {1, &l, &r};
    StTreeNode l2 = {2, NULL, NULL};
    StTreeNode r2 = {3, NULL, NULL};
    StTreeNode b = {1, &l2, &r2};
    printf("%d\n", is_same_tree(&a, &b));
    StTreeNode c = {1, NULL, &r2};
    printf("%d\n", is_same_tree(&a, &c));
    return 0;
}
