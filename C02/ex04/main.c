/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:50:31 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/07 19:11:42 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char	*str1;
	char	*str2;
	
	str1 = "hellOworld";
	str2 = "helloworld";
	printf("result of the string :%s: %d\n", str1, ft_str_is_lowercase(str1));
	printf("result of the string :%s: %d\n", str2, ft_str_is_lowercase(str2));
}
