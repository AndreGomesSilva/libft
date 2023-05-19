#include "unity.h"
#include "unity_fixture.h"
#include "libft.h"

TEST_GROUP(ft_strmapi_test);

TEST_SETUP(ft_strmapi_test)
{
}

TEST_TEAR_DOWN(ft_strmapi_test)
{
}
char addOne(unsigned int i, char c) {return (i + c);}

TEST (ft_strmapi_test, should_return_the_new_string_with_pointerf_apply)
{



	char  (*f)(unsigned int, char);
	f = &addOne;
	char * s = ft_strmapi("1234", addOne);

	TEST_ASSERT_EQUAL_STRING("1357", s);
}


