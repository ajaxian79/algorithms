//
// Created by ajaxian on 04/29/26.
//

#ifndef ALGORITHMS_TEST_EVAL_RPN_H
#define ALGORITHMS_TEST_EVAL_RPN_H

#include "../tests.h"
#include "../../src/EvalReversePolish/eval_rpn.h"

static MunitResult test_eval_rpn_basic(const MunitParameter params[], void* user_data_or_fixture) {
    const char* a[] = {"2", "1", "+", "3", "*"};
    munit_assert_long(eval_rpn(a, 5), ==, 9);

    const char* b[] = {"4", "13", "5", "/", "+"};
    munit_assert_long(eval_rpn(b, 5), ==, 6);

    const char* c[] = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    munit_assert_long(eval_rpn(c, 13), ==, 22);

    const char* d[] = {"3"};
    munit_assert_long(eval_rpn(d, 1), ==, 3);

    const char* e[] = {"-7", "2", "*"};
    munit_assert_long(eval_rpn(e, 3), ==, -14);

    const char* f[] = {"7", "0", "/"};
    munit_assert_long(eval_rpn(f, 3), ==, 0);

    munit_assert_long(eval_rpn(NULL, 0), ==, 0);
    return MUNIT_OK;
}

MunitTest eval_rpn_tests[] = {
    {"/basic", test_eval_rpn_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

#endif //ALGORITHMS_TEST_EVAL_RPN_H
