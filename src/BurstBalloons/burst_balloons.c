//
// Created by ajaxian on 05/07/26.
//

#include <stdlib.h>

#include "burst_balloons.h"

long max_coins(const int* nums, int n) {
    if (!nums || n <= 0) return 0;

    int m = n + 2;
    int* a = (int*)malloc(sizeof(int) * (size_t)m);
    if (!a) return 0;
    a[0] = 1;
    a[m - 1] = 1;
    for (int i = 0; i < n; i++) a[i + 1] = nums[i];

    long* dp = (long*)calloc((size_t)m * (size_t)m, sizeof(long));
    if (!dp) {
        free(a);
        return 0;
    }

    for (int len = 2; len < m; len++) {
        for (int i = 0; i + len < m; i++) {
            int j = i + len;
            long best = 0;
            for (int k = i + 1; k < j; k++) {
                long gain = (long)a[i] * (long)a[k] * (long)a[j];
                long cand = dp[i * m + k] + dp[k * m + j] + gain;
                if (cand > best) best = cand;
            }
            dp[i * m + j] = best;
        }
    }

    long ans = dp[0 * m + (m - 1)];
    free(dp);
    free(a);
    return ans;
}
