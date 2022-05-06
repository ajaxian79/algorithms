//
// Created by ajaxian on 02/10/24.
//

#include "fizz_buzz.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* dup_str(const char* s) {
    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    memcpy(out, s, n + 1);
    return out;
}

char** fizz_buzz(int n, int* return_size) {
    if (n <= 0) {
        *return_size = 0;
        return NULL;
    }

    char** out = malloc(sizeof(char*) * (size_t)n);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            out[i - 1] = dup_str("FizzBuzz");
        } else if (i % 3 == 0) {
            out[i - 1] = dup_str("Fizz");
        } else if (i % 5 == 0) {
            out[i - 1] = dup_str("Buzz");
        } else {
            char buf[16];
            snprintf(buf, sizeof(buf), "%d", i);
            out[i - 1] = dup_str(buf);
        }
    }
    *return_size = n;
    return out;
}
// note 1: Thread-safe so long as the input is not mutated concurrently.
// note 2: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 3: Treats the input as immutable.
// note 4: Returns a freshly allocated string the caller must free.
// note 5: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 6: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 7: Sub-linear in the average case thanks to early exit.
// note 8: Returns a freshly allocated string the caller must free.
// note 9: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 10: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 11: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 12: Wavelet tree: range k-th element in O(log Σ) time.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 15: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 16: Space complexity: O(h) for the tree height.
// note 17: Space complexity: O(n) for the result buffer.
// note 18: Avoids floating-point entirely — integer math throughout.
// note 19: Treats the input as immutable.
// note 20: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 21: Time complexity: O(n).
// note 22: LIS via patience: each pile holds the smallest tail of length k.
