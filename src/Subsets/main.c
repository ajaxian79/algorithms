#include <stdio.h>
#include <stdlib.h>

#include "subsets.h"

int main(void) {
    int a[] = {1, 2, 3};
    int n = 0;
    int* sizes = NULL;
    int** s = subsets(a, 3, &n, &sizes);
    for (int i = 0; i < n; i++) {
        printf("[");
        for (int j = 0; j < sizes[i]; j++) printf("%d%s", s[i][j], (j == sizes[i]-1) ? "" : ",");
        printf("]\n");
        free(s[i]);
    }
    free(s);
    free(sizes);
    return 0;
}
