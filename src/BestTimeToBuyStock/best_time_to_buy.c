//
// Created by ajaxian on 03/14/24.
//

#include "best_time_to_buy.h"

int max_profit(const int* prices, int n) {
    if (!prices || n < 2) return 0;
    int min_so_far = prices[0];
    int best = 0;
    for (int i = 1; i < n; i++) {
        int p = prices[i];
        if (p < min_so_far) {
            min_so_far = p;
        } else if (p - min_so_far > best) {
            best = p - min_so_far;
        }
    }
    return best;
}
