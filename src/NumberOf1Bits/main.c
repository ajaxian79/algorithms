#include <stdio.h>

#include "number_of_1_bits.h"

int main(void) {
    unsigned int v[] = {0u, 1u, 11u, 0xFFFFFFFFu, 0x80000000u};
    for (int i = 0; i < 5; i++) {
        printf("%u -> %d\n", v[i], number_of_1_bits(v[i]));
    }
    return 0;
}
