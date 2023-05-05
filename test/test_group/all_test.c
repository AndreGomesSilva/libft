#include "unity_fixture.h"

TEST_GROUP_RUNNER(ft_strlen_test)
{
	RUN_TEST_CASE(ft_strlen_test, should_return_correct_string_lenght);
	RUN_TEST_CASE(ft_strlen_test, should_return_null_from_string_null);
}

TEST_GROUP_RUNNER(ft_memcpy_test)
{
	RUN_TEST_CASE(ft_memcpy_test, should_return_the_same_string);
}

TEST_GROUP_RUNNER(ft_isdigit_test)
{
	RUN_TEST_CASE(ft_isdigit_test, should_return_true_pass_number);
	RUN_TEST_CASE(ft_isdigit_test, should_return_false_if_less_0);
}

TEST_GROUP_RUNNER(ft_isalpha_test)
{
	RUN_TEST_CASE(ft_isalpha_test, should_return_true_pass_char);
	RUN_TEST_CASE(ft_isalpha_test, pass_negative_value);
}

TEST_GROUP_RUNNER(ft_isalnum_test)
{
	RUN_TEST_CASE (ft_isalnum_test, should_return_true_pass_char);
	RUN_TEST_CASE (ft_isalnum_test, should_return_0_for_negative_value);
	RUN_TEST_CASE (ft_isalnum_test, should_return_true_pass_number);
	RUN_TEST_CASE (ft_isalnum_test, should_return_false_when_pass_nonalnum);
}
static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_strlen_test);
	RUN_TEST_GROUP(ft_memcpy_test);
	RUN_TEST_GROUP(ft_isalpha_test);
	RUN_TEST_GROUP(ft_isdigit_test);
	RUN_TEST_GROUP(ft_isalnum_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
