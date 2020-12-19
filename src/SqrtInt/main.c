#include <stdio.h>

#include "sqrt_int.h"

int main(void) {
    int v[] = {0, 1, 4, 8, 16, 17, 1000, 2147483647};
    for (int i = 0; i < 8; i++) {
        printf("sqrt(%d) = %d\n", v[i], my_sqrt(v[i]));
    }
    return 0;
}
