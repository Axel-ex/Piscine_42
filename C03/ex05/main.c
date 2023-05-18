/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:32:36 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 14:29:45 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main(int argc, char *argv[])
{
	char	*dest;
	char	*src;
	int size;

	if (argc != 4)
	{
		return (0);
	}

	dest = argv[1];
	src = argv[2];
	size = atoi(argv[3]);

	printf("%u\n", ft_strlcat(dest,src,size));
	printf("%s\n", dest);
	return (0);
}
