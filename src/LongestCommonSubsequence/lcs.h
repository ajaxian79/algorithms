//
// Created by ajaxian on 05/05/26.
//

#ifndef ALGORITHMS_LCS_H
#define ALGORITHMS_LCS_H

// Length of the longest common subsequence of `a` and `b`. A subsequence
// keeps relative order but does not have to be contiguous, so `LCS("abc",
// "ac") == 2`.
//
// Classic 2D DP:
//   dp[i][j] = dp[i-1][j-1] + 1                     if a[i-1] == b[j-1]
//   dp[i][j] = max(dp[i-1][j], dp[i][j-1])          otherwise
//
// Rolled to two rows of length `min(m, n) + 1` for O(min(m, n)) space.
// Time: O(m * n).
//
// NULL input is treated as the empty string.
int lcs_length(const char* a, const char* b);

#endif //ALGORITHMS_LCS_H
