/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:01:18 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/03 09:11:11 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_ft(int *nbr);

int	main()
{
	int	i;

	i = 25;
	printf("value before: %d \n", i);
	ft_ft(&i);
	printf("value after: %d \n", i);

	return 0;

}
