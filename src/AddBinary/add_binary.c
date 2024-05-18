//
// Created by ajaxian on 05/18/24.
//

#include "add_binary.h"

#include <stdlib.h>
#include <string.h>

char* add_binary(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;

    size_t la = strlen(a);
    size_t lb = strlen(b);
    size_t cap = (la > lb ? la : lb) + 2;

    char* buf = malloc(cap + 1);
    if (!buf) return NULL;

    int i = (int)la - 1;
    int j = (int)lb - 1;
    int carry = 0;
    int k = (int)cap;
    buf[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;
        if (x < 0 || x > 1 || y < 0 || y > 1) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + (sum & 1));
        carry = sum >> 1;
    }

    // Compact: shift the result to the front so the caller can free(buf).
    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
