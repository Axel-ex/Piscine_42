/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:33:11 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 14:11:39 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	int	n;
	
	if (argc != 4)
	{
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	

	printf("result of the comparison of :%s: and :%s: on the %d first bytes  is: %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
	return (0);
}
