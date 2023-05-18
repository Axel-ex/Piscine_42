/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:10:49 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/08 16:10:42 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	i;
	int	size;

	i = 0;
	size = 6;
	int	tab[5] = {1,4,1,4,2};
	
	printf("array before conversion:");
	while (i != size - 1)
	{
		printf("%d", tab[i]);
		printf(",");
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("\narray after conversion:");
	i = 0;
	while (i != size - 1)
		{
			printf("%d", tab[i]);
			printf(",");
			i++;
		}
	return (0);


}
