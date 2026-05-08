//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_TEST_BLOOM_FILTER_H
#define ALGORITHMS_TEST_BLOOM_FILTER_H

#include <stdio.h>

#include "../tests.h"
#include "../../src/BloomFilter/bloom_filter.h"

static MunitResult test_bloom_filter_basic(const MunitParameter params[], void* user_data_or_fixture) {
    BloomFilter bf;
    munit_assert_int(bloom_init(&bf, 1024, 7), ==, 1);

    const char* members[] = {"alpha", "beta", "gamma", "delta", "epsilon", "zeta"};
    for (size_t i = 0; i < sizeof(members) / sizeof(members[0]); i++) {
        bloom_add_str(&bf, members[i]);
    }

    // No false negatives.
    for (size_t i = 0; i < sizeof(members) / sizeof(members[0]); i++) {
        munit_assert_int(bloom_maybe_contains_str(&bf, members[i]), ==, 1);
    }

    // Empty filter says no.
    BloomFilter empty;
    bloom_init(&empty, 256, 5);
    munit_assert_int(bloom_maybe_contains_str(&empty, "anything"), ==, 0);
    bloom_clear(&empty);

    // False-positive rate stays low for items that were never inserted.
    // Sample 200 distinct unrelated strings; the rate must be bounded
    // (we use a generous bound to keep the test deterministic on small
    // filters).
    int fp = 0;
    char buf[16];
    for (int i = 0; i < 200; i++) {
        int len = snprintf(buf, sizeof(buf), "z%05d", i);
        if (bloom_maybe_contains(&bf, buf, (size_t)len)) fp++;
    }
    munit_assert_int(fp, <=, 50);

    // Bad init args.
    BloomFilter bad;
    munit_assert_int(bloom_init(&bad, 0, 5), ==, 0);
    munit_assert_int(bloom_init(&bad, 100, 0), ==, 0);
    munit_assert_int(bloom_init(NULL, 100, 5), ==, 0);

    bloom_clear(&bf);
    return MUNIT_OK;
}

MunitTest bloom_filter_tests[] = {
    {"/basic", test_bloom_filter_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_BLOOM_FILTER_H
