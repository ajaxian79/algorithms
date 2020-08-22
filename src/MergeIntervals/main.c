#include <stdio.h>
#include <stdlib.h>

#include "merge_intervals.h"

int main(void) {
    int a[] = {1, 3, 2, 6, 8, 10, 15, 18};
    int n = 0;
    int* r = merge_intervals(a, 4, &n);
    for (int i = 0; i < n; i++) printf("[%d,%d] ", r[2*i], r[2*i+1]);
    printf("\n");
    free(r);
    return 0;
}
