#include <stdio.h>

#include "path_sum.h"

int main(void) {
    PsTreeNode l = {2, NULL, NULL};
    PsTreeNode r = {3, NULL, NULL};
    PsTreeNode root = {1, &l, &r};
    printf("%d %d\n", has_path_sum(&root, 3), has_path_sum(&root, 5));
    return 0;
}
