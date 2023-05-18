/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:20:49 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/21 16:23:36 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	arr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!arr)
		return (0);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*final;

	final = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!final)
		return (0);
	i = 0;
	while (i < ac)
	{
		final[i].size = ft_strlen(av[i]);
		final[i].str = av[i];
		final[i].copy = ft_strdup(av[i]);
		i++;
	}
	final[i].str = 0;
	final[i].copy = 0;
	return (final);
}
