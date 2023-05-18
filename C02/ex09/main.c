/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:47:10 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/11 20:05:13 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char	str[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("the string: %s\n", str);
	ft_strcapitalize(str);
	printf("becomes: %s\n", str);
}
