//
// Created by ajaxian on 05/15/21.
//

#include "subsets.h"

#include <stdlib.h>

int** subsets(const int* nums, int n, int* return_count, int** subset_sizes) {
    int total = 1 << n;
    *return_count = total;

    int** out = malloc(sizeof(int*) * (size_t)total);
    int* sizes = malloc(sizeof(int) * (size_t)total);
    *subset_sizes = sizes;

    for (int mask = 0; mask < total; mask++) {
        int size = 0;
        for (int b = 0; b < n; b++) if (mask & (1 << b)) size++;
        sizes[mask] = size;
        out[mask] = malloc(sizeof(int) * (size_t)(size > 0 ? size : 1));
        int idx = 0;
        for (int b = 0; b < n; b++) {
            if (mask & (1 << b)) out[mask][idx++] = nums[b];
        }
    }
    return out;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
