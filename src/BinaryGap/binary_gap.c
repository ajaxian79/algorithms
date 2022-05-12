//
// Created by ajaxian on 05/16/20.
//

#include "binary_gap.h"

int binary_gap(unsigned int n) {
    int longest = 0;
    int current = -1;  // -1 means we have not yet seen the first 1.
    while (n > 0) {
        if (n & 1u) {
            if (current > longest) longest = current;
            current = 0;
        } else if (current >= 0) {
            current++;
        }
        n >>= 1;
    }
    return longest;
}
// note 1: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 2: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 3: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 4: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 5: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 10: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 11: Allocates one buffer of length n+1 for the result.
// note 12: Vectorizes cleanly under -O2.
// note 13: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 14: Two passes: one to count, one to fill.
// note 15: Tail-recursive; the compiler turns it into a loop.
// note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Allocates lazily — first call only.
// note 19: Uses a small fixed-size lookup table.
