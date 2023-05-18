/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_recursion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:14:26 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/12 12:59:04 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	magic(int nb, int base_value, char *base_sys)
{
	if (nb > base_value)
		magic(nb/base_value, base_value, base_sys);

	int	i;
	i = 0;
	char my_symbol;
	my_symbol = base_sys[nb % base_value];
	while (base_sys[i] != my_symbol)
		i++;
	printf("%c", base_sys[i]);
}

int main(int argc, char **argv)
{
	int	nb;
	int	base_value;
	char 	*base_sys;
	
	nb = atoi(argv[1]);
	base_value = atoi(argv[2]);
	base_sys = argv[3];
	magic(nb, base_value, base_sys);
	return (0);

}
