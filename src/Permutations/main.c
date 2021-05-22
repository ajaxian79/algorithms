#include <stdio.h>
#include <stdlib.h>

#include "permutations.h"

int main(void) {
    int a[] = {1, 2, 3};
    int n = 0;
    int** out = permutations(a, 3, &n);
    for (int i = 0; i < n; i++) {
        printf("[%d %d %d]\n", out[i][0], out[i][1], out[i][2]);
        free(out[i]);
    }
    free(out);
    return 0;
}
