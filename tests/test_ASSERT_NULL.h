

#ifndef TEST_LIBRARY_TEST_ASSERT_NULL_H
#define TEST_LIBRARY_TEST_ASSERT_NULL_H

#include <mn_test.h>
#include <stdlib.h>

enum test_status _test_ASSERT_NULL_failure()
{
    int *p = malloc(54);
    ASSERT_NULL(p);
    free(p);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_NULL_failure()
{
    ASSERT(_test_ASSERT_NULL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_NULL_success()
{
    int *p = NULL;
    ASSERT_NULL(p);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_NULL_success()
{
    ASSERT(_test_ASSERT_NULL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}
#endif //TEST_LIBRARY_TEST_ASSERT_NULL_H
