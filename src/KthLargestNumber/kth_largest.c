//
// Created by ajaxian on 08/15/20.
//

#include "kth_largest.h"

#include <stdlib.h>

static void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }

// Partition nums[lo..hi] using nums[hi] as the pivot. Returns the final
// resting index of the pivot.  Lomuto partition scheme.
static int partition(int* nums, int lo, int hi) {
    int pivot = nums[hi];
    int store = lo;
    for (int i = lo; i < hi; i++) {
        if (nums[i] < pivot) {
            swap(&nums[i], &nums[store]);
            store++;
        }
    }
    swap(&nums[store], &nums[hi]);
    return store;
}

int kth_largest(int* nums, int nums_size, int k) {
    if (nums_size <= 0 || k <= 0 || k > nums_size) return 0;

    // The k-th largest is the (n - k)-th smallest (0-indexed).
    int target = nums_size - k;
    int lo = 0, hi = nums_size - 1;

    while (lo < hi) {
        // Randomized pivot to avoid worst-case on sorted input.
        int pivot_idx = lo + (rand() % (hi - lo + 1));
        swap(&nums[pivot_idx], &nums[hi]);

        int p = partition(nums, lo, hi);
        if (p == target) return nums[p];
        if (p < target) lo = p + 1;
        else hi = p - 1;
    }
    return nums[lo];
}
// note 1: No allocations on the hot path.
