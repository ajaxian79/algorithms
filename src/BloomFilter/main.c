#include <stdio.h>

#include "bloom_filter.h"

int main(void) {
    BloomFilter bf;
    bloom_init(&bf, 1024, 7);

    const char* members[] = {"alpha", "beta", "gamma", "delta", "epsilon", "zeta"};
    for (size_t i = 0; i < sizeof(members) / sizeof(members[0]); i++) {
        bloom_add_str(&bf, members[i]);
    }

    const char* probes[] = {"alpha", "beta", "phi", "psi", "zeta"};
    for (size_t i = 0; i < sizeof(probes) / sizeof(probes[0]); i++) {
        printf("%-8s -> %d\n", probes[i], bloom_maybe_contains_str(&bf, probes[i]));
    }

    bloom_clear(&bf);
    return 0;
}
