//
// Created by ajaxian on 09/22/24.
//

#include <stdlib.h>

#include "coin_change.h"

int coin_change(const int* coins, int m, int amount) {
    if (amount < 0) return -1;
    if (amount == 0) return 0;
    if (!coins || m <= 0) return -1;

    const int SENT = amount + 1;
    int* dp = (int*)malloc(sizeof(int) * (size_t)(amount + 1));
    if (!dp) return -1;

    dp[0] = 0;
    for (int a = 1; a <= amount; a++) dp[a] = SENT;

    for (int a = 1; a <= amount; a++) {
        for (int j = 0; j < m; j++) {
            int c = coins[j];
            if (c > 0 && c <= a && dp[a - c] + 1 < dp[a]) {
                dp[a] = dp[a - c] + 1;
            }
        }
    }

    int ans = dp[amount] >= SENT ? -1 : dp[amount];
    free(dp);
    return ans;
}
