#include <stdio.h>
#include <stdlib.h>

#include "pascals_row.h"

int main(void) {
    for (int i = 0; i <= 6; i++) {
        int n = 0;
        int* r = pascals_triangle_row(i, &n);
        for (int j = 0; j < n; j++) printf("%d ", r[j]);
        printf("\n");
        free(r);
    }
    return 0;
}
