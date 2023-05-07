/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:27:04 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/07 17:27:53 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < 0)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	size -= dst_len;
	if (size == 0)
		return (dst_len + src_len);
	while (*(src + i) && --size != 0)
	{
		*(dst + dst_len) = *(src + i);
		i++;
		dst_len++;
	}
	*(dst + dst_len) = '\0';
	return ((dst_len - i) + src_len);
}
