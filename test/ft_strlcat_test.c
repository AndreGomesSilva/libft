#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strlcat_test);

TEST_SETUP(ft_strlcat_test)
{
}

TEST_TEAR_DOWN(ft_strlcat_test)
{
}

TEST (ft_strlcat_test, should_return_10_and_concat_the_strings)
{
	const char src[6] = "hello";
	char dst[12] = "world";
	size_t		n = 18;

	TEST_ASSERT_EQUAL_INT(10, ft_strlcat(dst, src, n));  
}

TEST (ft_strlcat_test, should_return_len_dst_src_when_pass_size_0_dst_0)
{
	const char src[6] = "hello";
	char dst[12] = "";
	size_t		n = 0;

	TEST_ASSERT_EQUAL_INT(5, ft_strlcat(dst, src, n));  
}

TEST (ft_strlcat_test, should_return_dst_plus_onesrc_when_size_is_dst_plus_one)
{
	const char src[6] = "world";
	char dst[12] = "hello";
	size_t		n = 7;
	ft_strlcat(dst, src, n);
	TEST_ASSERT_EQUAL_STRING("hellow", dst);  
}
