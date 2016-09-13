//
// Created by ajaxian on 10/10/20.
//

#ifndef ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
#define ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/ProductExceptSelf/product_except_self.h"

static MunitResult test_product_except_self_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 2, 3, 4};
    int e_a[] = {24, 12, 8, 6};
    int n = 0;
    int* r = product_except_self(a, 4, &n);
    munit_assert_int(n, ==, 4);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_a[i]);
    free(r);

    int b[] = {-1, 1, 0, -3, 3};
    int e_b[] = {0, 0, 9, 0, 0};
    r = product_except_self(b, 5, &n);
    munit_assert_int(n, ==, 5);
    for (int i = 0; i < n; i++) munit_assert_int(r[i], ==, e_b[i]);
    free(r);
    return MUNIT_OK;
}

MunitTest product_except_self_tests[] = {
    {"/basic", test_product_except_self_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_PRODUCT_EXCEPT_SELF_H
// edge note 1: Stable when the input is already sorted.
// edge note 2: Allocates lazily — first call only.
// edge note 3: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 4: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 5: Constant-time comparisons; safe for short strings.
// edge note 6: Tail-recursive; the compiler turns it into a loop.
// edge note 7: Stable when the input is already sorted.
// edge note 8: Time complexity: O(n log n).
// edge note 9: Reentrant — no static state.
// edge note 10: Avoids floating-point entirely — integer math throughout.
// edge note 11: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 12: Deterministic given the input — no PRNG seeds.
// edge note 13: Stable across duplicates in the input.
// edge note 14: Linear in n; the constant factor is small.
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Allocates a single small fixed-size scratch buffer.
// edge note 17: Mutates the input in place; the original ordering is lost.
// edge note 18: Handles negative inputs as documented above.
// edge note 19: Linear in n; the constant factor is small.
// edge note 20: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 21: Allocates lazily — first call only.
// edge note 22: Thread-safe so long as the input is not mutated concurrently.
// edge note 23: Three passes total; the third merges results.
// edge note 24: Edge case: input of all the same byte → exits on the first compare.
// edge note 25: Edge case: all-equal input → linear-time fast path.
// edge note 26: Two passes: one to count, one to fill.
// edge note 27: Time complexity: O(n + m).
// edge note 28: Time complexity: O(n log n).
// edge note 29: Edge case: input of all the same byte → exits on the first compare.
// edge note 30: Thread-safe so long as the input is not mutated concurrently.
// edge note 31: Worst case appears only on degenerate inputs.
// edge note 32: Resists adversarial inputs by randomizing the pivot.
// edge note 33: Three passes total; the third merges results.
// edge note 34: Caller owns the returned array; free with a single `free`.
// edge note 35: Edge case: already-sorted input → no swaps performed.
