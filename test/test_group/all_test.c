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
	RUN_TEST_CASE(ft_strncmp_test, should_return_positive_s1_equal_200_in_the_end);
}

TEST_GROUP_RUNNER(ft_atoi_test)
{
	RUN_TEST_CASE(ft_atoi_test, should_return_null_pass_mult_sing);
	RUN_TEST_CASE(ft_atoi_test, should_ignore_init_spaces);
	RUN_TEST_CASE(ft_atoi_test, should_return_possitive_number)
	RUN_TEST_CASE(ft_atoi_test, should_return_negative_number)
	RUN_TEST_CASE(ft_atoi_test, should_return_null_when_pass_null)
}

TEST_GROUP_RUNNER(ft_memmove_test)
{
	RUN_TEST_CASE(ft_memmove_test, should_return_dest_when_pass_size_0);
	RUN_TEST_CASE(ft_memmove_test, overlap_whe_dest_is_biger_the_src);
	RUN_TEST_CASE(ft_memmove_test, overlap_when_src_is_biger_then_dest);
	RUN_TEST_CASE(ft_memmove_test, pass_src_and_dest_null_with_size);
}

TEST_GROUP_RUNNER(ft_memcmp_test)
{
	RUN_TEST_CASE(ft_memcmp_test, should_return_0_when_same_string);
	RUN_TEST_CASE(ft_memcmp_test, shoud_return_positive_when_s1_biger_then_s2);
}	

TEST_GROUP_RUNNER(ft_strlcat_test)
{
	RUN_TEST_CASE(ft_strlcat_test, should_return_len_dst_src_when_pass_size_0_dst_0);
	RUN_TEST_CASE(ft_strlcat_test, should_return_dst_plus_onesrc_when_size_is_dst_plus_one);
	RUN_TEST_CASE(ft_strlcat_test, should_return_10_and_concat_the_strings);
}

TEST_GROUP_RUNNER(ft_strchr_test)
{
	RUN_TEST_CASE(ft_strchr_test, should_return_NULL_if_str_is_null);
	RUN_TEST_CASE(ft_strchr_test, should_return_the_right_position);
}
TEST_GROUP_RUNNER(ft_strrchr_test)
{
	RUN_TEST_CASE(ft_strrchr_test, should_return_the_search_char);
	RUN_TEST_CASE(ft_strrchr_test, should_return_pointer_to_terminator_if_c_is_null);
	RUN_TEST_CASE(ft_strrchr_test, should_return_the_last_char_we_looking_for);
	RUN_TEST_CASE(ft_strrchr_test, should_return_NULL_when_char_not_found);
}

TEST_GROUP_RUNNER(ft_strnstr_test)
{
	RUN_TEST_CASE(ft_strnstr_test, should_return_bigstring_when_substring_is_empty);
	RUN_TEST_CASE(ft_strnstr_test, should_return_NULL_when_substring_not_found_in_bigstring);
	RUN_TEST_CASE(ft_strnstr_test, should_return_pointer_to_the_first_substring_found);
	RUN_TEST_CASE(ft_strnstr_test, should_return_null_if_len_end_and_substring_is_more_than_one);
	RUN_TEST_CASE(ft_strnstr_test, should_return_the_found_substring_if_len_is_negative);
}

TEST_GROUP_RUNNER(ft_bzero_test)
{
	RUN_TEST_CASE(ft_bzero_test, should_add_null_in_the_array_until_size);
}

TEST_GROUP_RUNNER(ft_substr_test)
{
	RUN_TEST_CASE(ft_substr_test, should_return_0_equal_str);
	RUN_TEST_CASE(ft_substr_test, should_return_null_when_start_is_0);
	RUN_TEST_CASE(ft_substr_test, should_return_just_the_last_char);

}

TEST_GROUP_RUNNER(ft_strjoin_test)
{
	RUN_TEST_CASE(ft_strjoin_test, should_return_the_str_concat);
}

TEST_GROUP_RUNNER(ft_strmapi_test)
{
	RUN_TEST_CASE(ft_strmapi_test, should_return_the_new_string_with_pointerf_apply);
}

TEST_GROUP_RUNNER(ft_strtrim_test)
{
	RUN_TEST_CASE(ft_strtrim_test, should_return_the_string_without_x);
	RUN_TEST_CASE(ft_strtrim_test, should_return_null_s1_is_space_and_set_is_space);
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
	RUN_TEST_GROUP(ft_memmove_test);
	RUN_TEST_GROUP(ft_memcmp_test);
	RUN_TEST_GROUP(ft_strlcat_test);
	RUN_TEST_GROUP(ft_strrchr_test);
	RUN_TEST_GROUP(ft_strchr_test);
	RUN_TEST_GROUP(ft_strnstr_test);
	RUN_TEST_GROUP(ft_bzero_test);
	RUN_TEST_GROUP(ft_substr_test);
	RUN_TEST_GROUP(ft_strjoin_test);
	RUN_TEST_GROUP(ft_strmapi_test);
	RUN_TEST_GROUP(ft_strtrim_test);
}

int	main(int argc, const char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
