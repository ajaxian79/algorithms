#include <stdio.h>

#include "diagonal_sum.h"

int main(void) {
    int a[3 * 3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%ld\n", diagonal_sum(a, 3));

    int b[4 * 4] = {1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1,  1, 1, 1, 1};
    printf("%ld\n", diagonal_sum(b, 4));
    return 0;
}
