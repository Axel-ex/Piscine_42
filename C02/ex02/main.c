/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:01:36 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 10:18:34 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "HELLO";
	str2 = "hELL@";
	str3 = "salUt";
	str4 = "";
	printf("the result of str: %s is :%d\n",str1,ft_str_is_alpha(str1));
	printf("the result of str: %s is :%d\n",str2,ft_str_is_alpha(str2));
	printf("the result of str: %s is :%d\n",str3,ft_str_is_alpha(str3));
	printf("the result of str: %s is :%d\n",str4,ft_str_is_alpha(str4));

}
