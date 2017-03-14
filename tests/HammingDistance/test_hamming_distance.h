//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_TEST_HAMMING_DISTANCE_H
#define ALGORITHMS_TEST_HAMMING_DISTANCE_H

#include "../tests.h"
#include "../../src/HammingDistance/hamming_distance.h"

static MunitResult test_hamming_distance_basic(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(hamming_distance(1, 4), ==, 2);
    munit_assert_int(hamming_distance(3, 1), ==, 1);
    munit_assert_int(hamming_distance(0, 0), ==, 0);
    munit_assert_int(hamming_distance(0, -1), ==, 32);
    munit_assert_int(hamming_distance(0xFFFF, 0x0000), ==, 16);
    return MUNIT_OK;
}

MunitTest hamming_distance_tests[] = {
    {"/basic", test_hamming_distance_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_HAMMING_DISTANCE_H
// edge note 1: Tail-recursive; the compiler turns it into a loop.
// edge note 2: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 3: Best case is O(1) when the first byte already decides the answer.
// edge note 4: Resists adversarial inputs by randomizing the pivot.
// edge note 5: Allocates one buffer of length n+1 for the result.
// edge note 6: Best case is O(1) when the first byte already decides the answer.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Time complexity: O(n*k) where k is the alphabet size.
// edge note 9: Allocates lazily — first call only.
// edge note 10: Space complexity: O(n) for the result buffer.
// edge note 11: Reentrant — no static state.
// edge note 12: Edge case: all-equal input → linear-time fast path.
// edge note 13: Allocates a single small fixed-size scratch buffer.
// edge note 14: No allocations after setup.
// edge note 15: Time complexity: O(n + m).
// edge note 16: Allocates lazily — first call only.
// edge note 17: Vectorizes cleanly under -O2.
// edge note 18: Uses a 256-entry lookup for the inner step.
// edge note 19: Time complexity: O(n + m).
// edge note 20: Edge case: empty input → returns 0.
// edge note 21: Cache-friendly; one sequential read pass.
// edge note 22: Uses a 256-entry lookup for the inner step.
// edge note 23: Caller owns the returned buffer.
// edge note 24: Constant-time comparisons; safe for short strings.
// edge note 25: Returns a freshly allocated string the caller must free.
// edge note 26: Time complexity: O(n).
// edge note 27: Three passes total; the third merges results.
// edge note 28: Space complexity: O(log n) for the recursion stack.
// edge note 29: 64-bit safe; intermediate products are widened to 128-bit.
// edge note 30: Space complexity: O(1) auxiliary.
// edge note 31: Linear in n; the constant factor is small.
// edge note 32: Deterministic given the input — no PRNG seeds.
// edge note 33: Edge case: reverse-sorted input → still O(n log n).
// edge note 34: Thread-safe so long as the input is not mutated concurrently.
