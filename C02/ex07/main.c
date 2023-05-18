/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:50:31 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 14:20:25 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main()
{

	char str1[] = "hellOworld@$%$#";
	char str2[] = "hello world";
	char str3[] = "HELLOWORLD";
	printf("result of the string :%s:\n", str1);
	printf("%s", ft_strupcase(str1));
	printf("\nresult of the string :%s:\n", str2);
	printf("%s", ft_strupcase(str2));
	printf("\nresult of the string :%s:\n", str3);
	printf("%s", ft_strupcase(str3));
}
