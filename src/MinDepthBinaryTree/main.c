#include <stdio.h>

#include "min_depth.h"

int main(void) {
    MnTreeNode g = {7, NULL, NULL};
    MnTreeNode f = {15, NULL, NULL};
    MnTreeNode e = {20, &f, &g};
    MnTreeNode d = {9, NULL, NULL};
    MnTreeNode root = {3, &d, &e};
    printf("%d\n", min_depth(&root));
    return 0;
}
