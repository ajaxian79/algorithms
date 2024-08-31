//
// Created by ajaxian on 08/31/24.
//

#include "excel_column_title.h"

#include <stdlib.h>
#include <string.h>

char* excel_column_title(int n) {
    if (n < 1) return NULL;

    // Worst case: a 32-bit positive int needs 7 letters (FXSHRXW = 2147483647).
    char buf[16];
    int idx = 0;

    while (n > 0) {
        n--;  // shift to 0-indexed so 0..25 -> 'A'..'Z'
        buf[idx++] = (char)('A' + n % 26);
        n /= 26;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
