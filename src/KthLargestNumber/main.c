#include <stdio.h>

#include "kth_largest.h"

int main(void) {
    int a[] = {3, 2, 1, 5, 6, 4};
    printf("%d\n", kth_largest(a, 6, 2));

    int b[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    printf("%d\n", kth_largest(b, 9, 4));
    return 0;
}
