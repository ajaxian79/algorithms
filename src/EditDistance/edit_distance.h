//
// Created by ajaxian on 05/04/26.
//

#ifndef ALGORITHMS_EDIT_DISTANCE_H
#define ALGORITHMS_EDIT_DISTANCE_H

// Levenshtein distance: minimum number of single-character edits
// (insertion, deletion, substitution) to transform `a` into `b`.
//
// Classic 2D DP. `dp[i][j]` is the distance between the first `i` chars
// of `a` and the first `j` chars of `b`. Transitions:
//   dp[i][j] = dp[i-1][j-1]                           if a[i-1] == b[j-1]
//   dp[i][j] = 1 + min(dp[i-1][j-1],  // substitute
//                      dp[i-1][j],    // delete from a
//                      dp[i][j-1])    // insert into a
//
// This implementation rolls the table to two rows of length n+1, so the
// space is O(min(m, n)) without losing the `dp[i-1][j-1]` corner via a
// saved scalar.
//
// Time complexity: O(m * n). Space complexity: O(min(m, n)).
//
// NULL input is treated as the empty string.
int edit_distance(const char* a, const char* b);

#endif //ALGORITHMS_EDIT_DISTANCE_H
