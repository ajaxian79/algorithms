#include <stdio.h>

#include "trailing_zeros.h"

int main(void) {
    int v[] = {0, 3, 5, 10, 25, 100, 1000};
    for (int i = 0; i < 7; i++) {
        printf("%d! has %d trailing zeros\n", v[i], trailing_zeroes(v[i]));
    }
    return 0;
}
