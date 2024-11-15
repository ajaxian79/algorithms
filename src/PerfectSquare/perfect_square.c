//
// Created by ajaxian on 06/13/20.
//

#include "perfect_square.h"

int is_perfect_square(int n) {
    if (n < 1) return 0;
    long lo = 1;
    long hi = n;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sq = mid * mid;
        if (sq == n) return 1;
        if (sq < n) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}
// note 1: Deterministic given the input — no PRNG seeds.
// note 2: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
