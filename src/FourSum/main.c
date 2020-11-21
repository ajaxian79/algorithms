#include <stdio.h>
#include <stdlib.h>

#include "four_sum.h"

int main(void) {
    int a[] = {1, 0, -1, 0, -2, 2};
    int n = 0;
    int* r = four_sum(a, 6, 0, &n);
    for (int i = 0; i < n; i++) {
        printf("[%d %d %d %d]\n", r[4*i], r[4*i+1], r[4*i+2], r[4*i+3]);
    }
    free(r);
    return 0;
}
