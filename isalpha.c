/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angomes- <angomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:25:32 by angomes-          #+#    #+#             */
/*   Updated: 2023/05/03 19:16:20 by angomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

//int main()
//{
//	int var1 = 'c';
//	int var2 = '2';
//	int var3 = '\t';
//	int var4 = ' ';
//
//	if(ft_isalpha(var1))
//		printf("var1 is alpha\n");
//	else
//		printf("var1 is not alpha\n"); 
//	
//	if(ft_isalpha(var2))
//		printf("var2 is alpha\n");
//	else
//		printf("var2 is not alpha\n"); 
//	
//	if(ft_isalpha(var3))
//		printf("var3 is alpha\n");
//	else
//		printf("var3 is not alpha\n"); 
//	
//	if(ft_isalpha(var4))
//		printf("var4 is alpha\n");
//	else
//		printf("var4 is not alpha\n"); 
//	
//}
