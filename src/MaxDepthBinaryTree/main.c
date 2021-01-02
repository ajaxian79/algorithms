#include <stdio.h>

#include "max_depth.h"

int main(void) {
    MdTreeNode g = {7, NULL, NULL};
    MdTreeNode f = {15, NULL, NULL};
    MdTreeNode e = {20, &f, &g};
    MdTreeNode d = {9, NULL, NULL};
    MdTreeNode root = {3, &d, &e};
    printf("%d\n", max_depth(&root));
    return 0;
}
