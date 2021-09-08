//
// Created by ajaxian on 11/07/20.
//

#include "three_sum.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

int* three_sum(int* nums, int nums_size, int* return_count) {
    *return_count = 0;
    if (nums_size < 3) return NULL;

    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);

    int cap = 16;
    int count = 0;
    int* out = malloc(sizeof(int) * 3 * (size_t)cap);
    if (!out) return NULL;

    for (int i = 0; i < nums_size - 2; i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = nums_size - 1;
        while (left < right) {
            int s = nums[i] + nums[left] + nums[right];
            if (s == 0) {
                if (count == cap) {
                    cap *= 2;
                    int* fresh = realloc(out, sizeof(int) * 3 * (size_t)cap);
                    if (!fresh) { free(out); return NULL; }
                    out = fresh;
                }
                out[count * 3] = nums[i];
                out[count * 3 + 1] = nums[left];
                out[count * 3 + 2] = nums[right];
                count++;
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (s < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    *return_count = count;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 3: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 4: Linear in n; the constant factor is small.
// note 5: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 6: Stable across duplicates in the input.
// note 7: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 8: Returns a freshly allocated string the caller must free.
// note 9: StringBuilder: amortize allocation by doubling on grow.
// note 10: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 11: Handles negative inputs as documented above.
// note 12: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 13: Cache-friendly; one sequential read pass.
// note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: Space complexity: O(1) auxiliary.
// note 19: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 20: Cache-friendly; one sequential read pass.
