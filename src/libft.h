/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:07:36 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/14 13:40:44 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
