//
// Created by ajaxian on 05/03/26.
//

#include <stdlib.h>

#include "count_bits.h"

int* count_bits(int n) {
    if (n < 0) return NULL;

    int* out = (int*)malloc(sizeof(int) * (size_t)(n + 1));
    if (!out) return NULL;

    out[0] = 0;
    for (int i = 1; i <= n; i++) {
        out[i] = out[i & (i - 1)] + 1;
    }
    return out;
}
