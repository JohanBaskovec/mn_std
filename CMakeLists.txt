cmake_minimum_required(VERSION 3.10)
project(test_library C)

set(CMAKE_C_STANDARD 11)
add_definitions(
        -D_FORTIFY_SOURCE=2
        -O2
        -Wall
        -Werror
)
include_directories(./lib/)

add_executable(test_library_tests tests/tests.c tests/test_ASSERT.h tests/test_ASSERT_VAR_EQUAL.h tests/test_ASSERT_BOOL_EQUAL.h tests/test_ASSERT_CHAR_EQUAL.h tests/test_ASSERT_STRING_EQUAL.h tests/test_ASSERT_VAR_UNEQUAL.h lib/mn_test_internal.h tests/test_ASSERT_INT_EQUAL.h tests/test_ASSERT_STRING_UNEQUAL.h tests/test_ASSERT_NULL.h tests/test_ASSERT_NOT_NULL.h tests/test_ASSERT_BOOL_UNEQUAL.h tests/test_ASSERT_CHAR_UNEQUAL.h tests/test_ASSERT_INT_UNEQUAL.h)
