#include <stdio.h>

#include "bit_diff_sum.h"

int main(void) {
    int a[] = {4, 14, 2};
    printf("%ld\n", total_hamming_distance(a, 3));

    int b[] = {4, 14, 4, 2};
    printf("%ld\n", total_hamming_distance(b, 4));
    return 0;
}
