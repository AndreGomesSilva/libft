/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:19:30 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/03 19:40:24 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1); 
	else 
		return (0);
}

int main()
{
	int var1 = 'c';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if(ft_isdigit(var1))
		printf("var1 is alpha\n");
	else
		printf("var1 is not alpha\n"); 
	
	if(ft_isdigit(var2))
		printf("var2 is alpha\n");
	else
		printf("var2 is not alpha\n"); 
	
	if(ft_isdigit(var3))
		printf("var3 is alpha\n");
	else
		printf("var3 is not alpha\n"); 
	
	if(ft_isdigit(var4))
		printf("var4 is alpha\n");
	else
		printf("var4 is not alpha\n"); 
	
}	
