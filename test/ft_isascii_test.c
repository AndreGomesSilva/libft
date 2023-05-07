#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_isascii_test);

TEST_SETUP(ft_isascii_test)
{
}

TEST_TEAR_DOWN(ft_isascii_test)
{
}

TEST (ft_isascii_test, should_return_true_pass_char)
{
	const char a = 'a';

	TEST_ASSERT_EQUAL(1, ft_isascii(a));
}

TEST (ft_isascii_test, should_return_0_for_negative_value)
{
	int n;

	n = -1;
	TEST_ASSERT_EQUAL(0, ft_isascii(n));
}

TEST (ft_isascii_test, should_return_true_pass_number)
{
	int n;

	n = '5';
	TEST_ASSERT_EQUAL(1, ft_isascii(n));
}

TEST (ft_isascii_test, should_return_true_when_pass_non_alphanum)
{
	char c;

	c = '*';
	TEST_ASSERT_EQUAL(1, ft_isascii(c));
}

TEST (ft_isascii_test, should_return_true_symbol)
{
	char s;

	s = '&';
	TEST_ASSERT_EQUAL(1, ft_isascii(s));
}
