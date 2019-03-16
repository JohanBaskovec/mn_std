

#ifndef TEST_LIBRARY_TEST_ASSERT_CHAR_UNEQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_CHAR_UNEQUAL_H

#include <mn_test.h>

enum test_status _test_ASSERT_CHAR_UNEQUAL_failure()
{
    ASSERT_CHAR_UNEQUAL('a', 'a');

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_CHAR_UNEQUAL_failure()
{
    ASSERT(_test_ASSERT_CHAR_UNEQUAL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_CHAR_UNEQUAL_success()
{
    ASSERT_CHAR_UNEQUAL('a', 'b');

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_CHAR_UNEQUAL_success()
{
    ASSERT(_test_ASSERT_CHAR_UNEQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}
#endif //TEST_LIBRARY_TEST_ASSERT_CHAR_UNEQUAL_H
