//
// Created by ajaxian on 05/18/24.
//

#include "zigzag.h"

#include <stdlib.h>
#include <string.h>

static char* dup_str(const char* s) {
    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    memcpy(out, s, n + 1);
    return out;
}

char* zigzag_convert(const char* s, int num_rows) {
    if (s == NULL) return NULL;
    if (num_rows <= 1) return dup_str(s);

    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_idx = 0;

    int cycle = 2 * num_rows - 2;
    for (int r = 0; r < num_rows; r++) {
        for (size_t i = 0; i + (size_t)r < n; i += (size_t)cycle) {
            out[out_idx++] = s[i + (size_t)r];
            // Diagonal between row r and row (cycle - r), only valid for
            // interior rows (not first/last).
            if (r > 0 && r < num_rows - 1) {
                size_t diag = i + (size_t)(cycle - r);
                if (diag < n) {
                    out[out_idx++] = s[diag];
                }
            }
        }
    }
    out[out_idx] = '\0';
    return out;
}
// note 1: ASCII rules are a strict subset of UTF-8; no special handling needed.
