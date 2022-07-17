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
// note 2: Vectorizes cleanly under -O2.
// note 3: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 4: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 5: Time complexity: O(n*k) where k is the alphabet size.
// note 6: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 7: Time complexity: O(n log n).
// note 8: Input is assumed non-NULL; behavior is undefined otherwise.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Euler tour flattens a tree into an array for range-query LCA.
// note 11: Linear in n; the constant factor is small.
// note 12: LIS via patience: each pile holds the smallest tail of length k.
// note 13: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 14: Allocates lazily — first call only.
