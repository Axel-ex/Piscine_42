/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:20:50 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 11:16:07 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char *argv[])
{
	char	*str;
	char	*to_find;

	if (argc != 3)
	{
		return (0);
	}
	
	str = argv[1];
	to_find = argv[2];
	printf("%s\n", ft_strstr(str,to_find));
	return (0);
}
