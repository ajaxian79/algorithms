//
// Created by ajaxian on 06/02/24.
//

#ifndef ALGORITHMS_HOUSE_ROBBER_H
#define ALGORITHMS_HOUSE_ROBBER_H

// Maximum sum of a subset of `nums` with no two adjacent elements chosen.
// DP[i] = max(DP[i-1], DP[i-2] + nums[i]); rolled to two scalars.
int rob(const int* nums, int n);

#endif //ALGORITHMS_HOUSE_ROBBER_H
