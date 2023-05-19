#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strtrim_test);

TEST_SETUP(ft_strtrim_test)
{
}

TEST_TEAR_DOWN(ft_strtrim_test)
{
}

TEST (ft_strtrim_test, should_return_the_string_without_x)
{
	const char s1[11] = "xxxxabccba";
	const char set[2] = "x";
	
	TEST_ASSERT_EQUAL_STRING("abccba", ft_strtrim(s1, set));
}

TEST (ft_strtrim_test, should_return_null_s1_is_space_and_set_is_space)
{
	const char s1[10] = "         ";
	const char set[2] = " ";
	
	TEST_ASSERT_EQUAL_STRING("", ft_strtrim(s1, set));
}

TEST (ft_strtrim_test, should_return_d)
{
	const char s1[] = "abcdba";
	const char set[] = "abc";
	
	TEST_ASSERT_EQUAL_STRING("d", ft_strtrim(s1, set));
}
