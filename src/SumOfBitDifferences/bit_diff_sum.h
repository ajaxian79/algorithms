//
// Created by ajaxian on 03/20/21.
//

#ifndef ALGORITHMS_BIT_DIFF_SUM_H
#define ALGORITHMS_BIT_DIFF_SUM_H

// Sum of hamming distances between every pair (i, j) in nums.
// O(n * 32) by counting set bits per column.
long total_hamming_distance(const int* nums, int nums_size);

#endif //ALGORITHMS_BIT_DIFF_SUM_H
