/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:13:46 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 10:14:51 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char str1[] = "HELLO mY FRIend";

	printf("the string :%s: will be transformed into: ", str1);
	ft_strlowcase(str1);
	printf("%s\n", str1);
}
