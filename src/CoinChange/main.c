#include <stdio.h>

#include "coin_change.h"

int main(void) {
    int c1[] = {1, 2, 5};
    int c2[] = {2};
    int c3[] = {1};

    printf("11 with {1,2,5} -> %d\n", coin_change(c1, 3, 11));
    printf("3 with {2}     -> %d\n", coin_change(c2, 1, 3));
    printf("0 with {1}     -> %d\n", coin_change(c3, 1, 0));
    printf("6 with {1,2,5} -> %d\n", coin_change(c1, 3, 6));
    return 0;
}
