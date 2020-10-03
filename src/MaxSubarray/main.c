#include <stdio.h>

#include "max_subarray.h"

int main(void) {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int b[] = {1};
    int c[] = {5, 4, -1, 7, 8};
    int d[] = {-1, -2, -3};
    printf("%d\n", max_subarray(a, 9));
    printf("%d\n", max_subarray(b, 1));
    printf("%d\n", max_subarray(c, 5));
    printf("%d\n", max_subarray(d, 3));
    return 0;
}
