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
	const char src[50] = "hello world 3000";
	const char dest[50] = "tesseract";

	ft_memcpy(dest, src, ft_strlen(src) + 1);
	TEST_ASSERT_EQUAL_STRING(src, dest);  
}
