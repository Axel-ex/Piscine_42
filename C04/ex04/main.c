/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:49:59 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 17:11:25 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int	nb, char *symbols);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (0);
	}

	int	nb;
	char	*symbols;

	nb = atoi(argv[1]);
	symbols = argv[2];

	ft_putnbr_base(nb,symbols);
	return (0);
}
