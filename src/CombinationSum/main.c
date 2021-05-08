#include <stdio.h>
#include <stdlib.h>

#include "combination_sum.h"

int main(void) {
    int c[] = {2, 3, 6, 7};
    int n = 0;
    int* sizes = NULL;
    int** out = combination_sum(c, 4, 7, &n, &sizes);
    for (int i = 0; i < n; i++) {
        printf("[");
        for (int j = 0; j < sizes[i]; j++) printf("%d%s", out[i][j], (j == sizes[i]-1) ? "" : ",");
        printf("]\n");
        free(out[i]);
    }
    free(out);
    free(sizes);
    return 0;
}
