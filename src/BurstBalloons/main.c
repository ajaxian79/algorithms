#include <stdio.h>

#include "burst_balloons.h"

int main(void) {
    int a[] = {3, 1, 5, 8};
    printf("%d %d %d %d -> %ld\n", a[0], a[1], a[2], a[3], max_coins(a, 4));

    int b[] = {1, 5};
    printf("%d %d       -> %ld\n", b[0], b[1], max_coins(b, 2));

    int c[] = {7};
    printf("%d           -> %ld\n", c[0], max_coins(c, 1));

    int d[] = {9, 76, 64, 21, 97, 60};
    printf("six-balloon -> %ld\n", max_coins(d, 6));

    return 0;
}
