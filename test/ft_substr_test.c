#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_substr_test);

TEST_SETUP(ft_substr_test)
{
}

TEST_TEAR_DOWN(ft_substr_test)
{
}

TEST(ft_substr_test, should_return_0_equal_str)
{
	char	str1[] = "test";
	size_t	n = 2;

	TEST_ASSERT_EQUAL_STRING("es", ft_substr(str1, 1, n));
}

TEST(ft_substr_test, should_return_null_when_start_is_0)
{
	char	str1[] = "test";
	size_t	n = 4200;

	TEST_ASSERT_EQUAL_STRING("test", ft_substr(str1, 0, n));
}

TEST(ft_substr_test, should_return_just_the_last_char)
{
    char    str1[] = "0123456789";
    size_t    n = 10;

	TEST_ASSERT_EQUAL_STRING("9", ft_substr(str1, 9 , n));
}
