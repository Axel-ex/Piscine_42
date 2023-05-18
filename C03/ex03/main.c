/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:56:26 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 11:56:17 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *src, char *dest, unsigned int nb);

int	main(int argc, char **argv)
{
	char *src;
	char *dest;
	int nb;
	
	if (argc != 4)
	{
		return (0);
	}

	src = argv[1];
	dest = argv[2];
	nb = atoi(argv[3]);
	printf("The %d first bytes of the source string :%s: will be append to dest :%s:\n",nb, dest, src);
	printf("result string :%s:", ft_strncat(src,dest,nb));
	return (0);
}
