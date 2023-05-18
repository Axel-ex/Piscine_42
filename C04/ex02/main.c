/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:34:49 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/13 17:17:38 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int nbr;

	if (argc != 2)
	{
		return (0);
	}
	nbr = atoi(argv[1]);
	ft_putnbr(nbr);
	return (0);

}
