//
// Created by ajaxian on 06/06/20.
//

#include "trailing_zeros.h"

int trailing_zeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Time complexity: O(n*k) where k is the alphabet size.
