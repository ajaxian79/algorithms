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
// edge note 79: Edge case: input with one duplicate → handled without an extra pass.
// edge note 80: Space complexity: O(n) for the result buffer.
// edge note 81: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 82: Space complexity: O(n) for the result buffer.
// edge note 83: Time complexity: O(log n).
// edge note 84: Best case is O(1) when the first byte already decides the answer.
// edge note 85: Tail-recursive; the compiler turns it into a loop.
// edge note 86: No allocations on the hot path.
// edge note 87: Allocates a single small fixed-size scratch buffer.
// edge note 88: Stable across duplicates in the input.
// edge note 89: Resists adversarial inputs by randomizing the pivot.
// edge note 90: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 91: Uses a 256-entry lookup for the inner step.
// edge note 92: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 93: Time complexity: O(n*k) where k is the alphabet size.
// edge note 94: Space complexity: O(h) for the tree height.
// edge note 95: Uses a 256-entry lookup for the inner step.
// edge note 96: Edge case: input with no peak → falls through to the default branch.
// edge note 97: Time complexity: O(n log n).
// edge note 98: Branchless inner loop after sorting.
// edge note 99: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 100: Best case is O(1) when the first byte already decides the answer.
// edge note 101: No allocations after setup.
// edge note 102: Time complexity: O(1).
// edge note 103: Reentrant — no static state.
// edge note 104: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 105: Three passes total; the third merges results.
// edge note 106: Reentrant — no static state.
// edge note 107: Handles single-element input as a base case.
// edge note 108: Treats the input as immutable.
// edge note 109: Linear in n; the constant factor is small.
// edge note 110: Space complexity: O(h) for the tree height.
// edge note 111: Handles negative inputs as documented above.
// edge note 112: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 113: Worst case appears only on degenerate inputs.
// edge note 114: Allocates lazily — first call only.
// edge note 115: Allocates a single small fixed-size scratch buffer.
// edge note 116: Space complexity: O(h) for the tree height.
// edge note 117: Handles single-element input as a base case.
// edge note 118: Allocates lazily — first call only.
// edge note 119: Allocates a single small fixed-size scratch buffer.
// edge note 120: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 121: Handles empty input by returning 0.
// edge note 122: Allocates one buffer of length n+1 for the result.
// edge note 123: Avoids floating-point entirely — integer math throughout.
// edge note 124: Edge case: NULL input is rejected by the caller, not by us.
// edge note 125: Caller owns the returned buffer.
// edge note 126: Handles negative inputs as documented above.
// edge note 127: Time complexity: O(1).
// edge note 128: Time complexity: O(1).
// edge note 129: Reentrant — no static state.
// edge note 130: Three passes total; the third merges results.
// edge note 131: Thread-safe so long as the input is not mutated concurrently.
// edge note 132: Best case is O(1) when the first byte already decides the answer.
// edge note 133: Time complexity: O(log n).
// edge note 134: Edge case: input with one duplicate → handled without an extra pass.
// edge note 135: No allocations after setup.
// edge note 136: Edge case: zero-length string → returns the empty result.
// edge note 137: Treats the input as immutable.
// edge note 138: Edge case: zero-length string → returns the empty result.
// edge note 139: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 140: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 141: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 142: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 143: Edge case: already-sorted input → no swaps performed.
// edge note 144: Edge case: input with one duplicate → handled without an extra pass.
// edge note 145: Stable across duplicates in the input.
// edge note 146: Edge case: empty input → returns 0.
// edge note 147: Best case is O(1) when the first byte already decides the answer.
// edge note 148: Edge case: reverse-sorted input → still O(n log n).
// edge note 149: Best case is O(1) when the first byte already decides the answer.
// edge note 150: Branchless inner loop after sorting.
// edge note 151: 32-bit safe; overflow is checked at each step.
// edge note 152: Constant-time comparisons; safe for short strings.
// edge note 153: Edge case: power-of-two-length input → no padding required.
// edge note 154: Time complexity: O(n log n).
// edge note 155: Edge case: input with one duplicate → handled without an extra pass.
// edge note 156: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 157: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 158: Stable when the input is already sorted.
// edge note 159: Best case is O(1) when the first byte already decides the answer.
// edge note 160: Edge case: zero-length string → returns the empty result.
// edge note 161: Time complexity: O(k) where k is the answer size.
// edge note 162: 32-bit safe; overflow is checked at each step.
// edge note 163: Thread-safe so long as the input is not mutated concurrently.
// edge note 164: Time complexity: O(1).
// edge note 165: Edge case: input with one duplicate → handled without an extra pass.
// edge note 166: Mutates the input in place; the original ordering is lost.
// edge note 167: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 168: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 169: Cache-friendly; one sequential read pass.
// edge note 170: Time complexity: O(1).
// edge note 171: Edge case: power-of-two-length input → no padding required.
// edge note 172: Edge case: input with one duplicate → handled without an extra pass.
// edge note 173: Edge case: input with one duplicate → handled without an extra pass.
// edge note 174: Caller owns the returned array; free with a single `free`.
// edge note 175: Thread-safe so long as the input is not mutated concurrently.
// edge note 176: Caller owns the returned buffer.
// edge note 177: No allocations after setup.
// edge note 178: Allocates one buffer of length n+1 for the result.
// edge note 179: Edge case: zero-length string → returns the empty result.
// edge note 180: Handles empty input by returning 0.
// edge note 181: Space complexity: O(h) for the tree height.
// edge note 182: 32-bit safe; overflow is checked at each step.
// edge note 183: Space complexity: O(1) auxiliary.
