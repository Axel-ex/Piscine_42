/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:33:11 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 14:01:20 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{	
	char	*s1;
	char	*s2;
	
	if (argc != 3)
	{
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];

	printf("result of the comparison of :%s: and :%s: is: %d\n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}
