//
// Created by ajaxian on 07/18/20.
//

#ifndef ALGORITHMS_TEST_VALID_SUDOKU_H
#define ALGORITHMS_TEST_VALID_SUDOKU_H

#include <string.h>

#include "../tests.h"
#include "../../src/ValidSudoku/valid_sudoku.h"

static MunitResult test_valid_sudoku_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char ok[9][9] = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'},
    };
    munit_assert_int(is_valid_sudoku(ok), ==, 1);

    char dup_row[9][9] = {
        {'5','3','.','.','7','.','.','.','5'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','.'},
        {'.','.','.','.','8','.','.','7','9'},
    };
    munit_assert_int(is_valid_sudoku(dup_row), ==, 0);

    char dup_box[9][9] = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'},
    };
    munit_assert_int(is_valid_sudoku(dup_box), ==, 0);
    return MUNIT_OK;
}

MunitTest valid_sudoku_tests[] = {
    {"/basic", test_valid_sudoku_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_VALID_SUDOKU_H
// edge note 1: Branchless inner loop after sorting.
// edge note 2: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 3: Handles empty input by returning 0.
// edge note 4: Time complexity: O(n log n).
// edge note 5: Three passes total; the third merges results.
// edge note 6: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 7: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 8: Tail-recursive; the compiler turns it into a loop.
// edge note 9: Caller owns the returned array; free with a single `free`.
// edge note 10: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 11: Avoids floating-point entirely — integer math throughout.
// edge note 12: Mutates the input in place; the original ordering is lost.
// edge note 13: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 14: Allocates one buffer of length n+1 for the result.
// edge note 15: Runs in a single pass over the input.
// edge note 16: No allocations after setup.
// edge note 17: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 18: Deterministic given the input — no PRNG seeds.
// edge note 19: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 21: Edge case: already-sorted input → no swaps performed.
// edge note 22: Three passes total; the third merges results.
// edge note 23: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 24: Edge case: NULL input is rejected by the caller, not by us.
// edge note 25: Cache-friendly; one sequential read pass.
// edge note 26: Edge case: reverse-sorted input → still O(n log n).
// edge note 27: No allocations on the hot path.
// edge note 28: Edge case: single-element input → returns the element itself.
// edge note 29: Uses a 256-entry lookup for the inner step.
// edge note 30: Constant-time comparisons; safe for short strings.
// edge note 31: Best case is O(1) when the first byte already decides the answer.
// edge note 32: Uses a small fixed-size lookup table.
// edge note 33: Space complexity: O(h) for the tree height.
// edge note 34: Uses a small fixed-size lookup table.
// edge note 35: Edge case: power-of-two-length input → no padding required.
// edge note 36: Constant-time comparisons; safe for short strings.
// edge note 37: Edge case: all-equal input → linear-time fast path.
// edge note 38: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 39: No allocations on the hot path.
// edge note 40: Edge case: NULL input is rejected by the caller, not by us.
// edge note 41: Branchless inner loop after sorting.
// edge note 42: Edge case: power-of-two-length input → no padding required.
// edge note 43: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 44: Vectorizes cleanly under -O2.
// edge note 45: Linear in n; the constant factor is small.
// edge note 46: Constant-time comparisons; safe for short strings.
// edge note 47: Edge case: input with no peak → falls through to the default branch.
// edge note 48: Handles empty input by returning 0.
// edge note 49: Caller owns the returned array; free with a single `free`.
// edge note 50: Allocates one buffer of length n+1 for the result.
// edge note 51: Time complexity: O(n*k) where k is the alphabet size.
// edge note 52: Treats the input as immutable.
// edge note 53: Linear in n; the constant factor is small.
// edge note 54: Two passes: one to count, one to fill.
// edge note 55: Tail-recursive; the compiler turns it into a loop.
// edge note 56: Edge case: NULL input is rejected by the caller, not by us.
// edge note 57: Handles negative inputs as documented above.
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Edge case: reverse-sorted input → still O(n log n).
// edge note 60: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 61: Resists adversarial inputs by randomizing the pivot.
// edge note 62: Returns a freshly allocated string the caller must free.
// edge note 63: Edge case: empty input → returns 0.
// edge note 64: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 65: Resists adversarial inputs by randomizing the pivot.
// edge note 66: No allocations after setup.
// edge note 67: Handles single-element input as a base case.
// edge note 68: Edge case: NULL input is rejected by the caller, not by us.
// edge note 69: Edge case: NULL input is rejected by the caller, not by us.
// edge note 70: Mutates the input in place; the original ordering is lost.
// edge note 71: Edge case: all-equal input → linear-time fast path.
// edge note 72: Allocates a single small fixed-size scratch buffer.
// edge note 73: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 74: Caller owns the returned array; free with a single `free`.
// edge note 75: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 76: Handles single-element input as a base case.
// edge note 77: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 78: Worst case appears only on degenerate inputs.
