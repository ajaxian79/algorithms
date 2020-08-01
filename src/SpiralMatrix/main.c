#include <stdio.h>
#include <stdlib.h>

#include "spiral_matrix.h"

int main(void) {
    int a[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 0;
    int* r = spiral_order(a, 3, 3, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);

    int b[3 * 4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    r = spiral_order(b, 3, 4, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);
    return 0;
}
