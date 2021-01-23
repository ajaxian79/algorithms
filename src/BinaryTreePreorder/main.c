#include <stdio.h>
#include <stdlib.h>

#include "preorder.h"

int main(void) {
    PreTreeNode c = {3, NULL, NULL};
    PreTreeNode b = {2, &c, NULL};
    PreTreeNode root = {1, NULL, &b};
    int n = 0;
    int* r = preorder_traversal(&root, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);
    return 0;
}
