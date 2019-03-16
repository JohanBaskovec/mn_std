

#ifndef TEST_LIBRARY_TEST_ASSERT_BOOL_UNEQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_BOOL_UNEQUAL_H

#include <mn_test.h>
#include <stdbool.h>

enum test_status _test_ASSERT_BOOL_UNEQUAL_failure0()
{
    ASSERT_BOOL_UNEQUAL(false, false);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_UNEQUAL_failure1()
{
    ASSERT_BOOL_UNEQUAL(true, true);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_UNEQUAL_failure2()
{
    ASSERT_BOOL_UNEQUAL(-1, -1);

    return TEST_STATUS_SUCCESS;
}
enum test_status _test_ASSERT_BOOL_UNEQUAL_failure3()
{
    ASSERT_BOOL_UNEQUAL(0, false);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_BOOL_UNEQUAL_failure()
{
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_failure0() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_failure1() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_failure2() == TEST_STATUS_FAILURE);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_failure3() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_UNEQUAL_success0()
{
    ASSERT_BOOL_UNEQUAL(false, true);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_UNEQUAL_success1()
{
    ASSERT_BOOL_UNEQUAL(false, true);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_UNEQUAL_success2()
{
    ASSERT_BOOL_UNEQUAL(0, true);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_UNEQUAL_success3()
{
    ASSERT_BOOL_UNEQUAL(false, 543);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_BOOL_UNEQUAL_success4()
{
    ASSERT_BOOL_UNEQUAL(true, 0);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_BOOL_UNEQUAL_success()
{
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_success0() == TEST_STATUS_SUCCESS);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_success1() == TEST_STATUS_SUCCESS);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_success2() == TEST_STATUS_SUCCESS);
    ASSERT(_test_ASSERT_BOOL_UNEQUAL_success3() == TEST_STATUS_SUCCESS);


    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_BOOL_UNEQUAL_H
