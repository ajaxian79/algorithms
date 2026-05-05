//
// Created by ajaxian on 05/04/26.
//

#include <stdlib.h>
#include <string.h>

#include "edit_distance.h"

static int min3(int a, int b, int c) {
    int m = a < b ? a : b;
    return m < c ? m : c;
}

int edit_distance(const char* a, const char* b) {
    const char* sa = a ? a : "";
    const char* sb = b ? b : "";

    size_t m = strlen(sa);
    size_t n = strlen(sb);

    // Force the inner loop to walk the shorter axis to keep the rolling
    // row small.
    if (m < n) {
        const char* t = sa; sa = sb; sb = t;
        size_t tmp = m; m = n; n = tmp;
    }

    if (n == 0) return (int)m;

    int* prev = (int*)malloc(sizeof(int) * (n + 1));
    int* curr = (int*)malloc(sizeof(int) * (n + 1));
    if (!prev || !curr) {
        free(prev); free(curr);
        return -1;
    }

    for (size_t j = 0; j <= n; j++) prev[j] = (int)j;

    for (size_t i = 1; i <= m; i++) {
        curr[0] = (int)i;
        for (size_t j = 1; j <= n; j++) {
            if (sa[i - 1] == sb[j - 1]) {
                curr[j] = prev[j - 1];
            } else {
                curr[j] = 1 + min3(prev[j - 1], prev[j], curr[j - 1]);
            }
        }
        int* tmp = prev; prev = curr; curr = tmp;
    }

    int ans = prev[n];
    free(prev); free(curr);
    return ans;
}
