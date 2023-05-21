/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:21:07 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/20 21:30:12 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*cpys;

	if (!s)
		return (NULL);
	cpys = s;
	while (*cpys)
	{
		if (*cpys == (char)c)
			return ((char *)cpys);
		cpys++;
	}
	if (!c)
		return ((char *)cpys);
	return (NULL);
}
