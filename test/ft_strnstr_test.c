#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strnstr_test);

TEST_SETUP(ft_strnstr_test)
{
}

TEST_TEAR_DOWN(ft_strnstr_test)
{
}

TEST (ft_strnstr_test, should_return_bigstring_when_substring_is_empty)
{
	const char	string[12] = "Hello World";
	const char	substring[] =	"";

	TEST_ASSERT_EQUAL_STRING("Hello World", ft_strnstr(string, substring, 11));
}

TEST (ft_strnstr_test, should_return_NULL_when_substring_not_found_in_bigstring)
{
	const char	string[14] = "princess zelda";
	const char	substring[] = "link";
	TEST_ASSERT_EQUAL(NULL, ft_strnstr(string, substring,13 ));
}

TEST (ft_strnstr_test, should_return_pointer_to_the_first_substring_found)
{
	const char	string[49] = "Bilbo baggins, have a bag. and in the bag a ring";
	const char	substring[] = "bag";
	TEST_ASSERT_EQUAL_STRING(string + 6, ft_strnstr(string, substring, 48));
}

TEST (ft_strnstr_test, should_return_null_if_len_end_and_substring_is_more_than_one)
{
	const char	string[30] = "aaabcabcd";
	const char	substring[] = "cd";
	TEST_ASSERT_EQUAL(NULL, ft_strnstr(string, substring, 8));
}

TEST (ft_strnstr_test, should_return_the_found_substring_if_len_is_negative)
{
	const char	string[30] = "aaabcabcd";
	const char	substring[] = "c";
	TEST_ASSERT_EQUAL_STRING(string + 4, ft_strnstr(string, substring, -1));
}


