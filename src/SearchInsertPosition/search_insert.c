//
// Created by ajaxian on 12/12/20.
//

#include "search_insert.h"

int search_insert(const int* nums, int nums_size, int target) {
    int lo = 0;
    int hi = nums_size;  // half-open
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}
// note 1: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 2: Best case is O(1) when the first byte already decides the answer.
// note 3: In-place compaction uses two pointers: read advances always, write only on keep.
