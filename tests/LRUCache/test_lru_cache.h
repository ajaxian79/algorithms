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
