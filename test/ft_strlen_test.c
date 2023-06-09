/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br >   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:18:52 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/24 22:25:32 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ft_strlen_test);

TEST_SETUP(ft_strlen_test)
{
}

TEST_TEAR_DOWN(ft_strlen_test)
{
}

TEST(ft_strlen_test, should_return_correct_string_lenght)
{
	char	*str;

	str = "hello world";
	TEST_ASSERT_EQUAL_INT(11, ft_strlen(str));
}

TEST(ft_strlen_test, should_return_null_from_string_null)
{
	char	*str;

	str = "";
	TEST_ASSERT_EQUAL(0, ft_strlen(str));
}

TEST(ft_strlen_test, should_return_null_from_string_true)
{
	char	*str;

	str = " ";
	TEST_ASSERT_EQUAL_INT(NULL, ft_strlen(str));
}
