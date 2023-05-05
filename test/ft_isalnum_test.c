#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_isalnum_test);

TEST_SETUP(ft_isalnum_test)
{
}

TEST_TEAR_DOWN(ft_isalnum_test)
{
}

TEST (ft_isalnum_test, should_return_true_pass_char)
{
	const char a = 'a';

	TEST_ASSERT_EQUAL(1, ft_isalnum(a));
}

TEST (ft_isalnum_test, should_return_0_for_negative_value)
{
	int n;

	n = -1;
	TEST_ASSERT_EQUAL(0, ft_isalnum(n));
}

TEST (ft_isalnum_test, should_return_true_pass_number)
{
	int n;

	n = '5';
	TEST_ASSERT_EQUAL(1, ft_isalnum(n));
}

TEST (ft_isalnum_test, should_return_false_when_pass_nonalnum)
{
	char c;

	c = '*';
	TEST_ASSERT_FALSE(ft_isalnum(c) == 1);
}
