#include <stdio.h>

#include "reverse_bits.h"

int main(void) {
    unsigned int v[] = {43261596u, 4294967293u, 0u, 0xFFFFFFFFu};
    for (int i = 0; i < 4; i++) {
        printf("%u -> %u\n", v[i], reverse_bits(v[i]));
    }
    return 0;
}
