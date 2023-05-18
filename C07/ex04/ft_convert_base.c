/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:16 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/22 14:37:48 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

int	check_str(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	convert_to_dec(char *str, char *base, int size)
{
	int	nb;
	int	power;
	int	i;

	nb = 0;
	power = 1;
	while (size >= 0)
	{
		i = 0;
		while (base[i] != '\0' && base[i] != str[size])
			i++;
		nb += i * power;
		power = power * ft_strlen(base);
		size--;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (check_base(base) == 0)
		return (0);
	if (str)
	{
		while (str[0] == ' ' || (str[0] >= 9 && str[0] <= 13))
			str++;
		while (str[0] == '-' || str[0] == '+')
		{
			if (str[0] == '-')
				sign = sign * -1;
			str++;
		}
		while (str[i] != '\0' && check_str(str[i], base) == 1)
			i++;
		return (sign * convert_to_dec(str, base, i - 1));
	}
	return (0);
}
