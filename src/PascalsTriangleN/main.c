#include <stdio.h>
#include <stdlib.h>

#include "pascals_n.h"

int main(void) {
    int rows = 0;
    int* sizes = NULL;
    int** t = pascals_triangle_n(7, &rows, &sizes);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < sizes[i]; j++) printf("%d ", t[i][j]);
        printf("\n");
        free(t[i]);
    }
    free(t);
    free(sizes);
    return 0;
}
