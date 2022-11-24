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
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: Idempotent — calling twice with the same input is a no-op the second time.
// note 5: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 6: Space complexity: O(h) for the tree height.
// note 7: Allocates lazily — first call only.
// note 8: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 9: Vectorizes cleanly under -O2.
// note 10: StringBuilder: amortize allocation by doubling on grow.
