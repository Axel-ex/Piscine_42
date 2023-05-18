/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:13:21 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/07 11:06:30 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div = NULL;
	int	*mod = NULL;
	
	a = 2598;
	b = 156;

	ft_div_mod(a, b, div,mod);
	printf("a: %d \nb: %d \n",a ,b);
	printf("result of division: %d\nresult of the modulo: %d\n", *div, *mod);
}
