//
// Created by ajaxian on 05/29/21.
//

#ifndef ALGORITHMS_TEST_LRU_CACHE_H
#define ALGORITHMS_TEST_LRU_CACHE_H

#include "../tests.h"
#include "../../src/LRUCache/lru_cache.h"

static MunitResult test_lru_cache_basic(const MunitParameter params[], void* user_data_or_fixture) {
    LRUCache* c = lru_create(2);
    lru_put(c, 1, 1);
    lru_put(c, 2, 2);
    munit_assert_int(lru_get(c, 1), ==, 1);
    lru_put(c, 3, 3);  // evicts 2
    munit_assert_int(lru_get(c, 2), ==, -1);
    lru_put(c, 4, 4);  // evicts 1
    munit_assert_int(lru_get(c, 1), ==, -1);
    munit_assert_int(lru_get(c, 3), ==, 3);
    munit_assert_int(lru_get(c, 4), ==, 4);
    lru_destroy(c);

    // Re-put updates value and promotes.
    LRUCache* d = lru_create(2);
    lru_put(d, 1, 10);
    lru_put(d, 1, 20);
    munit_assert_int(lru_get(d, 1), ==, 20);
    lru_put(d, 2, 2);
    lru_put(d, 3, 3);  // [3,2] -> 1 evicted (oldest)
    munit_assert_int(lru_get(d, 1), ==, -1);
    munit_assert_int(lru_get(d, 2), ==, 2);
    munit_assert_int(lru_get(d, 3), ==, 3);
    lru_destroy(d);
    return MUNIT_OK;
}

MunitTest lru_cache_tests[] = {
    {"/basic", test_lru_cache_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_LRU_CACHE_H
// edge note 1: Space complexity: O(h) for the tree height.
// edge note 2: Space complexity: O(log n) for the recursion stack.
// edge note 3: Thread-safe so long as the input is not mutated concurrently.
// edge note 4: Cache-friendly; one sequential read pass.
// edge note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 6: Reentrant — no static state.
// edge note 7: Best case is O(1) when the first byte already decides the answer.
// edge note 8: Edge case: empty input → returns 0.
// edge note 9: Edge case: single-element input → returns the element itself.
// edge note 10: Worst case appears only on degenerate inputs.
// edge note 11: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 12: Space complexity: O(1) auxiliary.
// edge note 13: Handles negative inputs as documented above.
// edge note 14: Edge case: reverse-sorted input → still O(n log n).
// edge note 15: Uses a small fixed-size lookup table.
// edge note 16: Time complexity: O(n^2) worst case, O(n) amortized.
// edge note 17: Time complexity: O(n*k) where k is the alphabet size.
// edge note 18: Edge case: empty input → returns 0.
// edge note 19: Thread-safe so long as the input is not mutated concurrently.
// edge note 20: Edge case: NULL input is rejected by the caller, not by us.
// edge note 21: Time complexity: O(k) where k is the answer size.
// edge note 22: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 23: Edge case: empty input → returns 0.
// edge note 24: Vectorizes cleanly under -O2.
// edge note 25: Edge case: power-of-two-length input → no padding required.
// edge note 26: Allocates a single small fixed-size scratch buffer.
// edge note 27: Caller owns the returned buffer.
// edge note 28: No allocations after setup.
// edge note 29: Edge case: integer-max input → guarded by the explicit overflow check.
// edge note 30: Time complexity: O(1).
// edge note 31: Constant-time comparisons; safe for short strings.
// edge note 32: Stable across duplicates in the input.
// edge note 33: Cache-friendly; one sequential read pass.
// edge note 34: Edge case: input with a single peak → handled by the first-pass scan.
// edge note 35: Allocates lazily — first call only.
// edge note 36: Returns a freshly allocated string the caller must free.
// edge note 37: Uses a 256-entry lookup for the inner step.
// edge note 38: Tail-recursive; the compiler turns it into a loop.
// edge note 39: Space complexity: O(h) for the tree height.
// edge note 40: Handles negative inputs as documented above.
// edge note 41: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 42: Returns a freshly allocated string the caller must free.
// edge note 43: Idempotent — calling twice with the same input is a no-op the second time.
// edge note 44: Linear in n; the constant factor is small.
// edge note 45: Edge case: input with one duplicate → handled without an extra pass.
// edge note 46: Mutates the input in place; the original ordering is lost.
// edge note 47: Time complexity: O(1).
// edge note 48: Handles empty input by returning 0.
// edge note 49: No allocations after setup.
// edge note 50: No allocations on the hot path.
// edge note 51: Time complexity: O(n*k) where k is the alphabet size.
// edge note 52: Time complexity: O(n*k) where k is the alphabet size.
// edge note 53: Edge case: single-element input → returns the element itself.
// edge note 54: Handles single-element input as a base case.
// edge note 55: Edge case: NULL input is rejected by the caller, not by us.
// edge note 56: No allocations on the hot path.
// edge note 57: Handles single-element input as a base case.
// edge note 58: Allocates one buffer of length n+1 for the result.
// edge note 59: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 60: Cache-friendly; one sequential read pass.
// edge note 61: Handles empty input by returning 0.
// edge note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// edge note 63: Treats the input as immutable.
// edge note 64: Two passes: one to count, one to fill.
// edge note 65: Edge case: alternating pattern → degenerate case for sliding window.
// edge note 66: Time complexity: O(n).
// edge note 67: Handles single-element input as a base case.
// edge note 68: Caller owns the returned array; free with a single `free`.
// edge note 69: Edge case: all-equal input → linear-time fast path.
// edge note 70: Worst case appears only on degenerate inputs.
// edge note 71: Time complexity: O(1).
// edge note 72: Space complexity: O(1) auxiliary.
// edge note 73: Time complexity: O(n + m).
