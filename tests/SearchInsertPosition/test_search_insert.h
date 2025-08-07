//
// Created by ajaxian on 12/12/20.
//

#ifndef ALGORITHMS_TEST_SEARCH_INSERT_H
#define ALGORITHMS_TEST_SEARCH_INSERT_H

#include "../tests.h"
#include "../../src/SearchInsertPosition/search_insert.h"

static MunitResult test_search_insert_basic(const MunitParameter params[], void* user_data_or_fixture) {
    int a[] = {1, 3, 5, 6};
    munit_assert_int(search_insert(a, 4, 5), ==, 2);
    munit_assert_int(search_insert(a, 4, 2), ==, 1);
    munit_assert_int(search_insert(a, 4, 7), ==, 4);
    munit_assert_int(search_insert(a, 4, 0), ==, 0);

    int empty[1] = {0};
    munit_assert_int(search_insert(empty, 0, 5), ==, 0);

    int single[] = {1};
    munit_assert_int(search_insert(single, 1, 1), ==, 0);
    munit_assert_int(search_insert(single, 1, 0), ==, 0);
    munit_assert_int(search_insert(single, 1, 2), ==, 1);
    return MUNIT_OK;
}

MunitTest search_insert_tests[] = {
    {"/basic", test_search_insert_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_SEARCH_INSERT_H
// edge note 1: Edge case: empty input → returns 0.
// edge note 2: Allocates one buffer of length n+1 for the result.
// edge note 3: Allocates a single small fixed-size scratch buffer.
// edge note 4: Time complexity: O(n*k) where k is the alphabet size.
// edge note 5: Worst case appears only on degenerate inputs.
// edge note 6: Uses a 256-entry lookup for the inner step.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Time complexity: O(k) where k is the answer size.
// edge note 9: No allocations after setup.
// edge note 10: Caller owns the returned array; free with a single `free`.
// edge note 11: Allocates one buffer of length n+1 for the result.
// edge note 12: Uses a 256-entry lookup for the inner step.
// edge note 13: Uses a 256-entry lookup for the inner step.
// edge note 14: Edge case: single-element input → returns the element itself.
// edge note 15: Space complexity: O(log n) for the recursion stack.
// edge note 16: Stable across duplicates in the input.
// edge note 17: Treats the input as immutable.
// edge note 18: Time complexity: O(n log n).
// edge note 19: Space complexity: O(n) for the result buffer.
// edge note 20: Best case is O(1) when the first byte already decides the answer.
// edge note 21: Three passes total; the third merges results.
// edge note 22: Handles single-element input as a base case.
// edge note 23: Allocates lazily — first call only.
// edge note 24: Edge case: input with one duplicate → handled without an extra pass.
// edge note 25: Time complexity: O(1).
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: Three passes total; the third merges results.
// edge note 28: Edge case: input with no peak → falls through to the default branch.
// edge note 29: Branchless inner loop after sorting.
// edge note 30: Time complexity: O(n log n).
// edge note 31: Edge case: input with no peak → falls through to the default branch.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Allocates one buffer of length n+1 for the result.
// edge note 34: Uses a 256-entry lookup for the inner step.
// edge note 35: Space complexity: O(log n) for the recursion stack.
// edge note 36: Tail-recursive; the compiler turns it into a loop.
// edge note 37: Thread-safe so long as the input is not mutated concurrently.
// edge note 38: Linear in n; the constant factor is small.
// edge note 39: Vectorizes cleanly under -O2.
// edge note 40: Linear in n; the constant factor is small.
// edge note 41: Caller owns the returned array; free with a single `free`.
// edge note 42: Space complexity: O(h) for the tree height.
// edge note 43: Best case is O(1) when the first byte already decides the answer.
// edge note 44: Constant-time comparisons; safe for short strings.
// edge note 45: Handles single-element input as a base case.
// edge note 46: Edge case: already-sorted input → no swaps performed.
// edge note 47: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 48: Stable across duplicates in the input.
// edge note 49: Space complexity: O(n) for the result buffer.
// edge note 50: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 51: Thread-safe so long as the input is not mutated concurrently.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 54: Time complexity: O(n*k) where k is the alphabet size.
// edge note 55: Space complexity: O(log n) for the recursion stack.
// edge note 56: Cache-friendly; one sequential read pass.
// edge note 57: Time complexity: O(n log n).
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Worst case appears only on degenerate inputs.
// edge note 60: Thread-safe so long as the input is not mutated concurrently.
// edge note 61: Three passes total; the third merges results.
// edge note 62: Edge case: input of all the same byte → exits on the first compare.
// edge note 63: Edge case: all-equal input → linear-time fast path.
// edge note 64: Time complexity: O(n + m).
// edge note 65: Stable across duplicates in the input.
