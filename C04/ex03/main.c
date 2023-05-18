/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:23:44 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 19:04:15 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	char	*str;
	
	if (argc != 2)
	{
		return (0);
	}

	str = argv[1];
	printf("%d", ft_atoi(argv[1]));
	return (0);
}
