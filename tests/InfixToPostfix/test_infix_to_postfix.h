//
// Created by ajaxian on 05/03/26.
//

#ifndef ALGORITHMS_TEST_INFIX_TO_POSTFIX_H
#define ALGORITHMS_TEST_INFIX_TO_POSTFIX_H

#include <stdlib.h>
#include <string.h>

#include "../tests.h"
#include "../../src/InfixToPostfix/infix_to_postfix.h"

static MunitResult test_infix_to_postfix_basic(const MunitParameter params[], void* user_data_or_fixture) {
    char* a = infix_to_postfix("a+b*c");
    munit_assert_not_null(a);
    munit_assert_string_equal(a, "a b c * +");
    free(a);

    char* b = infix_to_postfix("(a+b)*c");
    munit_assert_not_null(b);
    munit_assert_string_equal(b, "a b + c *");
    free(b);

    char* c = infix_to_postfix("a+b*c^d-e");
    munit_assert_not_null(c);
    munit_assert_string_equal(c, "a b c d ^ * + e -");
    free(c);

    char* d = infix_to_postfix("a^b^c");
    munit_assert_not_null(d);
    munit_assert_string_equal(d, "a b c ^ ^");
    free(d);

    munit_assert_null(infix_to_postfix("(a+b"));
    munit_assert_null(infix_to_postfix("a+b)"));
    munit_assert_null(infix_to_postfix("a b"));
    munit_assert_null(infix_to_postfix(NULL));

    char* e = infix_to_postfix("");
    munit_assert_not_null(e);
    munit_assert_string_equal(e, "");
    free(e);
    return MUNIT_OK;
}

MunitTest infix_to_postfix_tests[] = {
    {"/basic", test_infix_to_postfix_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_INFIX_TO_POSTFIX_H
