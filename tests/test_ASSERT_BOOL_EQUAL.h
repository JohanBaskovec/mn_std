

#ifndef TEST_LIBRARY_TEST_ASSERT_BOOL_EQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_BOOL_EQUAL_H

#include <mn_test.h>
#include <stdbool.h>

enum test_status _test_ASSERT_BOOL_EQUAL_failure0()
{
    ASSERT_BOOL_EQUAL(false, true);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_EQUAL_failure1()
{
    ASSERT_BOOL_EQUAL(-100, 0);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_EQUAL_failure2()
{
    ASSERT_BOOL_EQUAL(true, false);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_EQUAL_failure3()
{
    ASSERT_BOOL_EQUAL(true, 0);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_BOOL_EQUAL_failure()
{
    ASSERT(_test_ASSERT_BOOL_EQUAL_failure0() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_EQUAL_failure1() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_EQUAL_failure2() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_EQUAL_failure3() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_EQUAL_success()
{
    ASSERT_BOOL_EQUAL(false, false);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_BOOL_EQUAL_success()
{
    ASSERT(_test_ASSERT_BOOL_EQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_BOOL_EQUAL_H
