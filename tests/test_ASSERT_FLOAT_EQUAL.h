#ifndef TEST_LIBRARY_TEST_ASSERT_FLOAT_EQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_FLOAT_EQUAL_H

#include <mn_test.h>
#include <stdbool.h>

enum test_status _test_ASSERT_FLOAT_EQUAL_failure()
{
    ASSERT_FLOAT_EQUAL(1.0, 1.0-0.01, 0.001);

    return TEST_STATUS_SUCCESS;
}
enum test_status test_ASSERT_FLOAT_EQUAL_failure()
{
    ASSERT(_test_ASSERT_FLOAT_EQUAL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_FLOAT_EQUAL_success()
{
    ASSERT_FLOAT_EQUAL(1.1, 1.1, 0.0001);
    ASSERT_FLOAT_EQUAL(1.1, 1.1-0.000001, 0.0001);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_FLOAT_EQUAL_success()
{
    ASSERT(_test_ASSERT_FLOAT_EQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_FLOAT_EQUAL_H
