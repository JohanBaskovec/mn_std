

#ifndef TEST_LIBRARY_MN_TEST_LIBRARY_INTERNAL_H
#define TEST_LIBRARY_MN_TEST_LIBRARY_INTERNAL_H

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define __ASSERT_FAILED_STRING "ASSERT failed in function %s at line %s:%d\n"

#define __FAIL_TEST_IF_TRUE(expected, actual, printfchar, type_name, expected_string, actual_string, bool_to_verify, message)\
    do { \
        if (bool_to_verify) { \
            printf(ANSI_COLOR_RED __ASSERT_FAILED_STRING\
"\t" #type_name "s " message ".\n\
\tExpected = " printfchar ", actual = " printfchar " \n" ANSI_COLOR_RESET,\
__FUNCTION__, __FILE__, __LINE__, expected_string, actual_string); \
        return TEST_STATUS_FAILURE;\
        } \
    } while (0);

#endif //TEST_LIBRARY_MN_TEST_LIBRARY_INTERNAL_H
