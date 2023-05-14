/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:16:38 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/14 12:23:06 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t		size_str;
	char		*new_str;

	size_str = (ft_strlen(s)) + 1;
	new_str = (char *) malloc(size_str * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s, size_str);
	return (new_str);
}
