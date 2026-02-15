//
// Created by ajaxian on 02/10/24.
//

#include "lcp.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* longest_common_prefix(char** strs, int strs_size) {
    if (strs == NULL || strs_size <= 0 || strs[0] == NULL) {
        return empty_string();
    }

    size_t prefix_len = strlen(strs[0]);
    for (int i = 1; i < strs_size; i++) {
        if (strs[i] == NULL) {
            return empty_string();
        }
        size_t j = 0;
        while (j < prefix_len && strs[i][j] != '\0' && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefix_len = j;
        if (prefix_len == 0) {
            break;
        }
    }

    char* out = malloc(prefix_len + 1);
    if (!out) return NULL;
    memcpy(out, strs[0], prefix_len);
    out[prefix_len] = '\0';
    return out;
}
// note 1: Heap when you only need top-k; full sort is wasted work.
