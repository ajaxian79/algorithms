#include <stdio.h>

#include "hamming_distance.h"

int main(void) {
    printf("%d\n", hamming_distance(1, 4));
    printf("%d\n", hamming_distance(3, 1));
    printf("%d\n", hamming_distance(0, -1));
    return 0;
}
