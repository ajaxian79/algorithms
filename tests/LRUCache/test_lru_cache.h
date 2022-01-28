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
