

#ifndef TEST_LIBRARY_TEST_ASSERT_INT_UNEQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_INT_UNEQUAL_H

#include <mn_test.h>
#include <stdbool.h>

enum test_status _test_ASSERT_INT_UNEQUAL_failure()
{
    ASSERT_INT_UNEQUAL(1, 1);

    return TEST_STATUS_SUCCESS;
}
enum test_status test_ASSERT_INT_UNEQUAL_failure()
{
    ASSERT(_test_ASSERT_INT_UNEQUAL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_INT_UNEQUAL_success()
{
    ASSERT_INT_UNEQUAL(3, 1);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_INT_UNEQUAL_success()
{
    ASSERT(_test_ASSERT_INT_UNEQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_INT_UNEQUAL_H
