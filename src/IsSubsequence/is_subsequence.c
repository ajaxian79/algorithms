//
// Created by ajaxian on 08/31/24.
//

#include "is_subsequence.h"

#include <stddef.h>

int is_subsequence(const char* s, const char* t) {
    if (s == NULL || s[0] == '\0') return 1;
    if (t == NULL) return 0;
    int i = 0;
    for (int j = 0; t[j] != '\0'; j++) {
        if (s[i] == t[j]) {
            i++;
            if (s[i] == '\0') return 1;
        }
    }
    return s[i] == '\0';
}
