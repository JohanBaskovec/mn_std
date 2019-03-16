

#ifndef TEST_LIBRARY_TEST_VAR_EQUAL_H
#define TEST_LIBRARY_TEST_VAR_EQUAL_H


#include <mn_test.h>

enum test_status
_test_ASSERT_VAR_EQUAL_success()
{
    ASSERT_VAR_EQUAL(1, 1, "%d", "int");

    return TEST_STATUS_SUCCESS;
}

enum test_status
test_ASSERT_VAR_EQUAL_success()
{
    ASSERT(_test_ASSERT_VAR_EQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

enum test_status
_test_ASSERT_VAR_EQUAL_failure()
{
    ASSERT_VAR_EQUAL(1, 2, "%d", int);

    return TEST_STATUS_SUCCESS;
}

enum test_status
test_ASSERT_VAR_EQUAL_failure()
{
    ASSERT(_test_ASSERT_VAR_EQUAL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}


#endif //TEST_LIBRARY_TEST_VAR_EQUAL_H
