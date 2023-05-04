/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:30:33 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/03 17:22:57 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpysrc;
	char	*cpydest;
	int		i;

	cpysrc = (char *)src;
	cpydest = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(cpydest + i) = *(cpysrc + i);
		i++;
	}
	return (dest);
}
