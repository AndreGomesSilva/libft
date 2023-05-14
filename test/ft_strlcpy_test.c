#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strlcpy_test);

TEST_SETUP(ft_strlcpy_test)
{
}

TEST_TEAR_DOWN(ft_strlcpy_test)
{
}

TEST (ft_strlcpy_test, should_return_len_pass_src)
{
	const char	*src = "Hello World";
	char		dest[10];
	size_t 		size = 10;

	TEST_ASSERT_EQUAL(11, ft_strlcpy(dest, src, size));
}


TEST (ft_strlcpy_test, shold_return_one_when_pass_null_src)
{
	const char	*src = "";
	char	dest[10];
	size_t	size = 10;
	
	TEST_ASSERT_EQUAL(0, ft_strlcpy(dest, src, size));
}

TEST (ft_strlcpy_test, should_not_copy_pass_negative_size)
{
	const char *src = "hello world";
	char dest[10];
	size_t size = -1;

	TEST_ASSERT_EQUAL(11, ft_strlcpy(dest, src, size));
}

