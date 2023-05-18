/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:27:43 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 15:30:46 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	char *str;
	
	if (argc != 2)
	{
		return (0);
	}
	str = argv[1];
	printf("%d", ft_strlen(str));
	return (0);

}
