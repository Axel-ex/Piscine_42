/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:32:10 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/08 17:14:38 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[10] = "/////////";
	int	n;

	n = 7;
	src = "Hello";
	printf("string we want to copy: %s\n",src);
	printf("string before: %s\n",dest);
	ft_strncpy(dest,src,n);
	printf("string after: %s\n",ft_strncpy(dest,src,n));
	return (0);
}
