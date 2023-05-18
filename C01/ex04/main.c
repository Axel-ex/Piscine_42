/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:11:11 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/07 10:08:39 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 2568;
	b = 598;
	
	printf("a = %d \nb = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("result of the division %d \nresult of the modulo %d \n", a, b);
}
