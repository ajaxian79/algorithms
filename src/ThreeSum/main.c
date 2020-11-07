#include <stdio.h>
#include <stdlib.h>

#include "three_sum.h"

int main(void) {
    int a[] = {-1, 0, 1, 2, -1, -4};
    int n = 0;
    int* r = three_sum(a, 6, &n);
    for (int i = 0; i < n; i++) {
        printf("[%d, %d, %d]\n", r[3*i], r[3*i+1], r[3*i+2]);
    }
    free(r);
    return 0;
}
