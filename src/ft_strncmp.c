/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:43:32 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/06 17:34:35 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{	
	if (n == 0)
		return (0);
	while (*str1 == *str2 && *str1 && --n)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
