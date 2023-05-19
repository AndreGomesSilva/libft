#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strjoin_test);

TEST_SETUP(ft_strjoin_test)
{
}

TEST_TEAR_DOWN(ft_strjoin_test)
{
}

TEST(ft_strjoin_test, should_return_the_str_concat)
{
	char	str1[] = "hello";
	char	str[] = "42";

	TEST_ASSERT_EQUAL_STRING("hello42", ft_strjoin(str1, str));
}


