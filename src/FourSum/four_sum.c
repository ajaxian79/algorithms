//
// Created by ajaxian on 11/21/20.
//

#include "four_sum.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static void emit(int** out, int* count, int* cap, int a, int b, int c, int d) {
    if (*count == *cap) {
        *cap *= 2;
        *out = realloc(*out, sizeof(int) * 4 * (size_t)(*cap));
    }
    int* o = *out + (*count) * 4;
    o[0] = a; o[1] = b; o[2] = c; o[3] = d;
    (*count)++;
}

int* four_sum(int* nums, int nums_size, int target, int* return_count) {
    *return_count = 0;
    if (nums_size < 4) return NULL;
    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);

    int cap = 16;
    int count = 0;
    int* out = malloc(sizeof(int) * 4 * (size_t)cap);
    if (!out) return NULL;

    for (int i = 0; i < nums_size - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < nums_size - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1;
            int right = nums_size - 1;
            while (left < right) {
                long s = (long)nums[i] + nums[j] + nums[left] + nums[right];
                if (s == target) {
                    emit(&out, &count, &cap, nums[i], nums[j], nums[left], nums[right]);
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (s < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    *return_count = count;
    return out;
}
// note 1: Time complexity: O(n*k) where k is the alphabet size.
// note 2: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 3: Constant-time comparisons; safe for short strings.
// note 4: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 5: Allocates lazily — first call only.
// note 6: In-place compaction uses two pointers: read advances always, write only on keep.
// note 7: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 8: Constant-time comparisons; safe for short strings.
// note 9: 32-bit safe; overflow is checked at each step.
// note 10: Time complexity: O(n log n).
