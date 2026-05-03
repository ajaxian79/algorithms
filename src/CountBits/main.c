#include <stdio.h>
#include <stdlib.h>

#include "count_bits.h"

int main(void) {
    int n = 8;
    int* a = count_bits(n);
    if (!a) {
        printf("alloc failed\n");
        return 1;
    }
    for (int i = 0; i <= n; i++) {
        printf("%d -> %d\n", i, a[i]);
    }
    free(a);
    return 0;
}
