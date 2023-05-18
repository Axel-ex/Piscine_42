/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:57:18 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 12:22:31 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
	char buf[100];
	char buf2[5];
	char str[] = "Hello world and everybody else";

	printf("\n\n\n\n");
	printf("the string %s", str);
	ft_strlcpy(buf, str, 100);
	printf("\nwas copied in :%s:", buf);
	printf("and is: %d\n", ft_strlcpy(buf, str, 100));


	printf("\n\n\n\n");
	printf("the string %s", str);
	ft_strlcpy(buf2, str, 5);
	printf("\nwas copied in a buffer too small and the result is :%s:", buf2);
	printf("and is: %d\n", ft_strlcpy(buf2, str, 0));



	return (0);
}
