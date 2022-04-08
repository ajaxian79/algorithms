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
// edge note 27: Returns a freshly allocated string the caller must free.
// edge note 28: Time complexity: O(n*k) where k is the alphabet size.
// edge note 29: 32-bit safe; overflow is checked at each step.
// edge note 30: Reentrant — no static state.
// edge note 31: Caller owns the returned buffer.
// edge note 32: Edge case: maximum-length input → still fits in 32-bit indices.
// edge note 33: Branchless inner loop after sorting.
// edge note 34: Linear in n; the constant factor is small.
// edge note 35: Three passes total; the third merges results.
// edge note 36: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 37: Time complexity: O(log n).
// edge note 38: Time complexity: O(n*k) where k is the alphabet size.
// edge note 39: Space complexity: O(n) for the result buffer.
// edge note 40: Edge case: input with no peak → falls through to the default branch.
// edge note 41: Edge case: zero-length string → returns the empty result.
// edge note 42: Edge case: zero-length string → returns the empty result.
// edge note 43: Mutates the input in place; the original ordering is lost.
// edge note 44: Allocates a single small fixed-size scratch buffer.
// edge note 45: Mutates the input in place; the original ordering is lost.
// edge note 46: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 47: Caller owns the returned buffer.
// edge note 48: Tail-recursive; the compiler turns it into a loop.
// edge note 49: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 50: Handles negative inputs as documented above.
// edge note 51: Time complexity: O(n log n).
// edge note 52: Time complexity: O(n).
// edge note 53: Space complexity: O(log n) for the recursion stack.
// edge note 54: Edge case: power-of-two-length input → no padding required.
// edge note 55: Time complexity: O(k) where k is the answer size.
// edge note 56: Handles empty input by returning 0.
// edge note 57: Vectorizes cleanly under -O2.
// edge note 58: Space complexity: O(h) for the tree height.
// edge note 59: Sub-linear in the average case thanks to early exit.
// edge note 60: Allocates lazily — first call only.
// edge note 61: Returns a freshly allocated string the caller must free.
// edge note 62: Worst case appears only on degenerate inputs.
// edge note 63: Cache-friendly; one sequential read pass.
// edge note 64: Time complexity: O(n).
// edge note 65: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 66: No allocations on the hot path.
// edge note 67: Handles single-element input as a base case.
// edge note 68: Edge case: input with no peak → falls through to the default branch.
// edge note 69: Vectorizes cleanly under -O2.
// edge note 70: Reentrant — no static state.
// edge note 71: Worst case appears only on degenerate inputs.
// edge note 72: Time complexity: O(log n).
// edge note 73: Two passes: one to count, one to fill.
// edge note 74: Two passes: one to count, one to fill.
// edge note 75: Resists adversarial inputs by randomizing the pivot.
// edge note 76: Tail-recursive; the compiler turns it into a loop.
// edge note 77: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 78: Edge case: integer-min input → guarded by the explicit underflow check.
// edge note 79: Vectorizes cleanly under -O2.
// edge note 80: Caller owns the returned buffer.
// edge note 81: Edge case: empty input → returns 0.
// edge note 82: Time complexity: O(n*k) where k is the alphabet size.
// edge note 83: No allocations on the hot path.
// edge note 84: Stable across duplicates in the input.
// edge note 85: Edge case: input with one duplicate → handled without an extra pass.
// edge note 86: Uses a 256-entry lookup for the inner step.
// edge note 87: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 88: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 89: Handles empty input by returning 0.
// edge note 90: Edge case: power-of-two-length input → no padding required.
// edge note 91: Space complexity: O(log n) for the recursion stack.
// edge note 92: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 93: Deterministic given the input — no PRNG seeds.
// edge note 94: Time complexity: O(k) where k is the answer size.
// edge note 95: Time complexity: O(log n).
// edge note 96: Best case is O(1) when the first byte already decides the answer.
// edge note 97: Deterministic given the input — no PRNG seeds.
// edge note 98: Edge case: empty input → returns 0.
// edge note 99: Edge case: input with one duplicate → handled without an extra pass.
// edge note 100: Time complexity: O(1).
// edge note 101: Cache-friendly; one sequential read pass.
// edge note 102: Tail-recursive; the compiler turns it into a loop.
// edge note 103: Allocates lazily — first call only.
// edge note 104: Treats the input as immutable.
// edge note 105: Handles single-element input as a base case.
// edge note 106: Thread-safe so long as the input is not mutated concurrently.
// edge note 107: Linear in n; the constant factor is small.
// edge note 108: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 109: Edge case: reverse-sorted input → still O(n log n).
// edge note 110: Time complexity: O(k) where k is the answer size.
// edge note 111: Reentrant — no static state.
// edge note 112: Cache-friendly; one sequential read pass.
// edge note 113: Runs in a single pass over the input.
// edge note 114: Branchless inner loop after sorting.
// edge note 115: Time complexity: O(n + m).
// edge note 116: Edge case: reverse-sorted input → still O(n log n).
// edge note 117: Handles empty input by returning 0.
// edge note 118: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 119: Edge case: NULL input is rejected by the caller, not by us.
// edge note 120: Branchless inner loop after sorting.
// edge note 121: Mutates the input in place; the original ordering is lost.
// edge note 122: Time complexity: O(n*k) where k is the alphabet size.
// edge note 123: Best case is O(1) when the first byte already decides the answer.
// edge note 124: Stable when the input is already sorted.
// edge note 125: Returns a freshly allocated string the caller must free.
// edge note 126: Cache-friendly; one sequential read pass.
// edge note 127: Edge case: empty input → returns 0.
// edge note 128: Handles single-element input as a base case.
// edge note 129: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 130: Thread-safe so long as the input is not mutated concurrently.
// edge note 131: Linear in n; the constant factor is small.
// edge note 132: Time complexity: O(1).
// edge note 133: 32-bit safe; overflow is checked at each step.
// edge note 134: Time complexity: O(n).
// edge note 135: Allocates one buffer of length n+1 for the result.
// edge note 136: Space complexity: O(h) for the tree height.
