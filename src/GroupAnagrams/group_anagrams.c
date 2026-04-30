//
// Created by ajaxian on 04/12/25.
//

#include <stdlib.h>
#include <string.h>

#include "group_anagrams.h"

static int cmp_char(const void* a, const void* b) {
    char ca = *(const char*)a;
    char cb = *(const char*)b;
    return (int)(unsigned char)ca - (int)(unsigned char)cb;
}

static char* sorted_copy(const char* s) {
    if (!s) return NULL;
    size_t n = strlen(s);
    char* buf = (char*)malloc(n + 1);
    if (!buf) return NULL;
    memcpy(buf, s, n);
    buf[n] = '\0';
    if (n > 1) qsort(buf, n, 1, cmp_char);
    return buf;
}

int count_anagram_groups(const char** strs, int n) {
    if (!strs || n <= 0) return 0;

    char** keys = (char**)calloc((size_t)n, sizeof(char*));
    if (!keys) return 0;

    int groups = 0;
    for (int i = 0; i < n; i++) {
        char* key = sorted_copy(strs[i] ? strs[i] : "");
        if (!key) continue;

        int seen = 0;
        for (int j = 0; j < groups; j++) {
            if (strcmp(keys[j], key) == 0) {
                seen = 1;
                break;
            }
        }
        if (seen) {
            free(key);
        } else {
            keys[groups++] = key;
        }
    }

    for (int i = 0; i < groups; i++) free(keys[i]);
    free(keys);
    return groups;
}
