#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_isalpha_test);

TEST_SETUP(ft_isalpha_test)
{
}

TEST_TEAR_DOWN(ft_isalpha_test)
{
}

TEST (ft_isalpha_test, should_return_true_pass_char)
{
	const char a = 'a';

	TEST_ASSERT_EQUAL(1, ft_isalpha(a));
}

TEST (ft_isalpha_test, pass_negative_value)
{
	int n;

	n = -1;
	TEST_ASSERT_EQUAL(0, ft_isalpha(n));
}
