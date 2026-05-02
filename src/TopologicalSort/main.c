#include <stdio.h>

#include "topo_sort.h"

int main(void) {
    // Module dependency graph: 0 -> 2, 0 -> 3, 1 -> 3, 2 -> 3, 3 -> 4
    int edges[] = {0, 2, 0, 3, 1, 3, 2, 3, 3, 4};
    int out[5];
    int k = topo_sort(5, edges, 5, out);
    printf("order (%d):", k);
    for (int i = 0; i < k; i++) printf(" %d", out[i]);
    printf("\n");

    // Cycle: 0 -> 1 -> 2 -> 0
    int cyc[] = {0, 1, 1, 2, 2, 0};
    int co[3];
    int ck = topo_sort(3, cyc, 3, co);
    printf("cycle returned %d (expected < 3)\n", ck);
    return 0;
}
