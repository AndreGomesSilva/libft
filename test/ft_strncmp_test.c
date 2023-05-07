#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strncmp_test);

TEST_SETUP(ft_strncmp_test)
{
}

TEST_TEAR_DOWN(ft_strncmp_test)
{
}

TEST(ft_strncmp_test, should_return_0_equal_str)
{
	char	*str1 = "hello World";
	char	*str2 = "hello World";
	size_t	n = 5;

	TEST_ASSERT_EQUAL(0, ft_strncmp(str1, str2, n));
}

TEST(ft_strncmp_test, should_return_possitive_value)
{
	char	*str1 = "hello World";
	char	*str2 = "he*";
	size_t	n = 5;
	TEST_ASSERT_EQUAL(66, ft_strncmp(str1, str2, n));
}

TEST(ft_strncmp_test, should_return_negative_value)
{
	char	*str1 = "hello World";
	char	*str2 = "helzzo";
	size_t	n = 5;
	TEST_ASSERT_EQUAL(-14, ft_strncmp(str1, str2, n));
}

TEST(ft_strncmp_test, should_return_false_if_n_is_null)
{
	char	*str1 = "";
	char	*str2 = "helzzo";
	size_t	n = 0;
	TEST_ASSERT_EQUAL(0, ft_strncmp(str1, str2, n));
}
