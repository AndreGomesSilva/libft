#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strchr_test);

TEST_SETUP(ft_strchr_test)
{
}

TEST_TEAR_DOWN(ft_strchr_test)
{
}

TEST(ft_strchr_test, should_return_the_right_position)
{
	char	*str1 = "hello World";
	char	c = 'W';

	TEST_ASSERT_EQUAL(str1 + 6, ft_strchr(str1, c));
}

TEST(ft_strchr_test, should_return_NULL_if_str_is_null)
{
	char	str1[] = "";
	char	c = '\0';

	TEST_ASSERT_EQUAL_STRING("" , ft_strchr(str1, c));
}
