#include <stdio.h>

#include "binary_gap.h"

int main(void) {
    unsigned int v[] = {9u, 529u, 20u, 15u, 32u, 1041u, 0u};
    for (int i = 0; i < 7; i++) {
        printf("%u -> %d\n", v[i], binary_gap(v[i]));
    }
    return 0;
}
