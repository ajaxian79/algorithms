//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_BURST_BALLOONS_H
#define ALGORITHMS_BURST_BALLOONS_H

// Burst all `n` balloons to maximize the total coins collected.
//
// Bursting balloon `i` in the current sequence yields
// `left * nums[i] * right` coins, where `left` and `right` are the values
// of the balloons immediately adjacent at the moment of the burst (out-of-
// range neighbors count as 1). Once burst, balloon `i` disappears and its
// neighbors become adjacent.
//
// Approach: interval DP with reversed perspective. Pad the array with 1
// sentinels at both ends. For an open interval (i, j), enumerate the
// candidate `k` that is the LAST balloon burst in (i, j); when `k` bursts
// last, its remaining neighbors are exactly `a[i]` and `a[j]`, so the
// recurrence
//
//     dp[i][j] = max over k in (i, j) of
//                dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]
//
// decouples cleanly into sub-intervals. Fill by interval length and read
// the answer at dp[0][n + 1].
//
// Time complexity: O(n^3). Space complexity: O(n^2).
//
// Returns 0 on n <= 0 or allocation failure. Values in `nums` are assumed
// non-negative; the canonical LeetCode constraint is 0 <= nums[i] <= 100.
long max_coins(const int* nums, int n);

#endif //ALGORITHMS_BURST_BALLOONS_H
