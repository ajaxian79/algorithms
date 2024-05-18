#include <stdio.h>

#include "count_primes.h"

int main(void) {
    int n_values[] = {0, 1, 2, 10, 100, 1000, 10000};
    int n = sizeof(n_values) / sizeof(n_values[0]);
    for (int i = 0; i < n; i++) {
        printf("primes < %d: %d\n", n_values[i], count_primes(n_values[i]));
    }
    return 0;
}
