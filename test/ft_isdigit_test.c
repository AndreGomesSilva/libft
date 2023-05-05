#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_isdigit_test);

TEST_SETUP(ft_isdigit_test)
{
}

TEST_TEAR_DOWN(ft_isdigit_test)
{
}

TEST (ft_isdigit_test, should_return_true_pass_number)
{
	int n;

	n = '5';
	TEST_ASSERT_EQUAL(1, ft_isdigit(n));
}

TEST(ft_isdigit_test, should_return_false_if_less_0)
{
	int n;
	
	n = -1;
	TEST_ASSERT_EQUAL(0, ft_isdigit(n));
}
