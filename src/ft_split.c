/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:22:59 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/20 11:24:23 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**strings;
	int		s_len;
	int		i;	

	n_words = count_words(s, c);
	strings = (char **) malloc(n_words + 1 * sizeof(char *));
	s_len = 0;
	i = 0;
	while (*s && i < n_words)
	{
		while (*s && *s == c)
		{
			s++;
		}
		s_len = 0;
		while (*s && *s != c)
		{
			s_len++;
			s++;
		}
		*(strings + i) = ft_substr(s - s_len, 0, s_len);
		i++;
	}
	*(strings + i) = NULL;
	return (strings);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	old_i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
			i++;
		}
		old_i = i;
		while (*s && *s != c)
		{
			s++;
			i++;
		}
		if (i > old_i)
			n_words += 1;
	}
	return (n_words);
}

int main()
{
	char const s[] = "asda s as das fasf  ";
	char c = ' ';
	int i = 0;
	char **result = ft_split(s, c);

	while (*(result + i))
	{
		printf("%s \n", *(result + i));
		i++;
	}
	free(result);

}
