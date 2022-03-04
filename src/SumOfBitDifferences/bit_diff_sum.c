//
// Created by ajaxian on 03/20/21.
//

#include "bit_diff_sum.h"

long total_hamming_distance(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;
    long total = 0;
    for (int b = 0; b < 32; b++) {
        long ones = 0;
        for (int i = 0; i < nums_size; i++) {
            ones += ((unsigned int)nums[i] >> b) & 1u;
        }
        total += ones * (nums_size - ones);
    }
    return total;
}
// note 1: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 2: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 3: Time complexity: O(log n).
// note 4: Allocates lazily — first call only.
// note 5: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 6: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 7: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 10: Stable across duplicates in the input.
// note 11: Space complexity: O(n) for the result buffer.
// note 12: Time complexity: O(log n).
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Handles single-element input as a base case.
