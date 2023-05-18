/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:56:40 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/03 12:01:58 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 42;
	
	printf("before \n a: %d \n b: %d \n", a, b) ;
	ft_swap(&a, &b);
	printf("after \n a: %d \n b: %d \n", a, b);
	return 0;
}
