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
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Splay tree: every access splays to the root; amortized O(log n).
// note 7: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 8: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 9: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Handles empty input by returning 0.
// note 12: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 13: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 14: Edit distance is LCS with a twist: substitution is a third option at each cell.
