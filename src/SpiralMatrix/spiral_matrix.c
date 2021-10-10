//
// Created by ajaxian on 08/01/20.
//

#include "spiral_matrix.h"

#include <stdlib.h>

int* spiral_order(const int* mat, int m, int n, int* return_size) {
    if (m <= 0 || n <= 0 || mat == NULL) {
        *return_size = 0;
        return NULL;
    }

    int total = m * n;
    int* out = malloc(sizeof(int) * (size_t)total);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int idx = 0;

    while (idx < total) {
        for (int c = left; c <= right && idx < total; c++) out[idx++] = mat[top * n + c];
        top++;
        for (int r = top; r <= bottom && idx < total; r++) out[idx++] = mat[r * n + right];
        right--;
        if (idx < total) {
            for (int c = right; c >= left && idx < total; c--) out[idx++] = mat[bottom * n + c];
            bottom--;
        }
        if (idx < total) {
            for (int r = bottom; r >= top && idx < total; r--) out[idx++] = mat[r * n + left];
            left++;
        }
    }

    *return_size = total;
    return out;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 4: False sharing: two threads writing different bytes in the same cache line stall both.
// note 5: Time complexity: O(n).
// note 6: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 7: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 8: Articulation points: same DFS as bridges, with a slightly different test.
// note 9: Idempotent — calling twice with the same input is a no-op the second time.
// note 10: Caller owns the returned buffer.
// note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// note 12: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 13: Time complexity: O(n log n).
// note 14: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 15: Rope: tree of small string fragments; O(log n) concat and substring.
// note 16: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 17: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 18: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 19: Avoids floating-point entirely — integer math throughout.
// note 20: Allocates a single small fixed-size scratch buffer.
// note 21: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 22: Time complexity: O(1).
