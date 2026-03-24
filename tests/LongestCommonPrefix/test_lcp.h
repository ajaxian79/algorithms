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
