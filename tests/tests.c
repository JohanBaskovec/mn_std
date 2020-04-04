#include <mn_test.h>
#include <stdbool.h>
#include "test_ASSERT.h"
#include "test_ASSERT_VAR_EQUAL.h"
#include "test_ASSERT_BOOL_EQUAL.h"
#include "test_ASSERT_CHAR_EQUAL.h"
#include "test_ASSERT_STRING_EQUAL.h"
#include "test_ASSERT_INT_EQUAL.h"
#include "test_ASSERT_NULL.h"
#include "test_ASSERT_NOT_NULL.h"
#include "test_ASSERT_STRING_UNEQUAL.h"
#include "test_ASSERT_BOOL_UNEQUAL.h"
#include "test_ASSERT_CHAR_UNEQUAL.h"
#include "test_ASSERT_VAR_UNEQUAL.h"
#include "test_ASSERT_INT_UNEQUAL.h"
#include "test_ASSERT_POINTER_EQUAL.h"
#include "test_ASSERT_POINTER_UNEQUAL.h"

int
main()
{
    enum test_status
    (*tests[])() = {
            &test_ASSERT_failure, &test_ASSERT_success
            , &test_ASSERT_BOOL_EQUAL_success, &test_ASSERT_BOOL_EQUAL_failure
            , &test_ASSERT_BOOL_UNEQUAL_success, &test_ASSERT_BOOL_UNEQUAL_failure
            , &test_ASSERT_CHAR_EQUAL_success, &test_ASSERT_CHAR_EQUAL_failure
            , &test_ASSERT_CHAR_UNEQUAL_success, &test_ASSERT_CHAR_UNEQUAL_failure
            , &test_ASSERT_INT_EQUAL_success, &test_ASSERT_INT_EQUAL_failure
            , &test_ASSERT_INT_UNEQUAL_success, &test_ASSERT_INT_UNEQUAL_failure
            , &test_ASSERT_NOT_NULL_success, &test_ASSERT_NOT_NULL_failure
            , &test_ASSERT_NULL_success, &test_ASSERT_NULL_failure
            , &test_ASSERT_POINTER_EQUAL_success, &test_ASSERT_POINTER_EQUAL_failure
            , &test_ASSERT_POINTER_UNEQUAL_success, &test_ASSERT_POINTER_UNEQUAL_failure
            , &test_ASSERT_STRING_EQUAL_success, &test_ASSERT_STRING_EQUAL_failure
            , &test_ASSERT_STRING_UNEQUAL_success, &test_ASSERT_STRING_UNEQUAL_failure
            , &test_ASSERT_VAR_EQUAL_success, test_ASSERT_VAR_EQUAL_failure
            , &test_ASSERT_VAR_UNEQUAL_success, test_ASSERT_VAR_UNEQUAL_failure


    };
    int n_tests = sizeof tests / sizeof tests[0];
    return run_tests(tests, n_tests);
}
