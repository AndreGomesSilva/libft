#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"
#include <stdlib.h>

TEST_GROUP(ft_atoi_test);

TEST_SETUP(ft_atoi_test)
{
}

TEST_TEAR_DOWN(ft_atoi_test)
{
}

TEST (ft_atoi_test, should_return_null_pass_mult_sing)
{
	const char	*src = "+-+-+1234@#!4234";

	TEST_ASSERT_EQUAL_INT(atoi(src), ft_atoi(src));
}

TEST(ft_atoi_test, should_ignore_init_spaces)
{
	const char *src = "  	\n1234@3463";

	TEST_ASSERT_EQUAL_INT(atoi(src), ft_atoi(src));
}

TEST(ft_atoi_test, should_return_possitive_number)
{
	const char *src = "+123124325436462";

	TEST_ASSERT_EQUAL_INT(atoi(src), ft_atoi(src));

}
TEST(ft_atoi_test, should_return_negative_number)
{
	const char *src = "-123214214215125";

	TEST_ASSERT_EQUAL_INT(atoi(src), ft_atoi(src));

}
