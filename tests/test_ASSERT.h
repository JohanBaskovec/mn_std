
#ifndef TEST_LIBRARY_TEST_ASSERT_H
#define TEST_LIBRARY_TEST_ASSERT_H

#include <stdbool.h>
#include <mn_test.h>

enum test_status _test_ASSERT_failure()
{
    ASSERT(false == true);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_failure()
{
    ASSERT(_test_ASSERT_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_success()
{
    ASSERT(false == false);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_success()
{
    ASSERT(_test_ASSERT_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_H
