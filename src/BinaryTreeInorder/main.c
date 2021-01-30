#include <stdio.h>
#include <stdlib.h>

#include "inorder.h"

int main(void) {
    InTreeNode c = {3, NULL, NULL};
    InTreeNode b = {2, &c, NULL};
    InTreeNode root = {1, NULL, &b};
    int n = 0;
    int* r = inorder_traversal(&root, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);
    return 0;
}
