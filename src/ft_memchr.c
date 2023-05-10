/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 21:43:17 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/09 22:26:44 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpys;
	unsigned char	cpyc;

	if (!n || !s)
		return (0);
	cpys = (unsigned char *)s;
	cpyc = (unsigned char)c;
	while (n--)
	{
		if (*cpys == cpyc)
			return ((void *)cpys);
		cpys++;
	}
	return (0);
}
