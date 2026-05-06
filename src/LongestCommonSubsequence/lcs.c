//
// Created by ajaxian on 05/05/26.
//

#include <stdlib.h>
#include <string.h>

#include "lcs.h"

int lcs_length(const char* a, const char* b) {
    const char* sa = a ? a : "";
    const char* sb = b ? b : "";

    size_t m = strlen(sa);
    size_t n = strlen(sb);

    if (m < n) {
        const char* t = sa; sa = sb; sb = t;
        size_t tmp = m; m = n; n = tmp;
    }

    if (n == 0) return 0;

    int* prev = (int*)calloc(n + 1, sizeof(int));
    int* curr = (int*)calloc(n + 1, sizeof(int));
    if (!prev || !curr) {
        free(prev); free(curr);
        return -1;
    }

    for (size_t i = 1; i <= m; i++) {
        curr[0] = 0;
        for (size_t j = 1; j <= n; j++) {
            if (sa[i - 1] == sb[j - 1]) {
                curr[j] = prev[j - 1] + 1;
            } else {
                int up = prev[j];
                int lt = curr[j - 1];
                curr[j] = up > lt ? up : lt;
            }
        }
        int* tmp = prev; prev = curr; curr = tmp;
    }

    int ans = prev[n];
    free(prev); free(curr);
    return ans;
}
