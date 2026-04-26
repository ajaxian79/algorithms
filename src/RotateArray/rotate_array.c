//
// Created by ajaxian on 10/17/20.
//

#include "rotate_array.h"

static void reverse(int* nums, int lo, int hi) {
    while (lo < hi) {
        int t = nums[lo];
        nums[lo] = nums[hi];
        nums[hi] = t;
        lo++;
        hi--;
    }
}

void rotate_array(int* nums, int nums_size, int k) {
    if (nums_size <= 1 || k == 0) return;
    int n = nums_size;
    k = ((k % n) + n) % n;  // handle negatives and large k
    if (k == 0) return;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}
// note 1: Tarjan SCC: low-link values find strongly connected components in one DFS.
