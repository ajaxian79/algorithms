#include <stdio.h>

#include "number_complement.h"

int main(void) {
    unsigned int v[] = {5u, 1u, 0u, 7u, 1023u};
    for (int i = 0; i < 5; i++) {
        printf("%u -> %u\n", v[i], find_complement(v[i]));
    }
    return 0;
}
