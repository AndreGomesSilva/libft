#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strrchr_test);

TEST_SETUP(ft_strrchr_test)
{
}

TEST_TEAR_DOWN(ft_strrchr_test)
{
}

TEST (ft_strrchr_test, should_return_the_search_char)
{
	const char	src[12] = "Hello World";
	char		c[4] =	"rld";

	TEST_ASSERT_EQUAL_STRING(c, ft_strrchr(src, 'r'));
}

TEST (ft_strrchr_test, should_return_NULL_when_char_not_found)
{
	const char	src[12] = "Hello World";

	TEST_ASSERT_EQUAL_STRING(NULL, ft_strrchr(src, 'a'));
}

TEST (ft_strrchr_test, should_return_pointer_to_terminator_if_c_is_null)
{
	const char	src[12] = "Hello World";

	TEST_ASSERT_EQUAL_STRING(src + 11, ft_strrchr(src, '\0'));
}

TEST (ft_strrchr_test, should_return_the_last_char_we_looking_for)
{
	const char	src[12] = "Hello World";

	TEST_ASSERT_EQUAL_STRING(src + 9, ft_strrchr(src, 'l'));
}

