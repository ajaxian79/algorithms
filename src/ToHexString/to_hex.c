//
// Created by ajaxian on 05/23/20.
//

#include "to_hex.h"

#include <stdlib.h>
#include <string.h>

char* to_hex_string(int n) {
    if (n == 0) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    unsigned int u = (unsigned int)n;
    char buf[9];
    int idx = 0;
    while (u > 0) {
        unsigned int nibble = u & 0xFu;
        buf[idx++] = (char)(nibble < 10 ? '0' + nibble : 'a' + (nibble - 10));
        u >>= 4;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
