/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:50:31 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/07 09:20:48 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "hellOworld@$%$#";
	str2 = "hello world";
	str3 = "HELLOWORLD\n";
	printf("result of the string :%s: %d\n", str1, ft_str_is_printable(str1));
	printf("result of the string :%s: %d\n", str2, ft_str_is_printable(str2));
	printf("result of the string :%s: %d\n", str3, ft_str_is_printable(str3));
}
