#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_memcpy_test);

TEST_SETUP(ft_memcpy_test)
{
}

TEST_TEAR_DOWN(ft_memcpy_test)
{
}

TEST (ft_memcpy_test, should_return_the_same_string)
{
	const char src[20] = "hello world 3000";
	char dest[20] = "tesseract";
	char dest2[20] = "tesseract";

	TEST_ASSERT_EQUAL_STRING(memcpy(dest2, src, 18) , ft_memcpy(dest, src,18)); 
}
