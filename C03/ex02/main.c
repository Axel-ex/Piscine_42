/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:50:38 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 19:25:25 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;

	if (argc != 3)
	{
		return (0);
	}

	dest = argv[1];
	src = argv[2];

	printf("source string:%s: will be append to dest :%s:\n", src, dest);
	printf("result string :%s:", ft_strcat(dest,src));
	return (0);
}
