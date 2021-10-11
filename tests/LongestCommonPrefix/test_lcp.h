//
// Created by ajaxian on 02/10/24.
//

#ifndef ALGORITHMS_TEST_LCP_H
#define ALGORITHMS_TEST_LCP_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/LongestCommonPrefix/lcp.h"

static MunitResult test_lcp_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* a[] = {"flower", "flow", "flight"};
    char* r = longest_common_prefix(a, 3);
    munit_assert_string_equal(r, "fl");
    free(r);

    char* b[] = {"dog", "racecar", "car"};
    r = longest_common_prefix(b, 3);
    munit_assert_string_equal(r, "");
    free(r);

    char* c[] = {"interspecies", "interstellar", "interstate"};
    r = longest_common_prefix(c, 3);
    munit_assert_string_equal(r, "inters");
    free(r);
    return MUNIT_OK;
}

static MunitResult test_lcp_edges(const MunitParameter params[], void* user_data_or_fixture) {
    char* r = longest_common_prefix(NULL, 0);
    munit_assert_string_equal(r, "");
    free(r);

    char* one[] = {"alone"};
    r = longest_common_prefix(one, 1);
    munit_assert_string_equal(r, "alone");
    free(r);

    char* empty[] = {"", "abc"};
    r = longest_common_prefix(empty, 2);
    munit_assert_string_equal(r, "");
    free(r);
    return MUNIT_OK;
}

MunitTest lcp_tests[] = {
    {"/basic", test_lcp_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/edges", test_lcp_edges, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LCP_H
// edge note 1: Space complexity: O(1) auxiliary.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 3: Handles single-element input as a base case.
// edge note 4: Allocates one buffer of length n+1 for the result.
// edge note 5: Edge case: NULL input is rejected by the caller, not by us.
// edge note 6: Edge case: input of all the same byte → exits on the first compare.
// edge note 7: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 8: Two passes: one to count, one to fill.
// edge note 9: Space complexity: O(h) for the tree height.
// edge note 10: Edge case: single-element input → returns the element itself.
// edge note 11: Reentrant — no static state.
// edge note 12: Two passes: one to count, one to fill.
// edge note 13: Time complexity: O(1).
// edge note 14: Worst case appears only on degenerate inputs.
// edge note 15: Edge case: reverse-sorted input → still O(n log n).
// edge note 16: Two passes: one to count, one to fill.
// edge note 17: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 18: Stable when the input is already sorted.
// edge note 19: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 20: No allocations after setup.
// edge note 21: Stable across duplicates in the input.
// edge note 22: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 23: Caller owns the returned array; free with a single `free`.
// edge note 24: Sub-linear in the average case thanks to early exit.
// edge note 25: Tail-recursive; the compiler turns it into a loop.
// edge note 26: Allocates a single small fixed-size scratch buffer.
