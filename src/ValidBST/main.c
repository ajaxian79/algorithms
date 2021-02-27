#include <stdio.h>

#include "valid_bst.h"

int main(void) {
    VTreeNode l = {1, NULL, NULL};
    VTreeNode r = {3, NULL, NULL};
    VTreeNode ok = {2, &l, &r};
    printf("%d\n", is_valid_bst(&ok));

    VTreeNode rr = {6, NULL, NULL};
    VTreeNode rl = {3, NULL, NULL};
    VTreeNode r2 = {4, &rl, &rr};
    VTreeNode l2 = {1, NULL, NULL};
    VTreeNode bad = {5, &l2, &r2};  // 3 lives in 5's right subtree but is < 5
    printf("%d\n", is_valid_bst(&bad));
    return 0;
}
