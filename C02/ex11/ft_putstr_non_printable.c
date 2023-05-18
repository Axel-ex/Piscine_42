/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:57:45 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/14 17:16:30 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char c)
{
	char	*base;
	int		div;
	int		mod;

	base = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, &base[div], 1);
	write(1, &base[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
