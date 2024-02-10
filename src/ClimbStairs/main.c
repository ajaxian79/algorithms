#include <stdio.h>

#include "climb_stairs.h"

int main(void) {
    for (int n = 0; n <= 10; n++) {
        printf("ways(%d) = %lld\n", n, climb_stairs(n));
    }
    return 0;
}
