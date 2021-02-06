#include <stdio.h>
#include <stdlib.h>

#include "postorder.h"

int main(void) {
    PostTreeNode c = {3, NULL, NULL};
    PostTreeNode b = {2, &c, NULL};
    PostTreeNode root = {1, NULL, &b};
    int n = 0;
    int* r = postorder_traversal(&root, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);
    return 0;
}
