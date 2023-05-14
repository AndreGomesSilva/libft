#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"
#include <stdlib.h>
#include <string.h>

TEST_GROUP(ft_memmove_test);

TEST_SETUP(ft_memmove_test)
{
}

TEST_TEAR_DOWN(ft_memmove_test)
{
}

TEST (ft_memmove_test, should_return_dest_when_pass_size_0)
{
	const char	src[11] = "Hello World";
	char		dest[11] = "Hello World";

	TEST_ASSERT_EQUAL(memmove(dest, src+4, 0), ft_memmove(dest, src+4, 0));
}

TEST (ft_memmove_test, overlap_when_src_is_biger_then_dest)
{
	const char	src[11] = "Hello World";
	char		dest[11] = "Hello World";

	TEST_ASSERT_EQUAL(memmove(dest+2, src, 4), ft_memmove(dest+2, src, 4));
}

TEST (ft_memmove_test, overlap_whe_dest_is_biger_the_src) 
{
	const char	src[11] = "Hello World";
	char		dest[11] = "Hello World";

	TEST_ASSERT_EQUAL(memmove(dest, src+2, 4), ft_memmove(dest, src+2, 4));
}
