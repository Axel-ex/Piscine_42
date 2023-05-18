/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:15:07 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/17 12:52:19 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_double(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_printnbr(int nb, int base_value, char *symbols)
{
	long	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		nblong = -nblong;
		ft_putchar('-');
	}
	if (nblong >= base_value)
		ft_printnbr(nblong / base_value, base_value, symbols);
	ft_putchar(symbols[nblong % base_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;
	int	i;

	i = 0;
	base_value = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return ;
		i++;
		base_value++;
	}
	if (base_value < 2)
		return ;
	if (check_double(base) == 0)
		return ;
	ft_printnbr(nbr, base_value, base);
}
