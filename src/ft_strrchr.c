/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:43:41 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/13 13:08:50 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t		s_len;
	char const	*cpys;	

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	cpys = s;
	cpys = s + s_len;
	while (cpys != s)
	{
		if (*(cpys) == (char) c)
			return ((char *)cpys);
		cpys--;
	}
	if (*(s) == (char) c)
		return ((char *) s);
	if (!c)
		return ((char *) s);
	return (NULL);
}
