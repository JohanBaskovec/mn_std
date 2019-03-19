

#ifndef TEST_LIBRARY_TEST_ASSERT_POINTER_UNEQUAL_H
#define TEST_LIBRARY_TEST_ASSERT_POINTER_UNEQUAL_H
#include <mn_test.h>
#include <stdlib.h>

enum test_status _test_ASSERT_POINTER_UNEQUAL_failure()
{
    int *p = malloc(54);
    int *p2 = p;
    ASSERT_POINTER_UNEQUAL(p, p2);
    free(p);

    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_POINTER_UNEQUAL_failure()
{
    ASSERT(_test_ASSERT_POINTER_UNEQUAL_failure() == TEST_STATUS_FAILURE);

    return TEST_STATUS_SUCCESS;
}

enum test_status _test_ASSERT_POINTER_UNEQUAL_success()
{
    int *p = malloc(65);
    int *p2 = p + 54;
    ASSERT_POINTER_UNEQUAL(p, p2);

    free(p);
    return TEST_STATUS_SUCCESS;
}

enum test_status test_ASSERT_POINTER_UNEQUAL_success()
{
    ASSERT(_test_ASSERT_POINTER_UNEQUAL_success() == TEST_STATUS_SUCCESS);

    return TEST_STATUS_SUCCESS;
}

#endif //TEST_LIBRARY_TEST_ASSERT_POINTER_UNEQUAL_H
