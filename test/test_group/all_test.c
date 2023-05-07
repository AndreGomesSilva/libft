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
	RUN_TEST_CASE (ft_isalnum_test, should_return_false_symbol);
}

TEST_GROUP_RUNNER(ft_isascii_test)
{
	RUN_TEST_CASE (ft_isascii_test, should_return_true_pass_char);
	RUN_TEST_CASE (ft_isascii_test, should_return_0_for_negative_value);
	RUN_TEST_CASE (ft_isascii_test, should_return_true_pass_number);
	RUN_TEST_CASE (ft_isascii_test, should_return_true_when_pass_non_alphanum);
	RUN_TEST_CASE (ft_isascii_test, should_return_true_symbol);
}

TEST_GROUP_RUNNER(ft_strlcpy_test)
{
	RUN_TEST_CASE(ft_strlcpy_test, should_return_len_pass_src);
	RUN_TEST_CASE(ft_strlcpy_test, shold_return_one_when_pass_null_src);
	RUN_TEST_CASE(ft_strlcpy_test, should_not_copy_pass_negative_size);
}

TEST_GROUP_RUNNER(ft_strncmp_test)
{
	RUN_TEST_CASE(ft_strncmp_test, should_return_0_equal_str);
	RUN_TEST_CASE(ft_strncmp_test, should_return_possitive_value);
	RUN_TEST_CASE(ft_strncmp_test, should_return_negative_value);
	RUN_TEST_CASE(ft_strncmp_test, should_return_false_if_n_is_null);
}

TEST_GROUP_RUNNER(ft_atoi_test)
{
	RUN_TEST_CASE(ft_atoi_test, should_return_null_pass_mult_sing);
	RUN_TEST_CASE(ft_atoi_test, should_ignore_init_spaces);
	RUN_TEST_CASE(ft_atoi_test, should_return_possitive_number)
	RUN_TEST_CASE(ft_atoi_test, should_return_negative_number)
}

static void	run_all_tests(void)
{
	RUN_TEST_GROUP(ft_strlen_test);
	RUN_TEST_GROUP(ft_memcpy_test);
	RUN_TEST_GROUP(ft_isalpha_test);
	RUN_TEST_GROUP(ft_isdigit_test);
	RUN_TEST_GROUP(ft_isalnum_test);
	RUN_TEST_GROUP(ft_isascii_test);
	RUN_TEST_GROUP(ft_strlcpy_test);
	RUN_TEST_GROUP(ft_strncmp_test);
	RUN_TEST_GROUP(ft_atoi_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
