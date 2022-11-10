#include <stdio.h>

#include "../vendor/munit/munit.h"

#include "TwoSum/test_twosum.h"
#include "FirstLetterToAppearTwice/test_repeated.h"

static void*
test_setup(const MunitParameter params[], void* user_data) {
    return strdup("Hello, world!");
}

static void
test_tear_down(void* fixture) {
    free(fixture);
}

static MunitResult test_basic_setup(const MunitParameter params[], void* user_data_or_fixture) {
    munit_assert_int(1, ==, 1);
    return MUNIT_OK;
}


MunitTest tests[] = {
        {
                "/basic-setup", /* name */
                test_basic_setup, /* test */
                NULL, /* setup */
                NULL, /* tear_down */
                MUNIT_TEST_OPTION_NONE, /* options */
                NULL /* parameters */
        },
        /* Mark the end of the array with an entry where the test
         * function is NULL */
        {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
};

MunitSuite suites[] = {
        {
                "/twosum", /* name */
                twosum_tests, /* tests */
                NULL, /* suites */
                1, /* iterations */
                MUNIT_SUITE_OPTION_NONE /* options */
        },{
                "/repeated", /* name */
                repeated_tests, /* tests */
                NULL, /* suites */
                1, /* iterations */
                MUNIT_SUITE_OPTION_NONE /* options */
        },
        { NULL, NULL, NULL, 0, MUNIT_SUITE_OPTION_NONE }
};


int main(int argc, char *argv[]) {

    MunitSuite suite = {
            "/all", /* name */
            tests, /* tests */
            suites, /* suites */
            1, /* iterations */
            MUNIT_SUITE_OPTION_NONE /* options */
    };

    return munit_suite_main(&suite, NULL, argc, argv);
}
