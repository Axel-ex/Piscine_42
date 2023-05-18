/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:52:06 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/07 08:45:45 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int	size;
	int	i;

	i = 0;
	int	tab[8] = {1,2,3,4,5,6,7,8};
	size = 8;

	printf("tab initial:");
	while (i != size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	printf("\nafter function:");
	i=0;
	while(i != size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
