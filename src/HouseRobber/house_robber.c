//
// Created by ajaxian on 06/02/24.
//

#include "house_robber.h"

int rob(const int* nums, int n) {
    if (!nums || n <= 0) return 0;
    int prev2 = 0;
    int prev1 = 0;
    for (int i = 0; i < n; i++) {
        int take = prev2 + nums[i];
        int skip = prev1;
        int cur = take > skip ? take : skip;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}
