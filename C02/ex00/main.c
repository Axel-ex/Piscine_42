/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:32:10 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/09 11:59:54 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[9] = "/////////";

	src = "Hello";
	printf("string we want to copy: %s\n",src);
	printf("string before: %s\n",dest);
	ft_strcpy(dest,src);
	printf("string after: %s\n",dest);


	return (0);
}
