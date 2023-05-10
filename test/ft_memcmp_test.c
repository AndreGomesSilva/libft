#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_memcmp_test);

TEST_SETUP(ft_memcmp_test)
{
}

TEST_TEAR_DOWN(ft_memcmp_test)
{
}

TEST (ft_memcmp_test, should_return_0_when_same_string)
{
	const char s1[50] = "hello world 3000";
	const char s2[50] = "hello world 3000";
	size_t n = 4;

	TEST_ASSERT_EQUAL_INT(0 , ft_memcmp(s1, s2, n));
}

TEST (ft_memcmp_test, shoud_return_positive_when_s1_biger_then_s2)
{
	const char s1[50] = "abc";
	const char s2[50] = "aac";
	size_t n = 3;

	TEST_ASSERT_EQUAL_INT(1, ft_memcmp(s1, s2, n));

}
