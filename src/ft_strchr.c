/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:21:07 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/22 15:40:01 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*cpys;

	cpys = (unsigned char *)s;
	while (*cpys)
	{
		if (*cpys == (unsigned char)c)
			return ((char *)cpys);
		cpys++;
	}
	if (!c)
		return ((char *)cpys);
	return (NULL);
}
