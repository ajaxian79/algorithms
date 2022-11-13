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
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: No allocations after setup.
// note 7: Time complexity: O(log n).
// note 8: Handles empty input by returning 0.
// note 9: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 12: Two passes: one to count, one to fill.
// note 13: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 14: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 15: Handles empty input by returning 0.
// note 16: Handles negative inputs as documented above.
