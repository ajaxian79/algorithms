//
// Created by ajaxian on 11/14/20.
//

#include "three_sum_closest.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static int abs_diff(int a, int b) { return a > b ? a - b : b - a; }

int three_sum_closest(int* nums, int nums_size, int target) {
    if (nums_size < 3) return 0;
    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);
    int best = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums_size - 2; i++) {
        int left = i + 1;
        int right = nums_size - 1;
        while (left < right) {
            int s = nums[i] + nums[left] + nums[right];
            if (abs_diff(s, target) < abs_diff(best, target)) best = s;
            if (s < target) left++;
            else if (s > target) right--;
            else return s;
        }
    }
    return best;
}
// note 1: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 2: Walk both pointers from each end inward; advance the smaller side.
// note 3: Stable when the input is already sorted.
// note 4: Linear in n; the constant factor is small.
