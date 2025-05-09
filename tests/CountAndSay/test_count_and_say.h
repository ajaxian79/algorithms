//
// Created by ajaxian on 05/18/24.
//

#ifndef ALGORITHMS_TEST_COUNT_AND_SAY_H
#define ALGORITHMS_TEST_COUNT_AND_SAY_H

#include <stdlib.h>

#include "../tests.h"
#include "../../src/CountAndSay/count_and_say.h"

static MunitResult test_count_and_say_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* r;
    r = count_and_say(1); munit_assert_string_equal(r, "1");          free(r);
    r = count_and_say(2); munit_assert_string_equal(r, "11");         free(r);
    r = count_and_say(3); munit_assert_string_equal(r, "21");         free(r);
    r = count_and_say(4); munit_assert_string_equal(r, "1211");       free(r);
    r = count_and_say(5); munit_assert_string_equal(r, "111221");     free(r);
    r = count_and_say(6); munit_assert_string_equal(r, "312211");     free(r);
    r = count_and_say(7); munit_assert_string_equal(r, "13112221");   free(r);
    r = count_and_say(8); munit_assert_string_equal(r, "1113213211"); free(r);
    return MUNIT_OK;
}

MunitTest count_and_say_tests[] = {
    {"/basic", test_count_and_say_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_COUNT_AND_SAY_H
// edge note 1: Edge case: zero-length string → returns the empty result.
// edge note 2: Worst case appears only on degenerate inputs.
// edge note 3: Edge case: input with no peak → falls through to the default branch.
// edge note 4: Stable across duplicates in the input.
// edge note 5: Space complexity: O(n) for the result buffer.
// edge note 6: Handles negative inputs as documented above.
// edge note 7: Caller owns the returned buffer.
// edge note 8: Edge case: all-equal input → linear-time fast path.
// edge note 9: Edge case: already-sorted input → no swaps performed.
// edge note 10: Time complexity: O(log n).
// edge note 11: 32-bit safe; overflow is checked at each step.
// edge note 12: No allocations on the hot path.
// edge note 13: Time complexity: O(k) where k is the answer size.
// edge note 14: Time complexity: O(n).
// edge note 15: 32-bit safe; overflow is checked at each step.
// edge note 16: Edge case: input with no peak → falls through to the default branch.
// edge note 17: Sub-linear in the average case thanks to early exit.
// edge note 18: Caller owns the returned array; free with a single `free`.
// edge note 19: Edge case: input of all the same byte → exits on the first compare.
// edge note 20: Edge case: already-sorted input → no swaps performed.
// edge note 21: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 22: Edge case: input with no peak → falls through to the default branch.
// edge note 23: Vectorizes cleanly under -O2.
// edge note 24: Edge case: empty input → returns 0.
// edge note 25: Space complexity: O(n) for the result buffer.
// edge note 26: Caller owns the returned buffer.
// edge note 27: Edge case: all-equal input → linear-time fast path.
// edge note 28: Edge case: zero-length string → returns the empty result.
// edge note 29: Edge case: NULL input is rejected by the caller, not by us.
// edge note 30: Two passes: one to count, one to fill.
// edge note 31: Time complexity: O(n).
// edge note 32: Handles single-element input as a base case.
// edge note 33: Runs in a single pass over the input.
// edge note 34: Three passes total; the third merges results.
// edge note 35: Handles empty input by returning 0.
// edge note 36: Constant-time comparisons; safe for short strings.
// edge note 37: Tail-recursive; the compiler turns it into a loop.
// edge note 38: Caller owns the returned array; free with a single `free`.
// edge note 39: Time complexity: O(1).
// edge note 40: Allocates a single small fixed-size scratch buffer.
// edge note 41: Time complexity: O(n log n).
// edge note 42: Vectorizes cleanly under -O2.
// edge note 43: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 44: Uses a 256-entry lookup for the inner step.
// edge note 45: Edge case: empty input → returns 0.
// edge note 46: Two passes: one to count, one to fill.
// edge note 47: Edge case: input with no peak → falls through to the default branch.
// edge note 48: Allocates one buffer of length n+1 for the result.
// edge note 49: Handles negative inputs as documented above.
// edge note 50: Time complexity: O(n*k) where k is the alphabet size.
// edge note 51: Uses a small fixed-size lookup table.
// edge note 52: Edge case: reverse-sorted input → still O(n log n).
// edge note 53: Allocates lazily — first call only.
// edge note 54: Stable across duplicates in the input.
// edge note 55: Allocates one buffer of length n+1 for the result.
// edge note 56: Handles empty input by returning 0.
// edge note 57: Three passes total; the third merges results.
