/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:52:36 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/06 19:58:26 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main ()
{
	char	*str;
	char	*str2;
	char	nb_line;
	
	str = "Hello world";
	str2 = "";
	nb_line = ft_strlen(str);
	printf("the string :%s: is %d char long\n", str, nb_line);
	nb_line = ft_strlen(str2);
	printf("the string :%s: is %d char long\n", str2, nb_line);
	return (0);
}
