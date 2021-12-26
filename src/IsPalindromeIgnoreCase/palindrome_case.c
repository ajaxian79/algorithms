//
// Created by ajaxian on 06/12/21.
//

#include "palindrome_case.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_ignore_case(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Idempotent — calling twice with the same input is a no-op the second time.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Union-Find with path compression amortizes to near-O(1) per op.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: Three passes total; the third merges results.
// note 8: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 9: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 10: Time complexity: O(n log n).
// note 11: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
