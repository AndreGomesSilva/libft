#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_bzero_test);

TEST_SETUP(ft_bzero_test)
{
}

TEST_TEAR_DOWN(ft_bzero_test)
{
}

TEST (ft_bzero_test, should_add_null_in_the_array_until_size)
{
	char	string[12] = "Hello World";
	ft_bzero(string, 11);

	TEST_ASSERT_EQUAL_STRING("", string);
}

