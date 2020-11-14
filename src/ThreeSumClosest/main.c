#include <stdio.h>

#include "three_sum_closest.h"

int main(void) {
    int a[] = {-1, 2, 1, -4};
    int b[] = {0, 0, 0};
    printf("%d\n", three_sum_closest(a, 4, 1));
    printf("%d\n", three_sum_closest(b, 3, 1));
    return 0;
}
